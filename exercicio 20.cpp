#include <iostream>
using namespace std;
int main(){
	
	float angulo;
	
	cout<<"Informe um angulo de 1 a 360: ";
	cin>>angulo;
	
	if(angulo>=0 && angulo<=90){
		cout<<"Esse angulo pertence ao primeiro quadrante.";
	}
		else if(angulo>90 && angulo<=180){
			cout<<"Esse angulo pertence ao segundo quadrante.";
		}
			else if(angulo>180 && angulo<=270){
				cout<<"Esse angulo pertence ao terceiro quadrante.";
			}
				else if(angulo>270 && angulo<=360){
					cout<<"Esse angulo pertence ao quarto quadrante.";
				}
}
