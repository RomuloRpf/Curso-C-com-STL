// Este programa mostra a facilidade de Template.
// 1. Rode o programa da forma que est�.
// 2. Altere a fun��o soma para usar o esquema de template
// 3. Acrescente c�digo para ler, duas a duas, as vari�veis 'c' e 'd',
//    'e' e 'f', 'g' e 'h' apresentando o resultado da fun��o soma das
//    duas vari�veis lidas logo em seguida.
//    Voc� pode usar a leitura e a impress�o da soma de 'a' e 'b' como
//    exemplo.

#include <iostream>
using namespace std;

//Altere esta fun��o!
int soma(int a, int b)
{
    return a + b;
}

int main() 
{   int a, b;
    long long int c, d;
    double e, f;
    string g, h;
    cin >> a >> b;
    cout << soma(a,b) <<endl;
    //Acrescente c�digo aqui!
    
    //
	return 0;
}
