// Este programa l� um string e separa e apresenta suas palavras.
// 1. Rode o programa da forma que est�.
// 2. Acrescente c�digo para ler v�rios inteiros e apresentar sua soma.

#include <iostream>
#include <sstream>

using namespace std;

int main()
{
    string linha;
    string n;
    istringstream ss;
    int soma = 0;
    
    getline(cin, linha) ;
    ss.str(linha);
    while(ss >> n) { 
    	cout << n << endl; 
    }
    
    return 0;
}
