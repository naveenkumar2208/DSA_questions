//in a 2D integer array of size N x M print in a sine wave pattern
//print the first column top to down, next column down to top and so on

#include <bits/stdc++.h>
using namespace std;

void sineWave(int **arr, int nRows, int mCols)
{
    int i;
   for(int j=0;j<mCols;j++)
   {
       //even column number
        if(j%2==0)
        {
           for(i=0;i<nRows;i++)
           {
           cout<<arr[i][j]<<" ";
           }
        }
     
       //odd column number
           else 
           { 
             for(i=nRows-1;i>-1;i--)
              {
               cout<<arr[i][j]<<" ";
               }
           }
            
            
      }
   }

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int row, col;
		cin >> row >> col;
		int **arr = new int *[row];
		for (int i = 0; i < row; i++)
		{
			arr[i] = new int[col];
			for (int j = 0; j < col; j++)
			{
				cin >> arr[i][j];
			}
		}
		sineWave(arr, row, col);
		cout << endl;
	}
}
