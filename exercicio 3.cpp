#include<iostream>
using namespace std;
int main (){
	float nota1, nota2, nota3, media, notaexame;
	
	cout<<"Informe a nota1: ";
	cin>>nota1;
	cout<<"Informe a nota2: ";
	cin>>nota2;
	cout<<"Informe a nota3: ";
	cin>>nota3;
	
	media= (nota1+nota2+nota3)/3;
	cout<<"A media do aluno e: "<<media;
	
	if(media<3){
		cout<<"\nAluno reprovado";
    }	
	 
	 else if(media>=6){
	 cout<<"\nAluno aprovado";
	}
	  else{
	  
	   (media>=3 && media<6);
	   notaexame=12-media;
	    cout<<"\nAluno fara o exame, e precisa de "<<notaexame<<" para ser aprovado";
	  }
	 }
	  
	
	 
	 

