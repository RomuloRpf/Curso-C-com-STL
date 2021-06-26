// Crie um programa que gere uma substring de um texto até a palavra
// passada como parâmetro. Aproveite para revisar stringstreams,
// separando essa substring em suas palavras. Ache as palavras de maior e
// menor comprimento, e imprima a diferença entre esses dois valores.
//  Exemplo:
//      texto: "curso STL UERJ"
//      Palavra passada: "UERJ"
//      Substring: "curso STL "
//      Diferença: 2.
//      ('STL' é a menor palavra, com 3 letras, e 'curso' é a maior, com 5.)

#include<iostream>
#include<sstream>
using namespace std;

int main()
{
    string palavra;
    string texto = "Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.";
    string subs;
    stringstream ss;
    string n;
    int pos, maior=0 ,menor=100;

    cout << "texto: "<< texto << endl;
    cout << "Palavra passada: ";
    cin >> palavra;
    pos=texto.find(palavra);
    subs=texto.substr(0,pos);
    cout << "Substring: "<< subs << endl;
    ss.str(subs);
    while(ss>>n)
    {
        if(n.size()>maior){ maior=n.size(); }
        if(n.size()<menor){ menor=n.size(); }
    }
    cout << "Diferenca: "<< maior-menor << endl;
    return 0;
}
