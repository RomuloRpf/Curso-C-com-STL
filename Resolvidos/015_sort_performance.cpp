// Este programa mostra as facilidades do uso de sort.
// 1. Explore a eficiência da ordenação, criando o maior vetor que conseguir e
//    observe o tempo de execução.
// 2. Compare o tempo de execução do sort para um vetor já ordenado com o tempo
//    de execução do sort para um vetor pseudoaleatório.
//
// Escreva brevemente suas conclusões aqui: o sort do vetor ordenado é mais rápido que o vetor pseudoaleatório, devido ao menor
//número de comparações.
//
//
//

#include <vector>
#include <iostream>
#include <algorithm>
#include <ctime>

using namespace std;

vector<int> v;
int main()
{
    int t;
    //Altere o valor abaixo, veja até onde você consegue aumentá-lo
    const long long int TAM = 100000000;

    //Inserção de valores já ordenados
    for (int i=1; i<= TAM; i++) v.push_back(i);
    cout << "vetor ordenado criado, chamando o sort..." << endl;
    t = -time(NULL);
    sort(v.begin(), v.end());
    t += time(NULL);
    cout << "fim da ordenacao 1. tempo = " << t << " segundos" << endl;

    v.clear();
    srand(time(NULL));

    //Inserção de valores aleatórios
    for (int i=1; i<= TAM; i++) v.push_back(rand());
    cout << "vetor aleatorio criado, chamando o sort..." << endl;
    t = -time(NULL);
    sort(v.begin(), v.end());
    t += time(NULL);
    cout << "fim da ordenacao 2. tempo = " << t << " segundos" << endl;

    return 0;
}
