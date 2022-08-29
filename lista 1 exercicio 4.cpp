/*Faça um programaque gereos 10 primeiros números primos e os armazeneem um vetor.
Depois, imprima os valores armazenados no vetor.*/

#include<iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;
int main (){
	int num [10],k;
	
	srand(time(NULL)) ;
	
	for(int i = 0;i <10; i++){//roda o vetor
	k = rand();
	
		for(int j=2;j<=i/2;j++){//testa se é primo e armazena no vetor
			if(i%j==0);
				i=num[i];
		}
		
		cout<<num[i];	
	}

	
}

