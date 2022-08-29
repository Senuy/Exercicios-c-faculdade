#include<iostream>
using namespace std;
int main (){
	int dmes[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int dia, mes , ano , total;
	char ch;
	
	cout<<"Digite a  data no formato DD/MM/AA";
	cin>>dia>>ch>>mes>> ano;
	if(ano%4==0 &&ano%100||ano%400==0)
		dmes[1]=29;// ano bissexto
	
	total = dia ;
	for(int i = 0 ;i < mes-1; i++)
	total += dmes[i];
	
	cout<<"\n\n Total de dias Transcorridos:"<<total;
	
}
