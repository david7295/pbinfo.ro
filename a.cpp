#include "stdafx.h"
#include <iostream>

using namespace std;

bool cifre(int numar)
{
        int c = numar % 10;

        while (numar > 0)
        {
               if (numar % 10 == c)
                        numar /= 10;
                else
                        break;
        }

      return (numar == 0);
}


void identice(int a, int b)
{
        for (int i = a; i <= b; i++)
        {
                  if (cifre(i))
                        cout << i << " ";
        }
}

int main()
{
        int a, b;
        cin >> a >> b;

        identice(a, b);
}
