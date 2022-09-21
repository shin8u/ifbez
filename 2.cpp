#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream input("input.txt");
    ofstream output("output.txt");
    int alph, kol_slov, del, sum, x, n, a[30000], i = 0;
    input >> alph;
    input >> kol_slov;
    input >> del;
    input >> sum;
    n = alph * del + sum;
    while (!input.eof()) 
    {
        input >> x;
        if (x - sum >= 0)
        x -= sum;
        else x = alph - abs(x - sum);
        while (x < n)
        {
            if (x % del == 0)
            {
                x /= del;                 
                a[i] = x;
                i++;
                break;
            }
            else x += alph;
        }
    }
    if (i == kol_slov)
    {
        output << "YES" << "\n";
        for (i = 0; i < kol_slov; i++)
        {
            output << a[i] << ' ';
        }
    }
    else output << "NO";
    input.close();
    output.close();
}

