#include<iostream>
using namespace std;
int main(){
	
	float nota1, nota2, nota3, notaf;
	
	cout<<"Informe a nota do trabalho: ";
	cin>>nota1;
	cout<<"Informe a not da avaliacao: ";
	cin>>nota2;
	cout<<"Informe a nota do exame: ";
	cin>>nota3;
	
	notaf=nota1*0.2+nota2*0.3+nota3*0.5;
	cout<<"A media ponderada do aluno e: "<<notaf;
	
	if (notaf>=8){
		cout<<"\nO conceito do aluno e A";
	}
	 
	 else if(notaf>=7 && notaf<8){
			cout<<"\nO conceito do aluno e B";
			
	 }
	  else if(notaf>=6 && notaf<7){
			 cout<<"\nO conceito do aluno e C";
	  }
	   else if (notaf>=5 && notaf<6){
			  cout<<"\nO conceito do aluno e D";
	   }
	    else{
		(notaf>=0 && notaf<5);
	     cout<<"\nO conceito do aluno e E";
	    }
	    
	    return 0;
	      
}
