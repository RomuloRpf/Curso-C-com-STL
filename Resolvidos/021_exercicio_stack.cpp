// Neste programa voc� continua a trabalhar com pilhas.
// Voc� deve fazer um programa para resolver o seguinte problema:
//    Dado um string que representa a sequ�ncia de par�nteses de uma
//    express�o aritm�tica, quer-se saber se a sequ�ncia est� correta ou n�o.
//    A ideia � ler o string, caracter a caracter. Se for '(' deve ser empilhado.
//    Se for ')', ent�o deve-se desempilhar.
//    Se, ao final, a pilha n�o estiver vazia ou se, antes de terminar o string,
//    a pilha ficar vazia, ent�o a sequ�ncia est� errada. Para cada string em
//    uma linha deve ser impresso 'S' se estiver correto ou 'N', caso contr�rio.
//    Ex: "(()())"   -> S    
//        "(()()"    -> N   
//        "(()())("  -> N
//        ""         -> S
#include <iostream>
#include <stack>
using namespace std;
int main()
{   stack<char> pilha;   
	char c;
    string s;
    int i;
    cin>>s;
    for(i=0;i<s.size();i++)
    {
		c=s[i];
		if(c=='(')
		{
			pilha.push(c);
		}
		else
		{
			pilha.pop();
		}
	
	}
	if(pilha.empty() && i!=s.size())
	{
		cout << s <<' '<< '-'<<'>'<< 'N';
	}
	else if(!pilha.empty() && i==s.size())
	{
		cout << s <<' '<< '-'<<'>'<< 'N';
	}
	else
	{
		cout << s <<' '<< '-'<<'>'<< 'S';
	}
    
    return 0;
}
