// Neste programa, vamos estudar a opera��o de troca de linhas em matrizes
// 1. Rode o programa como ele est�. Observe que est� sendo iniciada uma matriz
//	  com 'n' linhas e 'm' colunas.
// 2. Acrescente o c�digo para as fun��es trocaLinhasReferencia() e 
//            trocaLinhasValor(), que recebem dois valores 'l1' e 'l2'
//	  e trocam entre si as linhas 'l1' e 'l2' de posi��o, sendo a primeira
//	  por troca de ponteiros e a segunda por troca de valores. N�o
//	  altere o c�digo da fun��o main(). Observe que ap�s
//	  trocaLinhasReferencia(), o endere�o de matriz[l1][0] e
//	  matriz[l2][0] devem ser trocados. Da mesma forma, ap�s
//	  trocaLinhasValor() o endere�o de matriz[l1][0] e
//	  matriz[l2][0] devem permanecer os mesmos de antes da fun��o.
// 3. Quais as complexidades de tempo m�nimas que podem ser implementadas as fun��es:
//	  trocaLinhasReferencia() => O( ? )
//	  trocaLinhasValor() => O( ? )
// 4. � poss�vel implementar uma fun��o para troca de colunas com a mesma
//            complexidade de tempo de trocaLinhasReferencia() acima? Explique.
//	  Resposta:
//

#include <iostream>
#include <stdlib.h>
using namespace std;

void imprime(int **v, int linhas, int colunas){
	int i, j;
	cout << "Matriz: " << endl;
	for(i=0;i<linhas;i++){
		for(j=0;j<colunas;j++){
			cout << v[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
	for(i=0;i<linhas;i++){
		cout << "Endere�o de matriz[" << i << "][0] = " << v[i] << endl;
	}
	cout << endl << endl;
}

void trocaLinhasValor(int **v, int linhas, int colunas, int l1, int l2){
	int i,aux;
	for(i=0;i<colunas;i++)
	{
		aux=*(*(v+l1-1)+i);
		*(*(v+l1-1)+i)=*(*(v+l2-1)+i);
		*(*(v+l2-1)+i)=aux;
	}

}

void trocaLinhasReferencia(int **v, int linhas, int colunas, int l1, int l2){
	int *aux=v[l1-1];
	v[l1-1]=v[l2-1];
	v[l2-1]=aux;
	

}

int main() {
	int i, j;
	int n, m;
	
	n = 5;
	m = 4;
	
	int **matriz = (int**) malloc(sizeof(int*)*n);
	
	for(i=0;i<n;i++){
		matriz[i] = (int*) malloc(sizeof(int)*m);
		for(j=0;j<m;j++){
			matriz[i][j] = i*m + j;
		}
	}
	
	cout << "Ap�s a atribui��o da matriz :" << endl;
	imprime(matriz, n, m);
	
	trocaLinhasReferencia(matriz, n, m, 2, 4);
	cout << "Ap�s trocaLinhasReferencia(matriz, n, m, 2, 4) :" << endl;
	imprime(matriz, n, m);
	
	trocaLinhasValor(matriz, n, m, 1, 3);
	cout << "Ap�s trocaLinhasValor(matriz, n, m, 1, 3) :" << endl;
	imprime(matriz, n, m);
	
	free(matriz);
	return 0;
}
