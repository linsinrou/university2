#include <iostream>
using namespace std;
int main(int argc, char* argv[]) {
    int Array_Data[5][5];
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++)
            cin >> Array_Data[i][j];

    int Array_Ans[15] = {}, x = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (Array_Data[i][j] != 0)
            {
                Array_Ans[x] = Array_Data[i][j];
                x++;
            }
        }
    }


    for (int i = 0; i < 15; i++)
        cout << Array_Ans[i] << " ";
}

/*
有一個上三角矩陣如下，請使用「以列為主」的方式，將上三角矩陣儲存成一維陣列，並輸出其結果。

範例輸入：
1 2 3 4 5
0 6 7 8 9
0 0 10 11 12
0 0 0 13 14
0 0 0 0 15

範例輸出：
1 2 3 4 5 6 7 8 9 10 11 12 13 14 15



系統輸入：25個int型態的數值（5*5的陣列）

結果輸出：15個int型態的數值

※不使用if條件式
*/
