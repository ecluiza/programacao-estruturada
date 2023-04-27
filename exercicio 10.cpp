#include <iostream>
using namespace std;
int main(){
	
	int codigo,salario,salariof;
	
	cout<<"Informe o codigo do funcionario de 1 a 5: ";
	cin>>codigo;
	cout<<"Informe o salario atual: ";
	cin>>salario;
	
	if (codigo == 1){
		cout<<"O cargo e: escrituario";
		cout<<"\nO aumento e: "<<salario*50/100;
		cout<<"\nO novo salario e: "<<salario+salario*50/100;
	}
	 else if (codigo == 2){
			cout<<"O cargo e: secretario";
		 	cout<<"\nO aumento e: "<<salario*35/100;
			cout<<"\nO novo salario e: "<<salario+salario*35/100;
	 }
	  else if (codigo == 3){
			 cout<<"O cargo e: caixa";
		 	 cout<<"\nO aumento e: "<<salario*20/100;
			 cout<<"\nO novo salario e: "<<salario+salario*20/100;
	  }
	   else if (codigo == 4){
			  cout<<"O cargo e: gerente";
		 	  cout<<"\nO aumento e: "<<salario*10/100;
			  cout<<"\nO novo salario e: "<<salario+salario*10/100;
	   }
	    else if (codigo == 5){
			   cout<<"O cargo e: diretor";
			   cout<<"\nNao possui aumento";
	    }
	   
	

	
}
