// Neste programa usaremos os métodos básicos de filas.
// Suponha que temos um robô empilhador e três pilhas de caixas.
// O número de caixas em cada uma é dado pelos inteiros a, b e c.
// O robô recebe uma sequência de comandos e deve executá-los na
// ordem. O lote de comandos é dado numa string, e cada caracter
// representa uma instrução:
//   - O caracter 'A' faz o robô retirar uma caixa de a e colocá-la
//     em b.
//   - O caracter 'B' faz o robô retirar uma caixa de b e colocá-la
//     em c.
//   - O caracter 'C' faz o robô retirar uma caixa de c e colocá-la
//     em a.
//
// Note que o número de caixas jamais pode se tornar negativo.
// Acrescente loops para gerar a fila de instruções a partir da
// string, e para processar as instruções uma a uma. Use a função
// imprime passando a última instrução executada para mostrar os
// valores a cada passo.
//
// e.g.: Se começarmos com a = 5, b = 2, c = 0,
//		 a sequência de instruções BBBCAAACB deve resultar
//       em a = 4, b = 2, c = 1
#include <iostream>
#include <queue>
using namespace std;

int a, b, c;

void imprime(char instrucao) {
	cout << "Instrucao " << instrucao << " executada" << endl;
	cout << "a = " << a << " | b = " << b << " | c = " << c << endl;
}

int main()
{
    int i;
    string entrada;
    queue<char> instrucoes;
    cin >> entrada;

    a = 5; b = 2; c = 0;

    //Acrescente código aqui
    char aux;
    for(i=0;i<entrada.size();i++)
    {
        instrucoes.push(entrada[i]);
        aux=instrucoes.front();
        if(aux=='A')
        {
            if(a!=0)
            {
                a=a-1;
                b=b+1;
            }
            instrucoes.pop();
        }
        else if(aux=='B')
        {
            if(b!=0)
            {
                b=b-1;
                c=c+1;
            }
            instrucoes.pop();
        }
        else if(aux=='C')
        {
            if(c!=0)
            {
                c=c-1;
                a=a+1;
            }
            instrucoes.pop();
        }
        imprime(aux);
    }

    return 0;
}
