// Neste programa você continua a trabalhar com pilhas.
// Você deve fazer um programa para resolver o seguinte problema:
//    Dado um string que representa a sequência de parênteses de uma
//    expressão aritmética, quer-se saber se a sequência está correta ou não.
//    A ideia é ler o string, caracter a caracter. Se for '(' deve ser empilhado.
//    Se for ')', então deve-se desempilhar.
//    Se, ao final, a pilha não estiver vazia ou se, antes de terminar o string,
//    a pilha ficar vazia, então a sequência está errada. Para cada string em
//    uma linha deve ser impresso 'S' se estiver correto ou 'N', caso contrário.
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
