#include <stdio.h>
#include <iostream>
using namespace std;

void Towers(int n, char a, char b, char c)
{
    if (n == 1)
    {
        cout << "Move disk" << n << " from" << a << " to" << c << endl;
    }
    else
    {
        Towers(n - 1, a, c, b);
        cout << "Move disk" << n << " from" << a << " to" << c << endl;
        Towers(n - 1, b, a, c);
    }
}

int main(int argc, char* argv[]) {
    // write here //
    int n;
    cin >> n;
    Towers(n, 'A', 'B', 'C');
    cout << endl;

}

/*
請寫一個void Towers(int n, char a, char b, char c)副程式，依照「河內塔」的遊戲方式，透過遞迴的方式，將n個盤子從a搬移到c，並按照輸出範例列出所有移動過程。

河內塔規則：
有3個柱子分別為a, b, c，a柱子上有n個盤子，盤子尺寸由下到上依次變小。要求按下列規則將所有盤子移至c柱子。
1. 每次只能移動一個盤子。
2. 大盤子不能疊在小盤子上面。

輸入範例：
3

輸出範例：
Move disk 1 from A to C
Move disk 2 from A to B
Move disk 1 from C to B
Move disk 3 from A to C
Move disk 1 from B to A
Move disk 2 from B to C
Move disk 1 from A to C


系統輸入：1個int型態的數值

結果輸出：敘述移動過程的字串（每一筆字串要換行）
*/