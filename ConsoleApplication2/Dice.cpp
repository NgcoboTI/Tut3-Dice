#include "Dice.h"


Dice::Dice()
{
	array[10] = { 0 };
	i = 0;
	sum = 0;
	avg = 0.0;
	r = 0;
}


Dice::~Dice()
{
}

int  Dice::roll(){
	//random generated number from 1 to 6

	srand(NULL);
	for (i; i < 10; i++)
	{
		array[i] = rand() % 6 + 1;
	}
	return array[10];
}

float Dice::average(int arr[], int num){
	//calculate the average of the rolls stored in the arrray
	for (i; i < num; i++)
	{
		sum += arr[i];
	}
	avg = sum / num;
	return avg;
}

float Dice::average(Dice obj, int r){

	//calculate the average using the Dice object

	for (i; i < r; i++)
	{
		sum += obj.array[i];
	}
	avg = sum / r;
	return avg;
}

ostream& operator<<(ostream& os, Dice& dt){
	
	os << dt.roll() << " " << endl;
	return os;
}
