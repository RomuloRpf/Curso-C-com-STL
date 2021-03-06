// Este programa demonstra como funcionam os iterators do vector.
// 1. Rode o programa como ele est?.
// 2. Acrescente o c?digo que percorra o vector com um reverse_iterator 
//     adicionando a dist?ncia percorida ao valor apontado.
//    O vetor dado (1 2 3 4 5 6 7 8 9 10) dever? se tornar
//                 (10 10 10 10 10 10 10 10 10 10).
// 3. Acrescente o c?digo que percorra o vector com um iterator 
//     multiplicando o valor apontado com a dist?ncia percorrida. 
//    O vetor obtido (10 10 10 10 10 10 10 10 10 10) dever? se tornar
//                   (0 10 20 30 40 50 60 70 80 90).

#include <iostream>
#include <vector>
using namespace std;


int main()
{
    int i, d;
    vector<int> v;
    for(i = 1;i<=10;i++) { v.push_back(i); }
    
    /* TO DO: a fazer: 2.*/
    vector<int>::reverse_iterator rit2=v.rbegin(); 
    d=v.size();
    while(rit2 != v.rend()){ *(rit2++) = d; }
    /* TO DO: a fazer: 3.*/ 
    

    vector<int>::iterator it = v.begin();
    while(it != v.end()) cout << *(it++) << " ";
    cout << endl;
    
    vector<int>::iterator it3 = v.begin();
    for(i=0;i < d;i++)
    {
		*(it3++) *= i ;
	}
    vector<int>::iterator rit = v.begin();
    while(rit != v.end()) cout << *(rit++) << " ";
    cout << endl;
    
    return 0;
}
