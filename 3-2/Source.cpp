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
請寫一個int Priority(char op)副程式，可以輸入運算子op並回傳優先度。再寫一個void InfixToPostfix(char infix[])副程式，可以輸入中序運算式，然後使用Priority(char op)比較每個運算子的優先度，透過堆疊的方式轉成後序運算式，並輸出結果。

輸入範例：
3+4*(7-5)/2

輸出範例：
3475-*2/+


系統輸入：char型態的陣列（中序式）

結果輸出：char型態的陣列（後序式）
*/

