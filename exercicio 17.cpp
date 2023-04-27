#include <iostream>
using namespace std;
int main(){
	
	float cod1,cod2,peso,pesog,precot;
	
	cout<<"Informe o codigo do produto de 1 a 10: ";
	cin>>cod1;
	cout<<"Informe o codigo do pais de 1 a 3: ";
	cin>>cod2;
	cout<<"Informe o peso do produto em Kg: ";
	cin>>peso;
	
	pesog=peso*1000;
	
	if(cod1>=1 && cod1<=4 && cod2==1){
		cout<<"o peso do produto em gramas e: "<<pesog;
		precot=pesog*10;
		cout<<"\no preco total do produto e: "<<precot;
		cout<<"\nnao tem imposto";
		cout<<"\no valor total do produto e: "<<precot;
	}
		else if(cod1>=5 && cod1<=7 && cod2==1){
			cout<<"o peso do produto em gramas e: "<<pesog;
			precot=pesog*25;
			cout<<"\no preco total do produto e: "<<precot;
			cout<<"\nnao tem imposto";
			cout<<"\no valor total do produto e: "<<precot;	
		}
			else if(cod1>=8 && cod1<=10 && cod2==1){
				cout<<"o peso do produto em gramas e: "<<pesog;
				precot=pesog*35;
				cout<<"\no preco total do produto e: "<<precot;
				cout<<"\nnao tem imposto";
				cout<<"\no valor total do produto e: "<<precot;
			}
				else if(cod1>=1 && cod1<=4 && cod2==2){
					cout<<"o peso do produto em gramas e: "<<pesog;
					precot=pesog*10;
					cout<<"\no preco total do produto e: "<<precot;
					cout<<"\no valor do imposto e: "<<precot*15/100;
					cout<<"\no valor total do produto e: "<<precot+precot*15/100;
				}
					else if(cod1>=5 && cod1<=7 && cod2==2){
						cout<<"o peso do produto em gramas e: "<<pesog;
						precot=pesog*25;
						cout<<"\no preco total do produto e: "<<precot;
						cout<<"\no valor do imposto e: "<<precot*15/100;
						cout<<"\no valor total do produto e: "<<precot+precot*15/100;
					}
						else if(cod1>=8 && cod1<=10 && cod2==2){
							cout<<"o peso do produto em gramas e: "<<pesog;
							precot=pesog*35;
							cout<<"\no preco total do produto e: "<<precot;
							cout<<"\no valor do imposto e: "<<precot*15/100;
							cout<<"\no valor total do produto e: "<<precot+precot*15/100;
						}
							else if(cod1>=1 && cod2<=4 && cod2==3){
								cout<<"o peso do produto em gramas e: "<<pesog;
								precot=pesog*10;
								cout<<"\no preco total do produto e: "<<precot;
								cout<<"\no valor do imposto e: "<<precot*25/100;
								cout<<"\no valor total do produto e: "<<precot+precot*25/100;
							}
								else if(cod1>=5 && cod1<=7 && cod2==3){
									cout<<"o peso do produto em gramas e: "<<pesog;
									precot=pesog*25;
									cout<<"\no preco total do produto e: "<<precot;
									cout<<"\no valor do imposto e: "<<precot*25/100;
									cout<<"\no valor total do produto e: "<<precot+precot*25/100;
								}
									else if(cod1>=8 && cod1<=10 && cod2==3){
										cout<<"o peso do produto em gramas e: "<<pesog;
										precot=pesog*35;
										cout<<"\no preco total do produto e: "<<precot;
										cout<<"\no valor do imposto e: "<<precot*25/100;
										cout<<"\no valor total do produto e: "<<precot+precot*25/100;
									}
		
	
	
}
