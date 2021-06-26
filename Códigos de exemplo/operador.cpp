#include <iostream>
using namespace std;

typedef struct aluno{
	float nota;
	int idade;
}aluno;

void imprimeAluno(aluno a){
	cout << "Idade = " << a.idade << endl;
	cout << "Nota = " << a.nota << endl;
}

aluno operator << (aluno &aluno1, aluno &aluno2){
	aluno aluno3;
	aluno3.nota = aluno1.nota+aluno2.nota;
	aluno3.idade = aluno1.idade+aluno2.idade;
	return aluno3;
}


int main() {
	aluno a1 = {2.4, 18};
	aluno a2 = {7.8, 22};
	aluno a3 = a1 << a2;
	
	imprimeAluno(a3);
	
	return 0;
}