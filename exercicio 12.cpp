#include <iostream>
using namespace std;
int main (){
	
	float salario;
	
	cout<<"Informe seu salario: ";
	cin>>salario;
	
	if (salario<500){
		cout<<"A bonificacao e de: "<<salario*5/100;
		cout<<"\nO auxilio escola e de: 150,00";
		cout<<"\nSeu novo salario e: "<<salario+150+salario*5/100;
	}
		else if (salario>=500 && salario<=600){
			cout<<"A bonificacao e de: "<<salario*12/100;
			cout<<"\nO auxilio escola e de: 150,00";
			cout<<"\nSeu novo salario e: "<<salario+150+salario*12/100;
		}
			else if (salario>=500 && salario>600 && salario<=1200){
				cout<<"A bonificacao e de: "<<salario*12/100;
				cout<<"\nO auxilio escola e de: 100,00";
				cout<<"\nSeu novo salario e: "<<salario+100+salario*12/100;
			}
				else if (salario>1200){
					cout<<"Sem bonificacao";
					cout<<"\nO auxilio escola e de: 100,00";
					cout<<"\nSeu novo salario e: "<<salario+100;
				}
	 
}
