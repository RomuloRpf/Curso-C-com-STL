// Este programa apresenta facilidades para busca de substrings,
// usando o comando find. Neste exemplo, suponha um sistema de
// cadastro de usu�rio e queremos proibir nomes que contenham
// palavras vulgares.
// 1. Rode o programa como ele est�. Perceba que todos os nomes s�o aceitos.
// 2. Altere a fun��o Verifica para retornar FALSO quando for passado qualquer
//    nome que contenha uma das substrings em palavrasProibidas, independente
//    de letras mai�sculas ou min�sculas.
//
//    e.g.: Rato, JAVALI, frescobol e hAsKeLL seriam nomes rejeitados

#include <iostream>
#include <algorithm>
using namespace std;

//Use esta fun��o para transformar uma string em caracteres min�sculos
string minusculo(string s) {
	transform(s.begin(), s.end(), s.begin(), ::tolower);
	return s;
}

//Altere a fun��o abaixo!
bool Verifica(string nome, string palavrasProibidas[], int numPalavrasProibidas) {
    int i , pos;
    string s;
    nome=minusculo(nome);
    for(i=0;i<numPalavrasProibidas;i++)
    {
        s=palavrasProibidas[i];
        pos=nome.find(s);
        cout<<pos<<endl;
        if(pos>=0)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
}
//////////////

int main()
{
     string nome;
     cout << "Digite o nome de usuario desejado: ";
     cin >> nome;

     string palavrasProibidas[]={"java", "cobol", "haskell", "r"};
     int numPalavrasProibidas = 4;

     if (Verifica(nome, palavrasProibidas, numPalavrasProibidas)) {
     	cout << "O nome digitado foi aceito." << endl;
     } else {
     	cout << "Erro: O nome digitado e invalido!" << endl;
     }
     return 0;
}
