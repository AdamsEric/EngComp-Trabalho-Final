#include<iostream>
#include<sstream>
#include<string>
using namespace std;

struct TipoDisciplina
{
		string nome;
		int ch, tipoaula;
};

TipoDisciplina disciplina[2];
	
struct TipoProfessor
{
		string nome;
		enum hordisponivel{manha, tarde, noite};
};

int CadastroDisciplinas(int x)
{
	cout << "Digite o nome da disciplina: ";
	getline(cin, disciplina[x].nome);	
	cout << "Digite a carga horaria da disciplina: ";
	cin >> disciplina[x].ch;
	if (disciplina[x].ch == 80){ 
		cout << "Digite 1 para disciplina teorica ou 2 para essencialmente pratica: ";
		cin >> disciplina[x].tipoaula;	
	}
	return 0;
}

int main()
{
	TipoProfessor professor[2];
	int i;
	
	for (i=0; i<2; i++){
		CadastroDisciplinas(i);
	}
	
	cout << "\n\nLista de Disciplinas Cadastradas: \n\n";
	for (i=0; i<2; i++){
		cout << i+1 << " - " << disciplina[i].nome << " - " << "Carga horaria: " << disciplina[i].ch << ".\n";
	}	
	
	return 0;
}
