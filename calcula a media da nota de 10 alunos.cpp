#include<iostream>
using namespace std;
int main (){
	int notas[10],media = 0 ;
	
	for ( int i =0 ;  i < 10 ; i ++){
		cout <<"Digite a nota do aluno"<<i +1<<":";
		cin >>notas[i];
		media +=notas[i];
	}
	cout<<"\n\n Média das notas:"<<media/10;
}
