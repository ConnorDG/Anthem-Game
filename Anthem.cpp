/*============================================================================
* Name        : Anthem.cpp
* Author      : Connor Gibson
* Version     : 1.0
* Description : My project for English
*============================================================================
*/
#include <iostream>
using namespace std;

int main() {
	int a;
	int b;
	int c;
	int d;
	int e;
	int f;
	int g;
	int h;
	int i;
	//first scenario
	cout << "You come across a weird man hole what do you do?"<<endl<<"1:You go down the man hole."<<endl<<"2:You keep on going on with your regular life." << endl;
	cin >> a;
	if (a==1){
		//second correct
		cout << "You find out it is a old subway station were you can be alone."<<endl<<"You meet Liberty 5-3000. What do you do?"<<endl<<"1:You think of her as a fellow sister."<<endl<<"2:You start talking to her because you think she is beautiful."<<endl;
		cin >> b;
		if (b == 2){
			//third correct
			cout << "You start liking Liberty 5-3000, so you show her to the subway station you found."<<endl<<"You start sharing your thoughts about the Unmentionable Times and it shows Liberty 5-3000 that you are breaking from the society that constrains you."<<endl<<"1:You only just talk about becoming different than society."<<endl<<"2:You start doing experiments, which you are not allowed to do."<<endl;
			cin >> c;
			if (c==2){
				//fourth correct
				cout << "You find electricity and you create the light bulb."<<endl<<"You want the rest of the world to have your invention."<<endl<<"1:You bring it to the World Council."<<endl<<"2:You keep you invention quiet."<<endl;
				cin >>d;
				if (d==1){
					cout<<"The World Council got mad at you, so they want you to go to Palace of Corrective Detention."<<endl<<"1:You run away into the forest."<<endl<<"2:You let them put you into Palace of Corrective Detention."<<endl;
					cin>>e;
					if(e==1){
						cout<<"You run away into the forest and you pass out for days. After waking up you see a stream."<<endl<<"1:You see your reflection."<<endl<<"2:You take a drink."<<endl;
						cin>>f;
						if(f==1){
							cout<<"You see your reflection and realize that you are not shapeless which gives you courage."<<endl;
						}
						cout<<"You find out that Liberty 5-3000 has followed you to the forest."<<endl<<"1:You force her back to the evil."<<endl<<"2:You kiss her and make a life together."<<endl;
						cin>>g;
						if(g==2){
							cout<<"You and Liberty 5-3000 start exploring the forest and you find a house from the Unmentionable Times."<<endl<<"1:You go up to the house and explore it."<<endl<<"2:You keep exploring the forest."<<endl;
							cin >>h;
							if(h==1){
								cout<<"You find the house is huge, it is big enough for 20 people but there are only 2 beds. you also find there are books."<<endl<<"1:You go to sleep in the beds."<<endl<<"2:You start reading the books."<<endl;
								cin>>i;
								while(i!=2){
									cout<<"You wake up and explore the house and you see the books again."<<endl<<"1:You ignore them."<<endl<<"2:You read them."<<endl;
									cin>>i;
								}
								cout<<"You find the power of I and being an individual."<<endl;
							}
							else{
								cout<<"You are found by the council and they kill you and Liberty 5-3000 on the spot."<<endl;
							}
						}
						else{
							cout<<"She goes back after a long argument. You find out she was sent to Palace of Corrective Detention and was torcherd for helping you. she was forced to give your location. They found you and killed you."<<endl;
						}
					}
					else{
						cout<<"You spend the rest of your life being tortured in the Palace of Corrective Detention"<<endl;
					}
				}
				else{
					cout<<"You keep inventing things that the world will never see."<<endl;
				}
			}
			else{
				//fourth end
				cout << "You never really do anything with your life besides being a street sweeper."<<endl;
			}
		}
		else{
			//Third end
			cout << "You find the invention of the light bulb but you never build up the courage to show it to the council, so you spend the rest of your life doing experiments.";
		}
	}
	else{
		//second end
		cout << "You spend most of your life being a street sweeper. You came up with a scientific idea, but you were immediately punished and spent the rest of your life in a prison."<<endl;
	}
	return 0;
}
