#include <iostream>
using namespace std;

void exemplo(int i){
	cout << endl;
	cout << "Exemplo " << i << ":" << endl;
}

int main() {

	int cont = 1;

	//Diferença entre while e do while
	bool hungry = false;
	
	do{
		cout << "eat hamburguer" << endl;
		hungry = false;
	}while(hungry);
	
	
	while(hungry){
		cout << "eat pizza" << endl;
		hungry = false;
	}
	
	//Diferença entre i++ e ++i
	int i;
	
	i=1;
	cout << i++ << endl;
	
	i=1;
	cout << ++i << endl;
	
	exemplo(cont++);
	i=1;
	if(++i < 2){
		cout << "i < 2 era verdade, mas agora i = " << i << endl;
	}
	
	exemplo(cont++);
	i=1;
	if(i++ < 2){
		cout << "i < 2 era verdade, mas agora i = " << i << endl;
	}
	
	//&&, || e !
	
	exemplo(cont++);
	if(2 < 3 && 4 > 5) cout << "As duas proposições são verdade" << endl;
	
	exemplo(cont++);
	if(2 < 3 && 4 < 5) cout << "As duas proposições são verdade" << endl;
	
	exemplo(cont++);
	if(2 < 3 || 4 > 5) cout << "Pelo menos uma das proposições é verdade" << endl;
	
	exemplo(cont++);
	if(2 > 3 || 4 > 5) cout << "Pelo menos uma das proposições é verdade" << endl;
	
	exemplo(cont++);
	if(2 == 0) cout << "A proposição é verdade" << endl;
	
	exemplo(cont++);
	if(!(2 == 0)) cout << "A proposição não é verdade" << endl;
	
	exemplo(cont++);
	if(2 != 0) cout << "A proposição é verdade" << endl;
	
	
	//Operadores de bits
	
	//13 = 1101
	//5  = 0101
	//7  = 0111
	
	//OR
	exemplo(cont++);
	cout << (13 | 5) << endl;
	exemplo(cont++);
	cout << (13 | 7) << endl;
	
	//AND
	exemplo(cont++);
	cout << (13 & 5) << endl;
	
	//XOR
	exemplo(cont++);
	cout << (13 ^ 7) << endl;
	
	
	
	return 0;
}