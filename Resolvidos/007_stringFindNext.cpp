// Este programa continua a apresentar facilidades para busca de
// substrings, usando o comando find, mas agora com mais parâmetros.
// 1. Rode o programa como ele está.
// 2. Acrescente o código para contar quantas substrings existem
//    na string procurada, imprimindo as posições em que encontrá-las.
#include <iostream>
using namespace std;

int main()
{
     string s = "Hello World, World, World, World, World, World.";
     int pos = s.find("World" );
     int pos2=0,cont=0,i;
     for(i=0;i<(s.size()-pos2);i++)
     {
         pos2 = s.find("World" , pos+pos2);
         cout<< pos2 << endl;
         cont++;

     }
     cout<< cont <<endl;

     return 0;
}
