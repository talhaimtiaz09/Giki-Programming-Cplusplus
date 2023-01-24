#include <iostream>
using namespace std;
void func(int arr[][5], int i)
{
    if (i <= 2)
    {
        for (int j = i; j < 5 - i; j++)
            cout << arr[i][j] << " ";

        for (int j = i + 1; j < 5 - i; j++)
            cout << arr[j][4 - i] << " ";

        for (int j = i + 1; j < 5 - i; j++)
            cout << arr[4 - i][4 - j] << " ";

        for (int j = i + 1; j < 4 - i; j++)
            cout << arr[4 - j][i] << " ";
        func(arr, i + 1);
    }

    else
        return;
}

int main()
{

    int arr[5][5] = {{1, 2, 3, 4, 5}, {16, 17, 18, 19, 6}, {15, 24, 25, 20, 7}, {14, 23, 22, 21, 8}, {13, 12, 11, 10, 9}};
    func(arr, 0);
    return 0;
}