#include <iostream>
using namespace std;
int main (){
	
	float preco, venda;
	
	cout<<"Informe e preco atual do produto: ";
	cin>>preco;
	cout<<"Informe a media de venda mensal: ";
	cin>>venda;
	
	if (preco<30 && venda<500){
		cout<<"O novo preco do produto e: "<<preco+preco*10/100;
	}
		else if (preco>=30 && venda>=500 && venda<1200){
			cout<<"O novo preco do produto e: "<<preco+preco*15/100;
		}
			else if (preco>=80 && venda>=1200){
				cout<<"O novo preco do produto e: "<<preco-preco*20/100;
			}
}
