#include <stdio.h>
#include <iostream>
using namespace std;

int GCD(int a, int b)
{
    if (b == 0)
        return a;
    return GCD(b, a % b);
}

int main(int argc, char* argv[]) {
    // write here //
    int a, b;

    cin >> a >> b;
    cout << GCD(a, b) << endl;
}
/*
請寫一個int GCD(int a, int b)副程式，可以求出a和b的最大公因數（greatest common divisor），並回傳計算結果。請使用「輾轉相除法」來計算。

輸入範例：
18 15

輸出範例：
3


系統輸入：2個int型態的數值

結果輸出：1個int型態的數值
*/