// convert roman number to integer number

#include <string.h>
#include <stdio.h>

int romanToInt(char *s)
{
    int int_value = 0;
    int length = strlen(s);
    for (int i = 0; i < length; i++)
    {
        if (s[i] == 'I')
        {
            if (s[i + 1] == 'V')
            {
                int_value += 4;
                i = i + 1;
            }
            else if (s[i + 1] == 'X')
            {
                int_value += 9;
                i = i + 1;
            }
            else
            {
                int_value += 1;
            }
        }
        else if (s[i] == 'V')
        {
            int_value += 5;
        }
        else if (s[i] == 'X')
        {
            if (s[i + 1] == 'C')
            {
                int_value += 90;
                i = i + 1;
            }
            else if (s[i + 1] == 'L')
            {
                int_value += 40;
                i = i + 1;
            }
            else
            {
                int_value += 10;
            }
        }
        else if (s[i] == 'L')
        {
            int_value += 50;
        }
        else if (s[i] == 'C')
        {
            if (s[i + 1] == 'D')
            {
                int_value += 400;
                i = i + 1;
            }
            else if (s[i + 1] == 'M')
            {
                int_value += 900;
                i = i + 1;
            }
            else
            {
                int_value += 100;
            }
        }
        else if (s[i] == 'D')
        {
            int_value += 500;
        }
        else if (s[i] == 'M')
        {
            int_value += 1000;
        }
    }

    return int_value;
}