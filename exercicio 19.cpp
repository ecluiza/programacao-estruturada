#include<iostream>
using namespace std;
int main(){
	
	float salariob, tempo, salariol,imposto;
	
	cout<<"Informe o salario base: ";
	cin>>salariob;
	cout<<"Informe o tempo de servico: ";
	cin>>tempo;
	
	if(salariob<200 && tempo<3){
		cout<<"Insento de impostos";
		cout<<"\nA gratificacao e: 23";
		salariol=salariob+23;
		cout<<"\nO salario liquido e: "<<salariol;
		if(salariol<350){
			cout<<"\nA sua classificacao e: A";
		}
			else if(salariol>=350 && salariol<=600){
				cout<<"\nA sua classificacao e: B";
			}
				else if(salariol>600){
					cout<<"\nA sua classificacao e: C";
				}
	}
		else if(salariob<200 && tempo>=3 && tempo<=6){
			cout<<"Insento de impostos";
			cout<<"\nA gratificacao e: 35";
			salariol=salariob+35;
			cout<<"\nO salario liquido e: "<<salariol;
			if(salariol<350){
				cout<<"\nA sua classificacao e: A";
			}
				else if(salariol>=350 && salariol<=600){
					cout<<"\nA sua classificacao e: B";
				}
					else if(salariol>600){
						cout<<"\nA sua classificacao e: C";
					}
		}
			else if(salariob<200 && tempo>6){
				cout<<"Insento de impostos";
				cout<<"\nA gratificacao e: 33";
				salariol=salariob+33;
				cout<<"\nO salario liquido e: "<<salariol;
				if(salariol<350){
					cout<<"\nA sua classificacao e: A";
				}
					else if(salariol>=350 && salariol<=600){
						cout<<"\nA sua classificacao e: B";
					}
						else if(salariol>600){
							cout<<"\nA sua classificacao e: C";
						}
			}
				else if(salariob>=200 && salariob<=450 && tempo<3){
					imposto=salariob*3/100;
					cout<<"O valor do imposto e: "<<imposto;
					cout<<"\nA gratificacao e: 23";
					salariol=salariob-imposto+23;
					cout<<"\nO salario liquido e: "<<salariol;
					if(salariol<350){
						cout<<"\nA sua classificacao e: A";
					}
						else if(salariol>=350 && salariol<=600){
							cout<<"\nA sua classificacao e: B";
						}
							else if(salariol>600){
								cout<<"\nA sua classificacao e: C";
							}
				}
					else if(salariob>=200 && salariob<=450 && tempo>=3 && tempo<=6){
						imposto=salariob*3/100;
						cout<<"O valor do imposto e: "<<imposto;
						cout<<"\nA gratificacao e: 35";
						salariol=salariob-imposto+35;
						cout<<"\nO salario liquido e: "<<salariol;
						if(salariol<350){
							cout<<"\nA sua classificacao e: A";
						}
							else if(salariol>=350 && salariol<=600){
								cout<<"\nA sua classificacao e: B";
							}
								else if(salariol>600){
									cout<<"\nA sua classificacao e: C";
								}
					}
						else if(salariob>=200 && salariob<=450 && tempo>6){
							imposto=salariob*3/100;
							cout<<"O valor do imposto e: "<<imposto;
							cout<<"\nA gratificacao e: 33";
							salariol=salariob-imposto+33;
							cout<<"\nO salario liquido e: "<<salariol;
							if(salariol<350){
								cout<<"\nA sua classificacao e: A";
							}
								else if(salariol>=350 && salariol<=600){
									cout<<"\nA sua classificacao e: B";
								}
									else if(salariol>600){
										cout<<"\nA sua classificacao e: C";
									}
						}
							else if(salariob>450 && salariob<=500 && tempo<3){
								imposto=salariob*8/100;
								cout<<"O valor do imposto e: "<<imposto;
								cout<<"\nA gratificacao e: 23";
								salariol=salariob-imposto+23;
								cout<<"\nO salario liquido e: "<<salariol;
								if(salariol<350){
									cout<<"\nA sua classificacao e: A";
								}
									else if(salariol>=350 && salariol<=600){
										cout<<"\nA sua classificacao e: B";
									}
										else if(salariol>600){
											cout<<"\nA sua classificacao e: C";
										}
							}
								else if(salariob>500 && salariob<700 && tempo<=3){
									imposto=salariob*8/100;
									cout<<"O valor do imposto e: "<<imposto;
									cout<<"\nA gratificacao e: 20";
									salariol=salariob-imposto+20;
									cout<<"\nO salario liquido e: "<<salariol;
									if(salariol<350){
										cout<<"\nA sua classificacao e: A";
									}
										else if(salariol>=350 && salariol<=600){
											cout<<"\nA sua classificacao e: B";
										}
											else if(salariol>600){
												cout<<"\nA sua classificacao e: C";
											}
								}
									else if(salariob>500 && salariob<700 && tempo>=3){
										imposto=salariob*8/100;
										cout<<"O valor do imposto e: "<<imposto;
										cout<<"\nA gratificacao e: 30";
										salariol=salariob-imposto+30;
										cout<<"\nO salario liquido e: "<<salariol;
										if(salariol<350){
											cout<<"\nA sua classificacao e: A";
										}
											else if(salariol>=350 && salariol<=600){
												cout<<"\nA sua classificacao e: B";
											}
												else if(salariol>600){
													cout<<"\nA sua classificacao e: C";
												}
									}
										else if(salariob>=700 && tempo<3){
											imposto=salariob*12/100;
											cout<<"O valor do imposto e: "<<imposto;
											cout<<"\nA gratificacao e: 20";
											salariol=salariob-imposto+20;
											cout<<"\nO salario liquido e: "<<salariol;
											if(salariol<350){
												cout<<"\nA sua classificacao e: A";
											}	
												else if(salariol>=350 && salariol<=600){
													cout<<"\nA sua classificacao e: B";
												}
													else if(salariol>600){
														cout<<"\nA sua classificacao e: C";
													}
										}
											else if(salariob>=700 && tempo>=3){
												imposto=salariob*12/100;
												cout<<"O valor do imposto e: "<<imposto;
												cout<<"\nA gratificacao e: 30";
												salariol=salariob-imposto+30;
												cout<<"\nO salario liquido e: "<<salariol;
												if(salariol<350){
													cout<<"\nA sua classificacao e: A";
												}	
													else if(salariol>=350 && salariol<=600){
														cout<<"\nA sua classificacao e: B";
													}
														else if(salariol>600){
															cout<<"\nA sua classificacao e: C";
														}
											}
											
				
}
