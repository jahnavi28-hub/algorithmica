#include <bits/stdc++.h>
using namespace std;
int NextPrime(int a)
{
    int i, j, count, num;
    for (i = a + 1; 1; i++)
    {
        for (j = 2, count = 0; j <= i; j++)
        {
            if (i%j == 0)
            {
                count++;
            }
        }
        if (count == 1)
        {
            return i;
            break;
        }
    }
    return 0;
}
