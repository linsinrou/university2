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
�мg�@��int fact(int n)�Ƶ{���A�ϥλ��j���覡�p��n�������ȡA�æ^�ǭp�⵲�G�C

��J�d�ҡG
10

��X�d�ҡG
3628800


�t�ο�J�G1��int���A���ƭ�

���G��X�G1��int���A���ƭ�
*/