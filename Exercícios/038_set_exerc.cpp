// Faça um programa para testar os seguintes teoremas
// da Teoria dos conjuntos, considerando A, B, C conjuntos, 
// U = operação de União e I = operação de Interseção
// - = operação de diferença
//
// Teorema 1: A U (B I C) = (A I B) U (A I C)
// Teorema 2: A - (B U C) = (A - B) U (A - C)
// Teorema 3: A I (B U C) = (A U B) I (A U C)
//
// Rode o programa algumas vezes (A, B e C serão diferentes
// a cada vez) e verifique os resultados.
// Quais teoremas definitivamente não estão certos?
// Resposta:
//

#include <iostream>
#include <set>
#include <ctime>
#include <cstdlib>
using namespace std;

template <typename T>
void imprime(set<T> S, string nome = "") {
	typename set<T>::iterator it;
	if (nome.length()>0)
		cout << "Conjunto " << nome << ": ";
	for(it = S.begin(); it != S.end(); ++it) {
		cout << *it << " ";
	}
	cout << endl;
}

int main() 
{
	set<int> A, B, C;

	srand(time(NULL));

	int i;
	for(i=0;i<8;++i) {
		A.insert(1 + rand()%16);
		B.insert(1 + rand()%16);
		C.insert(1 + rand()%16);
	}

	imprime(A, "A");
	imprime(B, "B");
	imprime(C, "C");
	return 0;
}
