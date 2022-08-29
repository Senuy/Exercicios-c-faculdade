#include<iostream>
#include<iomanip>
using namespace std;
int main (){
	const int TAMANHO=10;
	float notas [TAMANHO], media = 0 ;
	
	cout<< setprecision(2);
	for ( int i = 0; i <TAMANHO; i++ ){
		cout<<"Digite  a nota do aluno"<<i+1<<":";
		cin>>notas[i];
		media +=notas[i];
	}
	cout<<"\n\n Média das notas:"<< media/TAMANHO;
}
