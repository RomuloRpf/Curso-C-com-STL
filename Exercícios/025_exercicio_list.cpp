// Neste programa s?o apresentados alguns m?todos de
// tratamento de listas, sobretudo a diferen?a entre o insert e o assign.
// 1. Crie uma lista com todos os n?meros de 1 a 16 fazendo um insert com a lista auxiliar (aux) e com o n?mero 16.
// 2. Imprima a lista, usando o iterator, e mudando para exibir do fim para o come?o.
// 3. Use o m?todo insert para colocar cinco elementos "17" na lista e imprima o resultado.
// 4. Use o m?todo assign para colocar cinco elementos "17" na lista e imprima o resultado.
// 5. Troque os elementos da lista com a lista auxiliar e veja o resultado.
// 6. Inverta a lista e a imprima lendo-a apenas uma vez.
//

#include <list>
#include <iostream>
using namespace std;

int main() 
{
	int i;
	list<int> l1,aux;
    
    list<int>::iterator it1 = l1.begin();
    
    for(i=1;i<16;++i) aux.push_back(i);
    
    //Insira c?digo aqui!
    
    //

	return 0;
}
