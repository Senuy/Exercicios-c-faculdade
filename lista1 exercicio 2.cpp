/*Faça um programa que leia um vetor de 20 elementose em seguida dois valoresXe Y
quaisquer. Oprograma deverá fazer umabusca pelos valoresdeXe Yno vetor lido e 
informar a posiçãoem que foi encontradocada valorou se não foi encontrado.*/

#include<iostream>
using namespace std;
int main(){
	int elementos[5],X,Y,posx=-1, posy=-1,i;
	
	for(int i = 0; i < 5;i++){
		cout<<"Digite o "<< i+1<<"o, valor:";
		cin>> elementos[i];
	}
	
	cout <<"Digite o valor de X e Y:";
	cin>>X>>Y;
	
	for(int i= 0 ; i < 5; i++){
		if (elementos[i]==X)
			posx=i;
		if (elementos[i]==Y)
			posy=i;
	}
	if (posx !=-1)
		 cout<<"\n O elemento X esta na posicao:"<< posx;
	else 
		cout<<"\n O elemento X nao esta no vetor";

	if (posy !=-1)
		 cout<<"\n O elemento Y esta na posicao:"<< posy;
	else 
		cout<<"\n O elemento Y nao esta no vetor";	
}
