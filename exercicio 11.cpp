#include <iostream>
using namespace std;
int main(){
	
	float salario, salariof, opcao;
	
	cout<<"Informe seu salario: ";
	cin>>salario;
	cout<<"1:imposto \n2:novo salario \n3:classificacao \nEscolha uma das opcoes: ";
	cin>>opcao;
	
	if (opcao == 1 && salario<500){
		cout<<"O valor do imposto e: "<<salario*5/100;
	}
	 else if (opcao == 1 && salario>=500 && salario <=850){
			cout<<"O valor do imposto e: "<<salario*10/100;
	 }
	  else if (opcao == 1 && salario>850){
			 cout<<"O valor do imposto e: "<<salario*15/100;
	  }
	   else if (opcao == 2 && salario>1500){
				cout<<"O valor do aumento e 25,00";
				salariof=salario+25;
				cout<<"\nO novo salario e: "<<salariof;
			  
	   }
	    else if (opcao == 2 && salario>=750 && salario <=1500){
					cout<<"O valor do aumento e 50,00";
					salariof=salario+50;
					cout<<"\nO novo salario e: "<<salariof;
	    }
	     else if (opcao == 2 && salario >=450 && salario <750){
						cout<<"O valor do aumento e 75,00";
						salariof=salario+75;
						cout<<"\nO novo salario e: "<<salariof;
	     }
	      else if (opcao == 2 && salario<450){
							cout<<"O valor do aumento e 100,00";
							salariof=salario+100;
							cout<<"\nO novo salario e: "<<salariof;
	      }else if (opcao ==3 && salario<=700){
								cout<<"Sua classificacao e: mal remunerado";
	      }
	        else if (opcao == 3 && salario>700){
									cout<<"Sua classificacao e: bem remunerado";
	        }
	      
	 
	
}
