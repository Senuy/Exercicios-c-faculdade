/*Fa�a um programaque leia dois vetores de 10 elementos cada,fa�a a somados elementos
 de mesmo �ndice, colocando o resultado em um terceiro vetor. Mostre o vetor resultante.*/
#include<iostream>
using namespace std;
int main (){
	int m[5],n[5],o[5], soma,i;
	
	for (int i = 0; i < 5; i++){
		cout<<"\nDigite os valores do vetor m: ";
		cin >> m[i];
		cout<<"\nDigite os valores do vetor n: ";
		cin >> n[i];
	
			o[i]=	m[i]+n[i];
}
	cout<<"\n a soma dos valores";
	for (int i = 0; i < 5; i++){
	cout<<"\n"<<o[i];
	}
	
		
}
