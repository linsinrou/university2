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
�мg�@��void Towers(int n, char a, char b, char c)�Ƶ{���A�̷ӡu�e����v���C���覡�A�z�L���j���覡�A�Nn�ӽL�l�qa�h����c�A�ë��ӿ�X�d�ҦC�X�Ҧ����ʹL�{�C

�e����W�h�G
��3�ӬW�l���O��a, b, c�Aa�W�l�W��n�ӽL�l�A�L�l�ؤo�ѤU��W�̦��ܤp�C�n�D���U�C�W�h�N�Ҧ��L�l����c�W�l�C
1. �C���u�ಾ�ʤ@�ӽL�l�C
2. �j�L�l�����|�b�p�L�l�W���C

��J�d�ҡG
3

��X�d�ҡG
Move disk 1 from A to C
Move disk 2 from A to B
Move disk 1 from C to B
Move disk 3 from A to C
Move disk 1 from B to A
Move disk 2 from B to C
Move disk 1 from A to C


�t�ο�J�G1��int���A���ƭ�

���G��X�G�ԭz���ʹL�{���r��]�C�@���r��n����^
*/