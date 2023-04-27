#include <iostream>
using namespace std;
int main (){
	
	float peso, altura;
	
	cout<<"Informe seu peso: ";
	cin>>peso;
	cout<<"Informe sua altura: ";
	cin>>altura;
	
	if (altura<1.20 && peso<60){
		cout<<"Sua classificacao e: A";
	}
		else if (altura<1.20 && peso>=60 && peso<=90){
			cout<<"Sua classificacao e: D";
		}
			else if (altura<1.20 && peso>90){
				cout<<"Sua classificacao e: G";
			}
				else if (altura>=1.20 && altura<=1.70 && peso<60){
					cout<<"Sua classificacao e: B";
				}
					else if(altura>=1.20 && altura<=1.70 && peso>=60 && peso<=90){
						cout<<"A sua classificacao e: E";
					}
						else if(altura>=1.20 && altura<=1.70 && peso>90){
							cout<<"A sua classificacao e: H";
						}
							else if(altura>1.70 && peso<60){
								cout<<"A sua classificacao e: C";	
							}
								else if(altura>1.70 && peso>=60 && peso<=90){
									cout<<"A sua classificacao e: F";
								}
									else if(altura>1.70 && peso>90){
										cout<<"A sua classificacao e: I";
									}
}
