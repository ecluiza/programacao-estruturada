#include <iostream>
using namespace std;
int main (){
	
	float code,codc,ton,kg,preco;
	
	cout<<"Informe o codigo do estado de 1 a 5: ";
	cin>>code;
	cout<<"Informe o codigo da carga de 10 a 40: ";
	cin>>codc;
	cout<<"Informe o peso em toneladas: ";
	cin>>ton;
	
	kg=ton*1000;
	
	if(codc>=10 && codc<=20 && code==1){
		cout<<"O peso da carga em kg e: "<<kg;
		preco=kg*100;
		cout<<"\nO preco da carga e: "<<preco;
		cout<<"\nO valor do imposto e: "<<preco*35/100;
		cout<<"\nO valor total e: "<<preco+preco*35/100;
	}
		else if(codc>=10 && codc<=20 && code==2){
			cout<<"O peso da carga em kg e: "<<kg;
			preco=kg*100;
			cout<<"\nO preco da carga e: "<<preco;
			cout<<"\nO valor do imposto e: "<<preco*25/100;
			cout<<"\nO valor total e: "<<preco+preco*25/100;
		}
			else if(codc>=10 && codc<=20 && code==3){
				cout<<"O peso da carga em kg e: "<<kg;
				preco=kg*100;
				cout<<"\nO preco da carga e: "<<preco;
				cout<<"\nO valor do imposto e: "<<preco*15/100;
				cout<<"\nO valor total e: "<<preco+preco*15/100;
			}
				else if(codc>=10 && codc<=20 && code==4){
					cout<<"O peso da carga em kg e: "<<kg;
					preco=kg*100;
					cout<<"\nO preco da carga e: "<<preco;
					cout<<"\nO valor do imposto e: "<<preco*5/100;
					cout<<"\nO valor total e: "<<preco+preco*5/100;
				}
					else if(codc>=10 && codc<=20 && code==5){
						cout<<"O peso da carga em kg e: "<<kg;
						preco=kg*100;
						cout<<"\nO preco da carga e: "<<preco;
						cout<<"\nImposto insento";
						cout<<"\nO valor total e: "<<preco;
					}
						else if (codc>=21 && codc<=30 && code==1){
							cout<<"O peso da carga em kg e: "<<kg;
							preco=kg*250;
							cout<<"\nO preco da carga e: "<<preco;
							cout<<"\nO valor do imposto e: "<<preco*35/100;
							cout<<"\nO valor total e: "<<preco+preco*35/100;
						}
							else if(codc>=21 && codc<=30 && code==2){
								cout<<"O peso da carga em kg e: "<<kg;
								preco=kg*250;
								cout<<"\nO preco da carga e: "<<preco;
								cout<<"\nO valor do imposto e: "<<preco*25/100;
								cout<<"\nO valor total e: "<<preco+preco*25/100;
							}
								else if(codc>=21 && codc<=30 && code==3){
									cout<<"O peso da carga em kg e: "<<kg;
									preco=kg*250;
									cout<<"\nO preco da carga e: "<<preco;
									cout<<"\nO valor do imposto e: "<<preco*15/100;
									cout<<"\nO valor total e: "<<preco+preco*15/100;
								}
									else if(codc>=21 && codc<=30 && code==4){
										cout<<"O peso da carga em kg e: "<<kg;
										preco=kg*250;
										cout<<"\nO preco da carga e: "<<preco;
										cout<<"\nO valor do imposto e: "<<preco*5/100;
										cout<<"\nO valor total e: "<<preco+preco*5/100;
									}
										else if (codc>=21 && codc<=30 && code==5){
											cout<<"O peso da carga em kg e: "<<kg;
											preco=kg*250;
											cout<<"\nO preco da carga e: "<<preco;
											cout<<"\nImposto insento: ";
											cout<<"\nO valor total e: "<<preco;
										}
											else if(codc>=31 && codc<=40 && code==1){
												cout<<"O peso da carga em kg e: "<<kg;
												preco=kg*340;
												cout<<"\nO preco da carga e: "<<preco;
												cout<<"\nO valor do imposto e: "<<preco*35/100;
												cout<<"\nO valor total e: "<<preco+preco*35/100;
											}
												else if(codc>=31 && codc<=40 && code==2){
													cout<<"O peso da carga em kg e: "<<kg;
													preco=kg*340;
													cout<<"\nO preco da carga e: "<<preco;
													cout<<"\nO valor do imposto e: "<<preco*25/100;
													cout<<"\nO valor total e: "<<preco+preco*25/100;
												}
													else if(codc>=31 && codc<=40 && code==3){
														cout<<"O peso da carga em kg e: "<<kg;
														preco=kg*340;
														cout<<"\nO preco da carga e: "<<preco;
														cout<<"\nO valor do imposto e: "<<preco*15/100;
														cout<<"\nO valor total e: "<<preco+preco*15/100;
													}
														else if(codc>=31 && codc<=40 && code==4){
															cout<<"O peso da carga em kg e: "<<kg;
															preco=kg*340;
															cout<<"\nO preco da carga e: "<<preco;
															cout<<"\nO valor do imposto e: "<<preco*5/100;
															cout<<"\nO valor total e: "<<preco+preco*5/100;
														}
															else if(codc>=31 && codc<=40 && code==5){
																cout<<"O peso da carga em kg e: "<<kg;
																preco=kg*340;
																cout<<"\nO preco da carga e: "<<preco;
																cout<<"\nImposto insento";
																cout<<"\nO valor total e: "<<preco;
															}
	
}
