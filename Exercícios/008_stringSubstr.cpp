// Este programa apresenta facilidades para criação de
// substrings, usando o método substr.
// 1. Rode o programa como ele está.
// 2. Cheque o que ocorre se algum parâmetro do substr for
// maior que o tamanho do string.
// Resposta: Se o primeiro parametro for maior, aparece uma mensagem de erro durante a execução.
//Se o segundo parametro for maior é impressa a string toda a partir da posiçao dada pelo primeiro parametro.
// 3. Acrescente código para verificar todas as substrings
//    da string dada e encontrar o tamanho da maior
//    substring que não contiver vogais. Para a string s,
//    deve imprimir 6, pela substring "rld, W".
//
//    Dica: Use a função find_first_of para achar as
//			vogais. Para achar os tamanhos das substrings
//			sem vogais faça o seguinte: Para cada vogal
//			que achar, mantenha o índice da vogal anterior
//			guardado, subtraia o índice novo do índice guardado e
//			diminua 1. Quando achar um tamanho maior, atualize
//			a variável maiortamanho.
#include <iostream>
using namespace std;

int main()
{
     string s = "Hello World, World";
     string sub;
     cout << s.substr(1, 4) << endl;
     cout << s.substr(1) << endl;

     int pos1=0,pos2=0,maiortamanho = 0;
     //Acrescente código aqui!
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
