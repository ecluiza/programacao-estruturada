#include <iostream>
using namespace std;
int main(){
	
	float a,b,c;
	
	cout<<"Informe a valor do primeiro lado: ";
	cin>>a;
	cout<<"Informe o valor do segundo lado: ";
	cin>>b;
	cout<<"Informe o valor do terceiro lado: ";
	cin>>c;
	
	if(a+b>c && a+c>b && b+c>a){
		cout<<"Os tres lados formam um triangulo.";
		if(a==b && b==c){
			cout<<"\nTriangulo equilatero";
		}
			else if(a==b || a==c || b==c ){
				cout<<"\nTriangulo isosceles";
			}
				else if (a!=b && b!=c){
					cout<<"\nTriangulo escaleno";
				}
					
	}
		else{
			cout<<"Os tres lados nao formam um triangulo.";
		}
}
