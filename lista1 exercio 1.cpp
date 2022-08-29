/*1.Faça um programa que leia e mostre um vetor de 20 elementos inteiros. 
A seguir, calcule e mostrequantos valores pares existem no vetor.*/
#include<iostream>
using namespace std;
int main (){
	int n[20],soma;
	
	for(int i=0; i<20;i++){
		cout<<"Digite 20 numeros:";
		cin>>n[i];
		
		if(n[i]%2==0)
			soma ++;
	}
		cout<<"O total de  pares sao:"<<soma;

}
