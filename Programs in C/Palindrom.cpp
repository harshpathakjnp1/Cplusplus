#include <iostream>
using namespace std;
int main()
{
    int n, num, digit, rev = 0;
    for (num = 111; num < 500; num++)
    {
        n = num;
        do
        {
            digit = num % 10;
            rev = (rev * 10) + digit;
            num = num / 10;
        } 
        while (num !=0);

        if (n == rev)
            cout << rev << endl;
    }

    return 0;
}