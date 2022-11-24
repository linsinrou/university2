#include <stdio.h>
#include <iostream>
using namespace std;

int fact(int n)
{
    if (n == 0)
        return 1;
    if (n >= 1)
        return n * fact(n - 1);
}

int main(int argc, char* argv[]) {
    // write here //
    int n;
    cin >> n;
    cout << fact(n) << endl;
}

/*
請寫一個int fact(int n)副程式，使用遞迴的方式計算n階乘的值，並回傳計算結果。

輸入範例：
10

輸出範例：
3628800


系統輸入：1個int型態的數值

結果輸出：1個int型態的數值
*/