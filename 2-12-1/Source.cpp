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