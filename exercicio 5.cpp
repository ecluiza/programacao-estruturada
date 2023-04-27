#include <iostream>
using namespace std;
int main(){
	float n1, n2, n3, n4;
	
	cout<<"Informe 3 numeros em ordem crescente";
	cout<<"\nInforme o primeiro numero: ";
	cin>>n1;
	cout<<"Informe o segundo numero: ";
	cin>>n2;
	cout<<"Informe o terceiro numero: ";
	cin>>n3;
	cout<<"Informe um quarto numero aleatorio: ";
	cin>>n4;
	
	if (n4>n3){
		cout<<"A ordem cresecnte dos numeros e: "<<n1<<" "<<n2<<" "<<n3<<" "<<n4;
	}
	 else if (n4>n2 && n4<n3){
			cout<<"A ordem crescente dos numero e: "<<n1<<" "<<n2<<" "<<n4<<" "<<n3;
	 }
	  else if (n4>n1 && n4<n2){
			 cout<<"A ordem crescente dos numeros e: "<<n1<<" "<<n4<<" "<<n2<<" "<<n3;
	  }
	   else if (n4<n1){
			  cout<<"A ordem crescente dos numeros e: "<<n4<<" "<<n1<<" "<<n2<<" "<<n3;
	   }
}
