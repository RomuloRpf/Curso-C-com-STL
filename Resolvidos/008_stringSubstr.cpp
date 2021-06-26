// Este programa apresenta facilidades para cria��o de
// substrings, usando o m�todo substr.
// 1. Rode o programa como ele est�.
// 2. Cheque o que ocorre se algum par�metro do substr for
// maior que o tamanho do string.
// Resposta: Se o primeiro parametro for maior, aparece uma mensagem de erro durante a execu��o.
//Se o segundo parametro for maior � impressa a string toda a partir da posi�ao dada pelo primeiro parametro.
// 3. Acrescente c�digo para verificar todas as substrings
//    da string dada e encontrar o tamanho da maior
//    substring que n�o contiver vogais. Para a string s,
//    deve imprimir 6, pela substring "rld, W".
//
//    Dica: Use a fun��o find_first_of para achar as
//			vogais. Para achar os tamanhos das substrings
//			sem vogais fa�a o seguinte: Para cada vogal
//			que achar, mantenha o �ndice da vogal anterior
//			guardado, subtraia o �ndice novo do �ndice guardado e
//			diminua 1. Quando achar um tamanho maior, atualize
//			a vari�vel maiortamanho.
#include <iostream>
using namespace std;

int main()
{
     string s = "Hello World, World";
     string sub;
     cout << s.substr(1, 4) << endl;
     cout << s.substr(1) << endl;

     int pos1=0,pos2=0,maiortamanho = 0;
     //Acrescente c�digo aqui!
     while(pos1!=string::npos && pos2!=string::npos)
     {
         pos1=s.find_first_of('aeiou',pos1+1);
         pos2=s.find_first_of('aeiou',pos1+1);
         if((pos2-pos1-1)>maiortamanho)
        {
            maiortamanho=pos2-pos1-1;
        }
     }
     //
     cout << maiortamanho << endl;
     return 0;
}
