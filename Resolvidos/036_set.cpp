// Neste programa demonstramos diferentes construtores do set.
// 1. Rode o programa como está.
// 2. Imprima cada um dos sets criados indicando no console qual set
//    está sendo impresso. (Melhor usar template) pois
//    (set<int> != set<int,classcomp>)
// 3. Adicione elementos em s1, s5 e s6 com a função insert(elemento)
//    para não ficarem vazios.
// 4. O que fica armazenado no pair correspondente ao retorno do insert?
//  Resposta:
//
#include <iostream>
#include <set>
using namespace std;

bool fncomp (int lhs, int rhs) {return lhs<rhs;}
struct classcomp {
	bool operator() (const int& lhs, const int& rhs) const
		{return lhs>rhs;}
};

template<typename T>
void imprime(T conj, int n){
	typename T::iterator iter = conj.begin();
	cout << "S" << n << " = { ";
	while(iter != conj.end()){
		cout << *iter << " ";
		iter++;
	}
	cout << "}\n";
}

int main()
{
    pair<set<int>::iterator, bool> test;

	set<int> s1;
	int mi[]= {10,20,30,40,50};
	s1.insert(mi+1, mi+3);
	imprime(s1, 1);

	set<int> s2 (mi,mi+5); 					imprime(s2, 2);
	set<int> s3 (s2);						imprime(s3, 3);
	set<int> s4 (s2.begin(), s2.end()); 	imprime(s4, 4);

	set<int,classcomp> s5;
	s5.insert(mi, mi+5);
	imprime(s5, 5);

	set<int,bool(*)(int,int)> s6 (fncomp);
	test = s6.insert(27);
	imprime(s6, 6);
	/*Verificando o retorno do pair*/
    cout << *test.first; cout << " " << test.second;

	return 0;
}
