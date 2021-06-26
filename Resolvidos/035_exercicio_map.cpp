// Neste programa você vai fazer o seguinte exercício:
// a) Leia uma primeira linha com palavras a serem ignoradas
// b) Leia uma segunda linha com um texto
// c) Conte a frequência das palavras do texto, para as
//    palavras que não estejam na lista de ignoradas.
// Exemplo de Entrada:
//      a e o da do na no em nao
//      fui na casa do meu amigo e o amigo nao estava em casa
// Exemplo de Saída:
//      amigo 2
//      casa 2
//      estava 1
//      fui 1
//      meu 1
#include <map>
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
    map<string, int> m, ig;
    string linha, st;
    stringstream ss;

    getline(cin, linha);
    ss.str(linha);
    while(ss >> st){
            ++ig[st];
    }

    ss.clear();
    getline(cin, linha);
    ss.str(linha);
    while(ss >> st){
            if(( ig.find(st) ) == ig.end() ){
                ++m[st];
            }
    }


    map<string, int>::iterator iter = m.begin();
    while(iter != m.end()){
    	cout << "palavra: " << iter->first;
    	cout << ", contagem: " << iter->second;
    	cout << endl;
    	iter++;
    }

    return 0;
}
