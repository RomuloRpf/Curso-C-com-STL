// Neste programa voc? vai trabalhar com a lista de prioridade.
// Um dos m?todos de ordena??o conhecidos chama-se Heapsort.
// Voc? pode simular o Heapsort inserindo os elementos de um
// conteiner em uma lista de prioridade e depois removendo-os
// um a um.
// 1. Rode o programa como est?.
// 2. Use a priority_queue "pq" para ordenar o vetor V em ordem DECRESCENTE.
// 3. Use a priority_queue "pq2" para ordenar o vetor W em ordem CRESCENTE.
#include <queue>
#include <vector>
#include <iostream>
using namespace std;

void imprime(vector<int> & X) {
	vector<int>::iterator it;
	for(it=X.begin(); it!=X.end(); ++it)
		cout << *it << " ";
	cout << endl;
}

int main()
{
	int a[] = {8, 2, 9, 1, 0, 7, 3, 6, 4, 5};
	int b[] = {90, 80, 70, 60, 50, 40, 30, 20, 10, 0};
	vector<int> V(a,a+10), W(b,b+10);
	priority_queue<int> pq;
	priority_queue<int> pq2;

	//Sort aqui
	int n=V.size(); int m = W.size();
	vector<int>::iterator v;
	for (int i = 0; i < n; ++i)
	{
		pq.push(V[i]);
		pq2.push(W[i]);
	}
	V.clear(), v = V.begin();
	for (int i = 0; i < n; ++i)
	{
		V.insert(v+i, pq.top());
		pq.pop();
	}
    W.clear(), v = W.begin();
	for (int i = 0; i < m; ++i)
	{
		W.insert(v, pq2.top());
		pq2.pop();
	}

	imprime(V);
	imprime(W);
    return 0;
}
