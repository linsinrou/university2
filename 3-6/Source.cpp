#include <stdio.h>
#include <iostream>
using namespace std;

int Fib(int n)
{
    if (n == 1 || n == 2)
        return 1;
    if (n >= 3)
        return Fib(n - 1) + Fib(n - 2);
}

int main(int argc, char* argv[]) {
    // write here //
    int n;
    cin >> n;
    cout << Fib(n) << endl;
}
/*
�мg�@��int Fib(int n)�Ƶ{���A�ϥλ��j���覡�p���n�ӶO���ơ]Fibonacci number�^�A�æ^�ǭp�⵲�G�C

���ܡG�O���ƦC={0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144...}�A��n�ӶO����=��n-1�ӶO����+��n-2�ӶO����

��J�d�ҡG
6

��X�d�ҡG
8


�t�ο�J�G1��int���A���ƭ�

���G��X�G1��int���A���ƭ�
*/