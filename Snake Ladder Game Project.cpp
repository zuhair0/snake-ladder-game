#include<iostream>
#include<cstdlib>
using namespace std;
class game{
	int Board[10][10];
	public:
		void display() // definition of display function.
{
	int k=1;
         for(int i=0;i<10;i++)
         for(int j=0;j<10;j++)
           Board[i][j]=k++;
      for(int i=9;i>=0;i--){
              cout <<endl;
              if(i%2!=0){ // Add line Display Code
      for(int j=9;j>=0;j--){
      if( Board[i][j]==1 || Board[i][j]==24) // this is all about creating sankes
		//and ladder;
        cout << Board[i][j]<<"S1\t" ;
        if( Board[i][j]==13 || Board[i][j]==55)
        cout << Board[i][j]<<"S2\t" ;
        else if( Board[i][j]==29 || Board[i][j]==71)
        cout << Board[i][j]<<"S3\t" ;
        else if( Board[i][j]==54 || Board[i][j]==88)
        cout << Board[i][j]<<"S4\t" ;
        else if( Board[i][j]==6|| Board[i][j]==99)
        cout << Board[i][j]<<"S5\t" ;
        else if(Board[i][j]==8 || Board[i][j]==31)
        cout << Board[i][j]<<"L1\t" ;
        else if(Board[i][j]==15 || Board[i][j]==97)
        cout << Board[i][j]<<"L2\t" ;
        else if(Board[i][j]==42 || Board[i][j]==81)
        cout << Board[i][j]<<"L3\t" ;
        else if(Board[i][j]==66 || Board[i][j]==87)
        cout << Board[i][j]<<"L4\t" ;

          else
          cout << Board[i][j] << "\t";}
         }
         else
         {
             for(int j=0;j<10;j++)
             if( Board[i][j]==1 || Board[i][j]==24) // Even Line display code
            cout << Board[i][j]<<"S1\t" ;
            else if( Board[i][j]==13 || Board[i][j]==55) // this is all about
			//creating sankes and ladder
            cout << Board[i][j]<<"S2\t" ;
            else if( Board[i][j]==29 || Board[i][j]==71)
            cout << Board[i][j]<<"S3\t" ;
            else if( Board[i][j]==54 || Board[i][j]==88)
            cout << Board[i][j]<<"S4\t" ;
            else if( Board[i][j]==6|| Board[i][j]==99)
            cout << Board[i][j]<<"S5\t" ;
            else if(Board[i][j]==8 || Board[i][j]==31)
            cout << Board[i][j]<<"L1\t" ;
            else if(Board[i][j]==15 || Board[i][j]==97)
            cout << Board[i][j]<<"L2\t" ;
            else if(Board[i][j]==42 || Board[i][j]==81)
            cout << Board[i][j]<<"L3\t" ;
            else if(Board[i][j]==66 || Board[i][j]==87)
            cout << Board[i][j]<<"L4\t" ;
            else
            cout << Board[i][j] << "\t";}
      }

}
};
class players{
	public:
		int currentpos=1;
		int perivouspos=1;
		int pos;
		string name;
		int rolldice(){
			pos=rand()%(6)+1; 
			return pos;
		}
		int position(int p){
			switch(p){
			case 8:
				cout<<"You got ladder!! Now are at 31"<<endl;
				currentpos=31;
                return currentpos;
                break;
            case 15:
            	cout<<"You got ladder!! Now are at 97"<<endl;
            	currentpos=97;
            	return currentpos; 
        	    break;
            case 42:
            	cout<<"You got ladder!! Now are at 81"<<endl;
            	currentpos=81;
			    return currentpos;
                break;
            case 66:
            	cout<<"You got ladder!! Now are at 87"<<endl;
            	currentpos=87;
        	    return currentpos;
				break;
                         // creating snakes
            case 24:
            	cout<<"You got SNAKE!! Now are at 1"<<endl;
            	currentpos=1;
                return currentpos;/* cout << "Wow.. You Got Snake\n";*/
				break;
            case 55:
            	cout<<"You got SNAKE!! Now are at 13"<<endl;
            	currentpos=13;
                return currentpos;
				break;
            case 71:
            	cout<<"You got SNAKE!! Now are at 29"<<endl;
            	currentpos=29;
                return currentpos; 
				break;
            case 88:
            	cout<<"You got SNAKE!! Now are at 54"<<endl;
            	currentpos=54;
            	return currentpos; 
				break;
            case 99:
            	cout<<"You got SNAKE!! Now are at 6"<<endl;
            	currentpos=6;
              	return currentpos; 
				break;
            default:
                return (p); break;
		}
	}
};
int main(){
	players play1,play2,play3,play4;
	int p1,p2,p3,p4;
	game b;
	char ch,choice;
	int score;
	cout<<"How many players? max 4 allowed ";
	cin>>choice;
	switch(choice){
		case '2':{
			cout<<"Enter 1st player name: ";
	cin>>play1.name;
	cout<<"Enter 2nd player name: ";
	cin>>play2.name;
	b.display();
	while(1){
	cout<<"Press R/r for 1st player turn: ";
	cin>>ch;
	if(ch=='R' || ch=='r'){
		cout<<"Dice roll is: "<<play1.rolldice()<<endl;
		score=play1.currentpos+play1.rolldice();
		play1.currentpos=score;
		cout<<"1st player is at "<<score<<endl;
		if(play1.currentpos>=100){
			cout<<"1st player won!!"<<endl;
			exit(0);
		}
		}
		cout<<"Press R/r for 2nd player turn: ";
	cin>>ch;
	if(ch=='R' || ch=='r'){
		cout<<"Dice roll is: "<<play1.rolldice()<<endl;
		score=play2.currentpos+play2.rolldice();
		play2.currentpos=score;
		play2.position(play2.currentpos);
		cout<<"2ND player is at "<<play2.currentpos<<endl;
		if(play2.currentpos>=100){
			cout<<"2nd player won!!"<<endl;
			exit(0);
		}
		}
		cout<<endl;
	}
			break;
		}
		case '3':{
			cout<<"Enter 1st player name: ";
	cin>>play1.name;
	cout<<"Enter 2nd player name: ";
	cin>>play2.name;
	cout<<"Enter 3rd player name: ";
	cin>>play3.name;
	b.display();
		while(1){
	cout<<"Press R/r for 1st player turn: ";
	cin>>ch;
	if(ch=='R' || ch=='r'){
		cout<<"Dice roll is: "<<play1.rolldice()<<endl;
		score=play1.currentpos+play1.rolldice();
		play1.currentpos=score;
		cout<<"1st player is at "<<score<<endl;
		if(play1.currentpos>=100){
			cout<<"1st player won!!"<<endl;
		}
		}
		cout<<"Press R/r for 2nd player turn: ";
	cin>>ch;
	if(ch=='R' || ch=='r'){
		cout<<"Dice roll is: "<<play1.rolldice()<<endl;
		score=play2.currentpos+play2.rolldice();
		play2.currentpos=score;
		play2.position(play2.currentpos);
		cout<<"2ND player is at "<<play2.currentpos<<endl;
		if(play2.currentpos>=100){
			cout<<"2nd player won!!"<<endl;
		}
		}
		cout<<"Press R/r for 3rd player turn: ";
	cin>>ch;
	if(ch=='R' || ch=='r'){
		cout<<"Dice roll is: "<<play1.rolldice()<<endl;
		score=play3.currentpos+play3.rolldice();
		play3.currentpos=score;
		play3.position(play3.currentpos);
		cout<<"3rd player is at "<<play3.currentpos<<endl;
		if(play3.currentpos>=100){
			cout<<"3rd player won!!"<<endl;	
		}
		}
		cout<<endl;
		if(play1.currentpos>=100 && play2.currentpos>=100){
			cout<<"1st and 2nd player won"<<endl;
		exit(0);
	}
		if(play1.currentpos>=100 && play3.currentpos>=100){
			cout<<"1st and 3rd player won"<<endl;
		exit(0);
	}
		if(play2.currentpos>=100 && play3.currentpos>=100){
			cout<<"2nd and 3rd player won"<<endl;
		exit(0);
	}
	}
			break;
		}
		case '4':{
			cout<<"Enter 1st player name: ";
	cin>>play1.name;
	cout<<"Enter 2nd player name: ";
	cin>>play2.name;
	cout<<"Enter 3rd player name: ";
	cin>>play3.name;
	cout<<"Enter 4th player name: ";
	cin>>play4.name;
	b.display();
	while(1){
	cout<<"Press R/r for 1st player turn: ";
	cin>>ch;
	if(ch=='R' || ch=='r'){
		cout<<"Dice roll is: "<<play1.rolldice()<<endl;
		score=play1.currentpos+play1.rolldice();
		play1.currentpos=score;
		cout<<"1st player is at "<<score<<endl;
		if(play1.currentpos>=100){
			cout<<"1st player won!!"<<endl;
		}
		}
		cout<<"Press R/r for 2nd player turn: ";
	cin>>ch;
	if(ch=='R' || ch=='r'){
		cout<<"Dice roll is: "<<play1.rolldice()<<endl;
		score=play2.currentpos+play2.rolldice();
		play2.currentpos=score;
		play2.position(play2.currentpos);
		cout<<"2ND player is at "<<play2.currentpos<<endl;
		if(play2.currentpos>=100){
			cout<<"2nd player won!!"<<endl;
		}
		}
		cout<<"Press R/r for 3rd player turn: ";
	cin>>ch;
	if(ch=='R' || ch=='r'){
		cout<<"Dice roll is: "<<play1.rolldice()<<endl;
		score=play3.currentpos+play3.rolldice();
		play3.currentpos=score;
		play3.position(play3.currentpos);
		cout<<"3rd player is at "<<play3.currentpos<<endl;
		if(play3.currentpos>=100){
			cout<<"3rd player won!!"<<endl;	
		}
		}
		cout<<"Press R/r for 4th player turn: ";
	cin>>ch;
	if(ch=='R' || ch=='r'){
		cout<<"Dice roll is: "<<play1.rolldice()<<endl;
		score=play4.currentpos+play4.rolldice();
		play4.currentpos=score;
		play4.position(play4.currentpos);
		cout<<"4th player is at "<<play4.currentpos<<endl;
		if(play4.currentpos>=100){
			cout<<"4th player won!!"<<endl;
			
		}
		}
		cout<<endl;
		if(play1.currentpos>=100 && play2.currentpos>=100 && play3.currentpos>=100){
			cout<<"1st, 2nd and 3rd player are won and 4t player lost"<<endl;
			exit(0);
		}
		if(play1.currentpos>=100 && play2.currentpos>=100 && play4.currentpos>=100){
			cout<<"1st, 2nd and 4th player are won and 3rd player lost"<<endl;
			exit(0);
		}
		if(play1.currentpos>=100 && play3.currentpos>=100 && play4.currentpos>=100){
			cout<<"1st, 3rd and 4th player are won and 2nd player lost"<<endl;
			exit(0);
		}
		if(play2.currentpos>=100 && play3.currentpos>=100 && play4.currentpos>=100){
			cout<<"2nd, 3rd and 4th player are won and 1st player lost"<<endl;
			exit(0);
		}
	}
			break;
		}
	}
}
