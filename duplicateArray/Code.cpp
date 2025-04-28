#include <iostream>
using namespace std;

void duplicateArray(int num[], int size)
{
    int D_arr[size];
    for (int i = 0; i < size; ++i)
    {
        D_arr[i] = num[i];
    }

    for (int i = 0; i < size; i++)
    {
        cout << D_arr[i] << endl;
    }
}

int main()
{
    int num[] = {1, 2, 3, 45, 3};
    int size = sizeof(num) / sizeof(num[0]);
    duplicateArray(num, size);
}