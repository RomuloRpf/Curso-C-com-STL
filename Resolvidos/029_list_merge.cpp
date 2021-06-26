// Neste programa apresentamos o método Merge para tratamento de listas.
// 1. Rode o programa como está.
// 2. Faça o Merge das listas sem usar o comando Merge.
#include <list>
#include <iostream>
using namespace std;

void imprime(list<char> l, string nome) {
list<char>::iterator it = l.begin();  cout << nome << " Lista: ";
		for( ; it != l.end(); ++it) { cout << *it << " "; }
		cout << endl;
}

int main()
{
	list<char> l1, l2;
	for(int i = 0 ; i < 15 ; ++i)
	{ if(i%3==0)  l1.push_back(i+65);
      if (i%2==0) l2.push_back(i+65); }
	imprime(l1, "1ª");
	imprime(l2, "2ª");
	//l2.merge(l1);

    list<char>::iterator it1=l1.begin();
	list<char>::iterator it2=l2.begin();
	while(it1 != l1.end())
    {
        if(*it1 >= *it2){
    		it2++;
    	}
    	else{
    		l2.insert(it2, *it1);
    		it1++;
    	}

    }
    l1.clear();

	imprime(l1, "1ª");
	imprime(l2, "2ª");

    return 0;
}
