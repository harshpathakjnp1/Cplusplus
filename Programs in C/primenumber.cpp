#include <iostream>
using namespace std;
int main()
{
    int i, start = 2, flag;

    while (start < 500)
    {
        flag = 0;
        for (i = 2; i <= start / 2; i++)
        {
            if (start % i == 0)
            {
                flag = 1;
            }
        }
        if (flag == 0)
        {
            cout << start << ",";
        }
        start++;
    }
}