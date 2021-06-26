#include <iostream>
#include <climits>
using namespace std;

int main() {
	//Qual o valor de NULL?
	//Um ponteiro *void com valor de 0
	//http://www.cplusplus.com/reference/cstring/NULL/
	cout << endl << "NULL" << endl;
	int i = NULL;
	cout << (NULL == i) << endl;
	cout << (i == 0) << endl;
	
	
	
	//Tipos primitivos
	//https://en.wikipedia.org/wiki/C_data_types
	cout << endl << endl << "Tipos primitivos" << endl;
	cout << "Tamanho de " << "int" << " = " << sizeof(int) << endl;
	cout << INT_MIN << " <= int <= " << INT_MAX << endl << endl;
	
	cout << "Tamanho de " << "short int" << " = " << sizeof(short int) << endl;
	cout << SHRT_MIN << " <= short int <= " << SHRT_MAX << endl << endl;
	
	cout << "Tamanho de " << "long int" << " = " << sizeof(long int) << endl;
	cout << "Tamanho de " << "long" << " = " << sizeof(long) << endl; //int é opcional
	cout << LONG_MIN << " <= long int <= " << LONG_MAX << endl << endl;
	
	cout << "Tamanho de " << "unsigned long int" << " = " << sizeof(unsigned long int) << endl;
	cout << 0 << " <= unsigned long int <= " << ULONG_MAX << endl << endl;
	
	cout << "Tamanho de " << "long long int" << " = " << sizeof(long long int) << endl;
	cout << LLONG_MIN << " <= long long int <= " << LLONG_MAX << endl << endl;
	
	cout << "Tamanho de " << "unsigned long long int" << " = " << sizeof(unsigned long long int) << endl;
	cout << 0 << " <= unsigned long long int <= " << ULLONG_MAX << endl << endl;
	
	//Diferença entre int, long int e long long int?
	//O tamanho depende do compilador, mas em regra
	//int tem no mínimo 16 bits
	//long int tem no mínimo 32 bits
	//long long int tem no mínimo 64 bits
	
	cout << "Tamanho de " << "float" << " = " << sizeof(float) << endl;
	cout << "Tamanho de " << "double" << " = " << sizeof(double) << endl;
	cout << "Tamanho de " << "double" << " = " << sizeof(long double) << endl;
	
	cout << "Tamanho de " << "char" << " = " << sizeof(char) << endl;
	
	return 0;
}