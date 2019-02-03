#include <iostream>
#include <time.h>
#include <cmath>
#include <cstdlib>
using namespace std;

int main (){
	string team_1, team_2;
	int total_score1;
	int total_score2;
	int j=0;
	int k=0;
	int l=0;
	int m=0;
	int n=0;
	int o=0;
	int p=0;
	int q=0;
	int r=0;
	int condition;
	int balls_remaining=30;
	int overs;
	unsigned int balls=0;
	int score;
	int toss;
	int team1toss;
	int team2toss;
	int decision;
	string tossprediction;
	string Arrayteam_1 [6];
	string Arrayteam_2 [6];

	srand(time(0));

	//Entering names of the teams and players names

	cout<<"Enter the name of the first team: ";
	cin>>team_1;
	cout<<endl<<endl;
	cout<<"Enter the name of the second team: ";
	cin>>team_2;
	cout<<endl<<endl;

	cout<<"Enter the name of "<<team_1<<" players chosen for the match: "<<endl<<endl;
	for (int i = 0; i < 5; i++){
		cout<<"\t\t\t";
		cin>>Arrayteam_1[i];
	}
	cout<<endl<<endl;
	cout<<"Enter the name of "<<team_2<<" players chosen for the match: "<<endl<<endl;
	for (int i = 0; i < 5; i++)
	{
		cout<<"\t\t\t";
		cin>>Arrayteam_2[i];
	}
	cout<<endl<<endl;

	//Deciding which team wins the toss

	toss = 1;

	if (toss == 1)
		cout<<team_1<<" won the toss..."<<endl<<endl;
	else if (toss == 2)
		cout<<team_2<<" won the toss..."<<endl<<endl;

	//What the team would decide to do

	cout<<"\t\tPress '1' to bat or '2' to bowl: "<<endl<<endl;
	cin>>decision;

	if (decision == 1)
		cout<<"\t\tThe team decided to bat: "<<endl<<endl;
	else if (decision == 2)
		cout<<"\t\tThe team decided to bowl: "<<endl<<endl;
	else
		cout<<"ERROR, THE GAME IS DELAYED NOW"<<endl<<endl;

	if (toss == 1 && decision == 1)
	{
		while (balls_remaining > 0 && j <= 5)
		{
			balls++;
			balls_remaining = 30 - balls;

			cin>>condition;
			switch (condition)
			{
				case 1:
				total_score1 = total_score1 + 1;
				cout<<Arrayteam_1[j]<<" scored a run"<<endl;
				cout<<"The score is: "<<total_score1<<endl;
				cout<<balls_remaining<<" balls are remaining..."<<endl<<endl;
				break;

				case 2:
				total_score1 = total_score1 + 2;
				cout<<Arrayteam_1[j]<<" scored 2 runs;"<<endl;
				cout<<"The score is: "<<total_score1<<endl;
				cout<<balls_remaining<<" balls are remaining..."<<endl<<endl;
				break;

				case 3:
				total_score1 = total_score1 + 3;
				cout<<Arrayteam_1[j]<<" scored 3 runs;"<<endl;
				cout<<"The score is: "<<total_score1<<endl;
				cout<<balls_remaining<<" balls are remaining..."<<endl<<endl;
				break;

				case 4:
				total_score1 = total_score1 + 4;
				cout<<Arrayteam_1[j]<<" scored 4 runs;"<<endl;
				cout<<"The score is: "<<total_score1<<endl;
				cout<<balls_remaining<<" balls are remaining..."<<endl<<endl;
				break;

				case 5:
				total_score1 = total_score1 + 5;
				cout<<Arrayteam_1[j]<<" scored 5 runs;"<<endl;
				cout<<"The score is: "<<total_score1<<endl;
				cout<<balls_remaining<<" balls are remaining..."<<endl<<endl;
				break;

				case 6:
				total_score1 = total_score1 + 6;
				cout<<Arrayteam_1[j]<<" scored 6 runs;"<<endl;
				cout<<"The score is: "<<total_score1<<endl;
				cout<<balls_remaining<<" balls are remaining..."<<endl<<endl;
				break;

				case 7:
				cout<<"OUT!!!!"<<endl;
				cout<<Arrayteam_1[j]<<" has been dismissed..."<<endl;
				j++;
				cout<<Arrayteam_1[j]<<" stepped into the field."<<endl;
				cout<<balls_remaining<<" balls are remaining..."<<endl<<endl;
				break;
			}
		}

		cout<<"THE TOTAL SCORE "<<team_1<<" scored was: "<<total_score1<<endl<<endl;
		cout<<"--------------------------------------------------------"<<endl<<endl;
		cout<<team_2<<" is batting now"<<endl<<endl;
		int balls_remaining2 = 30;
		int balls2;
		total_score2=0;
		while (balls_remaining2 > 0)
		{
			balls2++;
			balls_remaining2 = 30 - balls2;

			cin>>condition;
			switch (condition)
			{
				case 1:
				total_score2 = total_score2 + 1;
				cout<<Arrayteam_2[k]<<" scored a run"<<endl;
				cout<<"The score is: "<<total_score2<<endl;
				cout<<balls_remaining2<<" balls are remaining..."<<endl<<endl;
				break;

				case 2:
				total_score2 = total_score2 + 2;
				cout<<Arrayteam_2[k]<<" scored 2 runs;"<<endl;
				cout<<"The score is: "<<total_score2<<endl;
				cout<<balls_remaining2<<" balls are remaining..."<<endl<<endl;
				break;

				case 3:
				total_score2 = total_score2 + 3;
				cout<<Arrayteam_2[k]<<" scored 3 runs;"<<endl;
				cout<<"The score is: "<<total_score2<<endl;
				cout<<balls_remaining2<<" balls are remaining..."<<endl<<endl;
				break;

				case 4:
				total_score2 = total_score2 + 4;
				cout<<Arrayteam_2[k]<<" scored 4 runs;"<<endl;
				cout<<"The score is: "<<total_score2<<endl;
				cout<<balls_remaining2<<" balls are remaining..."<<endl<<endl;
				break;

				case 5:
				total_score2 = total_score2 + 5;
				cout<<Arrayteam_2[k]<<" scored 5 runs;"<<endl;
				cout<<"The score is: "<<total_score1<<endl;
				cout<<balls_remaining2<<" balls are remaining..."<<endl<<endl;
				break;

				case 6:
				total_score2 = total_score2 + 6;
				cout<<Arrayteam_2[k]<<" scored 6 runs;"<<endl;
				cout<<"The score is: "<<total_score2<<endl;
				cout<<balls_remaining2<<" balls are remaining..."<<endl<<endl;
				break;

				case 7:
				cout<<"OUT!!!!"<<endl;
				cout<<Arrayteam_2[k]<<" has been dismissed..."<<endl;
				k++;
				cout<<Arrayteam_2[k]<<" stepped into the field."<<endl;
				cout<<balls_remaining2<<" balls are remaining..."<<endl<<endl;
				break;
			}
		}
	}
	cout<<"THE TOTAL SCORE "<<team_2<<" scored was: "<<total_score2;
}