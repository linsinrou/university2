#include <iostream>
using namespace std;

class Stack
{
public:
    
    int capacity = 10;
    int* array = new int[capacity];
    int top = -1;

    Stack() {}
    void Push(int x)
    {
        top++;
        array[top] = x;
    }
    void Pop()
    {
        top--;
    }
    void PrintStack()
    {
        for (int i = top; i >= 0; i--)
            cout << array[i] << " ";
    }
    
};


int main(int argc, char* argv[]) {
    Stack stack;
    int times, input;
    cin >> times;
    for (int i = 0; i < times; i++) {
        cin >> input;
        stack.Push(input);
    }
    cin >> times;
    for (int i = 0; i < times; i++) {
        stack.Pop();
    }
    stack.PrintStack();
}

/*
�мg�@��Stack���O�A�̭����غc�l�APush(int x)�BPop()�BPrintStack() �T�Ө禡�M int capacity�Bint* array�Bint top �T���ܼơCcapacity�w�q���|�j�p�Aarray��@���|�Atop�����ثe���|���ݪ����ޭȡA��l�ȳ]��-1��ܰ��|���šC�غc�l�N�ܼ�capacity�Btop�]��l�ȡA�ëإߪ��׬�capacity��array�APush(int x)�i�N�ܼ�x�[�J��array���|���ݡAPop()�i�qarray���|���ݨ��X�@�Ӥ����APrintStack()�h�C�L�X���|�������������e(�q�ѤW�ӤUTop-Down)�C

�`�N�G�w�]�{����main�禡�Фŭק�A�ȥi�[�W�禡�w�q�P�禡�쫬�C

��J�d�ҡG
6 10 20 30 40 50 60 2

��X�d�ҡG
40 30 20 10



�t�ο�J�GPush����(�̦h10)+��J���|������+Pop����

���G��X�G�禡PrintStack()�����浲�G
*/