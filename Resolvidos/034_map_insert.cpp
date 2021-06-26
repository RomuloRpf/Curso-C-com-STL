// Neste programa exploramos a fun��o insert e suas facilidades para
// adi��o de elementos em um mapa.
// Na internet, quando digitamos um endere�o de um site no browser,
// � feita uma consulta a um sistema de registros (DNS) que possui
// associa��es entre os nomes dos dom�nios (e.g.: www.meusite.com)
// e os seus endere�os IP (e.g.: 127.0.0.1) para acess�-los.
// No programa abaixo, estamos lendo registros que v�m no seguinte
// formato, um por linha: <site> <endere�o>
// 1. Rode o programa como est�.
// 2. Verifique o que acontece quando voc� digita duas linhas com o
//    mesmo site mas endere�os diferentes. Exemplo de entrada:
//			meusite.com 127.0.0.1
//			meusite.com 192.168.1.1
// 3. Modifique o tipo do mapa m para que ele possa associar v�rios
//    endere�os (string) a um mesmo site (string).
//		Dica: Use a classe vector para ajudar a armazenar os endere�os
// 4. Modifique a impress�o do mapa para imprimir todos os endere�os
//    armazenados na lista
// 5. Modifique a inser��o para inserir um vetor vazio, e ent�o use
//    os retornos da fun��o insert para inserir o endere�o digitado
//    ao final do vector e escrever na tela "Adicionado a registro
//    existente!" caso o site j� exista no mapa, ou "Novo registro!"
//    caso contr�rio.
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
		//Modifique a pr�xima linha para fazer a quest�o 3
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

    	// Descomente essa parte para fazer a quest�o 5

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
