#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 0, 6, 0, 0, 2,3,7,7};
    int size = sizeof(arr) / sizeof(int);
    int arr2[10] = {0};
    for (int i = 0; i < size; i++)
    {
        int x = arr[i];
        arr2[x]++;
    }
    for (int i = 0; i <= 9; i++)
    {
        cout <<i<<" : "<< arr2[i] << "  ,  ";
    }
    cout << endl;
}