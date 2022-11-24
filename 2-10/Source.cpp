#include <iostream>
using namespace std;

const int a_rows = 2;
const int b_rows = 3;
const int columns = 3;

void matrix_init(int a[][columns], int b[][columns]) {
    for (int i = 0; i < a_rows; i++)
        for (int j = 0; j < columns; j++)
            cin >> a[i][j];
    for (int i = 0; i < b_rows; i++)
        for (int j = 0; j < columns; j++)
            cin >> b[i][j];
}

void matrix_mul(int a[][columns], int b[][columns], int c[][columns])
{
    int x, y;
    x = y = 0;

    for (int x = 0; x < 2; x++)
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                c[x][i] += a[x][j] * b[j][i];
            }
        }
    }
}

void matrix_print(int arr[][columns])
{
    for (int i = 0; i < a_rows; i++)
        for (int j = 0; j < columns; j++)
            cout << arr[i][j] << " ";
}

int main(int argc, char* argv[]) {
    int A[a_rows][columns], B[b_rows][columns], C[a_rows][columns]={0};
    matrix_init(A, B);
    matrix_mul(A, B, C);
    matrix_print(C);
}

/*
請寫一個void matrix_mul(int a[][columns], int b[][columns], int c[][columns])的副程式，可以對矩陣a和矩陣b進行「矩陣相乘」，並將相乘的結果儲存至矩陣c。再寫void matrix_print(int arr[][columns])的副程式，輸出矩陣c的結果。

矩陣a範例：
1 2 3
4 5 6

矩陣b範例：
1 0 1
1 1 0
0 1 1

相乘後的矩陣c：
3 5 4
9 11 10

輸出範例：
3 5 4 9 11 10



系統輸入：15個int型態的數值（2*3的矩陣和3*3的矩陣）

結果輸出：6個int型態的數值
*/
