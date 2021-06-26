// Este programa realiza a adi��o de elementos na pilha
// depois retira esses elementos imprimindo-os.
// 1. Rode o programa como ele est�.
// 2. Altere a cria��o da pilha, para que tenha o seguinte comportamento:
//      Se o elemento for par, � inserido normalmente (no topo).
//      Sen�o, ele deve entrar abaixo do elemento do topo.

#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack<int> pilha;
    int aux;
    for (int i=2; i<=10; i+=2) pilha.push(i);
    for (int i=1; i<=10; i+=2) 
    {
		aux=pilha.top();
		pilha.pop();
		pilha.push(i);
		pilha.push(aux);
	}
    cout << "Tirando os elementos...";
    
    while (!pilha.empty())
    {
        cout << " " << pilha.top();
        pilha.pop();
    }
    cout << endl;
    
    return 0;
}
