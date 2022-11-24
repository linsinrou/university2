#include <cstdlib>
#include <iostream>
#include <stdio.h>
using namespace std;
class fun
{
public:
    int InfixToPostfix(char[]);
    int Priority(char);
};

int main(int argc, char* argv[])
{
    fun obj;
    char itemset[20];

    scanf("%s", itemset);

    obj.InfixToPostfix(itemset);
    return 0;
}


int fun::InfixToPostfix(char Infix[])
{
    int i = 0, Top = 0;
    char Stack[20] = { '0' };
    char op;

    while (1)
    {
        op = Infix[i];
        switch (op)
        {
        case '\0':
            while (Top > 0)
            {
                cout << Stack[Top];
                Top--;
            }
            cout << "\n";
            system("pause");
            return 0;

        case '(':
            if (Top < (sizeof(Stack) / sizeof(char)))
            {
                Top++;
                Stack[Top] = op;
            }
            break;
        case '+': case '-': case '*': case '/':
            while (Priority(Stack[Top]) >= Priority(op))
            {
                cout << Stack[Top];
                Top--;
            }

            if (Top < (sizeof(Stack) / sizeof(char)))
            {
                Top++;
                Stack[Top] = op;
            }
            break;

        case ')':
            while (Stack[Top] != '(')
            {
                cout << Stack[Top];
                Top--;
            }
            Top--;
            break;

        default:
            cout << op;
            break;
        }
        i++;
    }
}


int fun::Priority(char op)
{
    int p;
    switch (op)
    {
    case '+': case '-':
        p = 1;
        break;
    case '*': case '/':
        p = 2;
        break;
    default:
        p = 0;
        break;
    }
    return p;
}

/*
�мg�@��int Priority(char op)�Ƶ{���A�i�H��J�B��lop�æ^���u���סC�A�g�@��void InfixToPostfix(char infix[])�Ƶ{���A�i�H��J���ǹB�⦡�A�M��ϥ�Priority(char op)����C�ӹB��l���u���סA�z�L���|���覡�ন��ǹB�⦡�A�ÿ�X���G�C

��J�d�ҡG
3+4*(7-5)/2

��X�d�ҡG
3475-*2/+


�t�ο�J�Gchar���A���}�C�]���Ǧ��^

���G��X�Gchar���A���}�C�]��Ǧ��^
*/

