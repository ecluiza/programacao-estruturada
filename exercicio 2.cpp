#include <iostream>
#include <string.h>
using namespace std;
int main(){

	float altura; 
	float pesoideal;
	char nome[30];
	char sexo[1];
	
	cout<<"Informe seu nome: ";
	cin>>nome;
	
	cout<<"Informe sua altura: ";
	cin>>altura;
	
	cout<<"Informe seu sexo: ";
	cin>>sexo;
	
	
	if(strcmp(sexo,"m")==0){
		pesoideal=(72.7*altura)-58;
	cout<<"O seu peso ideal e: "<<pesoideal<<"kg";
		
	}
	else{
		pesoideal=(62.1*altura)-44.7;
	cout<<"O seu peso ideal e: "<<pesoideal<<"kg";
	
	return 0;
		
		
		
			
		
	}
}
