#pragma once
#include  <iostream>

using namespace std;

class Dice
{
	friend ostream& operator<<(ostream& os, const Dice& dt);
private:

	int rol;
	int num, i;
	float sum;
	int r;
	float avg;
	int array[10];


public:

	Dice();
	~Dice();
	int roll();
	float average(int[], int);
	float average(Dice, int);

};

