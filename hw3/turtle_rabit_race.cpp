#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <unistd.h>
#define RACE_END 70
#define TRUE 1
#define FALSE 0
using namespace std;

void moveTortoise (int *t_position){
	int t_value = rand() %10 +1;

	if ( (t_value>=1) && (t_value<=5)){
		*t_position += 3;
	}
	else if ( (t_value>=6) && (t_value<=7)){
		*t_position -=6;
	}
	else{
		*t_position +=1;
	}

	if (*t_position <1)
		*t_position = 1;

	return ;
}

void moveHare (int *r_position){
	int r_value = rand() %10 +1;

	if ((r_value>=3) && (r_value<=4)){
		*r_position +=9;
	}
	else if (r_value == 5){
		*r_position -=12;
	}
	else if ((r_value>=6)&&(r_value<=8)){
		*r_position +=1;
	}
	else if ((r_value>=9) && (r_value<=10)){
		*r_position -=2;
	}

	if (*r_position <1)
		*r_position = 1;

	return ;
}

void printCurrentPositions (int *t_position, int *r_position){
	int i, OUCH;

	if (*t_position == *r_position){
		for (i=1;i<=RACE_END;i++){
			if (i == *t_position)
				cout << "OUCH!!";
			else
				cout << "_";
		}
	}
	else{
		for (i=1;i<=RACE_END;i++)
			if (i == *t_position)
				cout << "T";
			else if (i == *r_position)
				cout << "H";
			else
				cout << "_";
	}
	cout << "\n";
	sleep(1);

	return ;
}


int main(){
	int t_position =1;
	int r_position =1;

	srand(time(NULL));
	cout << "BANG !!!!!\nAND THEY'RE OFF !!!!!\n";

	while ((t_position < RACE_END)&&(r_position < RACE_END)){
		moveTortoise(&t_position);
		moveHare(&r_position);
		printCurrentPositions(&t_position, &r_position);
	}

	if (t_position > r_position){
		cout << "TORTOISE WIN!!! YAY!!!\n";
	}
	else if (t_position < r_position){
		cout << "Hare wins. Yuch!!!\n";
	}
	else{
		cout << "It's a tie.\n";
	}

	return 0;
}
