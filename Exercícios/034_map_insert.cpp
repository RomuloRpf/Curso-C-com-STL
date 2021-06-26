// Neste programa exploramos a função insert e suas facilidades para
// adição de elementos em um mapa.
// Na internet, quando digitamos um endereço de um site no browser,
// é feita uma consulta a um sistema de registros (DNS) que possui
// associações entre os nomes dos domínios (e.g.: www.meusite.com)
// e os seus endereços IP (e.g.: 127.0.0.1) para acessá-los.
// No programa abaixo, estamos lendo registros que vêm no seguinte
// formato, um por linha: <site> <endereço>
// 1. Rode o programa como está.
// 2. Verifique o que acontece quando você digita duas linhas com o
//    mesmo site mas endereços diferentes. Exemplo de entrada:
//			meusite.com 127.0.0.1
//			meusite.com 192.168.1.1
// 3. Modifique o tipo do mapa m para que ele possa associar vários
//    endereços (string) a um mesmo site (string).
//		Dica: Use a classe vector para ajudar a armazenar os endereços
// 4. Modifique a impressão do mapa para imprimir todos os endereços
//    armazenados na lista
// 5. Modifique a inserção para inserir um vetor vazio, e então use
//    os retornos da função insert para inserir o endereço digitado
//    ao final do vector e escrever na tela "Adicionado a registro
//    existente!" caso o site já exista no mapa, ou "Novo registro!"
//    caso contrário.
//		Dica: Um vetor de strings vazio pode ser obtido por
//			  vector<string>() .

#include <map>
#include <vector>
#include <utility>
#include <iostream>
using namespace std;

map<string, std::vector<string> > m;

template<typename T>
void imprime(T m) {
	typename T::iterator iter = m.begin();
	while( iter != m.end() )
	{
		cout << iter->first << " - ";
		//Modifique a próxima linha para fazer a questão 3
		for (int i = 0; i < iter->second.size(); ++i)
		{
			cout << iter->second[i] << endl;
		}
		iter++;
	}
}

int main()
{
	string site, endereco;
	pair<map<string, vector<string> >::iterator, bool> par;
 	while(cin >> site >> endereco)
    {
	    par = m.insert(make_pair(site, vector<string>() ));

    	// Descomente essa parte para fazer a questão 5

    	if (par.second){
    		cout << "Novo registro!" << endl;
    	}
    	else{
    		cout << "Adicionado a registro existente!" << endl;
    	}

    	par.first->second.push_back(endereco);
    	imprime(m);
 	}
 	return 0;
}
