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
�мg�@��int GCD(int a, int b)�Ƶ{���A�i�H�D�Xa�Mb���̤j���]�ơ]greatest common divisor�^�A�æ^�ǭp�⵲�G�C�ШϥΡu����۰��k�v�ӭp��C

��J�d�ҡG
18 15

��X�d�ҡG
3


�t�ο�J�G2��int���A���ƭ�

���G��X�G1��int���A���ƭ�
*/