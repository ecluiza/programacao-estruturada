#include <iostream>
using namespace std;
int main(){
	float n1, n2, n3;
	
	cout<<"Informe o primeiro numero: ";
	cin>>n1;
	cout<<"Informe o segundo numero: ";
	cin>>n2;
	cout<<"Informe o terceiro numero: ";
	cin>>n3;
	
	if (n1<n2 && n2<n3){
		cout<<"A ordem crescente dos numeros e: "<<n1<<" "<<n2<<" "<<n3;
	}
	 else if (n1<n3 && n3<n2){
			cout<<"A ordem crescente dos numeros e: "<<n1<<" "<<n3<<" "<<n2;
	 }
	  else if (n2<n1 && n1<n3){
			 cout<<"A ordem crescente dos numeros e: "<<n2<<" "<<n1<<" "<<n3;
	  }
	   else if (n2<n3 && n3<n1){
			  cout<<"A ordem crescente dos numeros e: "<<n2<<" "<<n3<<" "<<n1;
	   }
	    else if (n3<n2 && n2<n1){
			   cout<<"A ordem crescente dos numeros e: "<<n3<<" "<<n2<<" "<<n1;
	    }
	     else if (n3<n1 && n1<n2){
				 cout<<"A ordem crescente dos numeros e: "<<n3<<" "<<n1<<" "<<n2;
	     }
}
