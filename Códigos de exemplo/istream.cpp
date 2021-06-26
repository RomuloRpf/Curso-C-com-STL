//Neste programa, vamos estudar um pouco os estados de uma stream de input, a istream

//Note que cin é um objeto do tipo istream.
//while(cin) faz uma conversão de um objeto do tipo istream para bool
//A conversão de um objeto istream obj para bool é o mesmo que a chamada de função !obj.fail()
//Ou seja, se o istream não está em um estado de falha, ele será true

#include <iostream>
#include <string>
using namespace std;

void estadoCin(istream &input){
	cout << "Goodbit = " << input.good() << endl;
	cout << "Badbit = " << input.bad() << endl;
	cout << "Failbit = " << input.fail() << endl;
	cout << "Eofbit = " << input.eof() << endl;
}

int main() {
	int a;
	string s;
	
	/*
	Entrada:
	21 2 3 5 67 palavra word
	*/
	
	while (cin){
		cout << "Antes de ler o valor :" << endl;
		
		estadoCin(cin);
		cin >> a;
		
		cout << endl << "Valor da variável a = " << a << endl << endl;
		
		cout << "Depois de ler o valor :" << endl;
		estadoCin(cin);
		
		cout << endl << endl << endl;
	}
	
	//Neste momento, o cin encontra-se em um estado de falha pois tentou ler uma
	//	string e colocar dentro de um inteiro.
	
	cin.clear();
	cout << "Após cin.clear()" << endl;
	estadoCin(cin);
	cout << endl << endl << endl;
	
	//Neste momento, o cin foi recolocado em estado 'bom'. Vamos ler os dados restantes
	
	while(cin){
		cout << "Antes de ler a string :" << endl;
		
		estadoCin(cin);
		cin >> s;
		
		cout << endl << "Valor da variável s = " << s << endl << endl;
		
		cout << "Depois de ler a string :" << endl;
		estadoCin(cin);
		
		cout << endl << endl << endl;
	}
	
	//Neste momento, o cin encontra-se em um estado de falha pois tentou ler uma
	//	string, mas a entrada já havia chegado ao fim.
	
	
	return 0;
}