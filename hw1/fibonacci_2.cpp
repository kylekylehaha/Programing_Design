#include <iostream>
#include <cstdio>
#include <ctime>
using namespace std;

unsigned long r_fibonacci (unsigned long);
unsigned long i_fibonacci (unsigned long);
void r_run();
void i_run();

int main(){
	int i;
	clock_t start;
	double duration;

	start = clock();
	for (i=0;i<100000;i++)
		i_run();
	duration = (clock() - start) / (double) CLOCKS_PER_SEC;
	cout << "iterative_fibonacci time is " << duration << " sec"<<endl;

	start = clock();
	for (i=0;i<100000;i++)
		r_run();
	duration = (clock() - start) / (double) CLOCKS_PER_SEC;
	cout << "recursive_fibonacci time is " << duration <<" sec"<<endl;
}

void r_run(){
	int i;
	unsigned long temp;
	for (i=0;i<=10;i++)
		temp = r_fibonacci(i);
	return ;
}

void i_run(){
	int i;
	unsigned long temp;
	for (i=0;i<=10;i++)
		temp = i_fibonacci(i);
	return ;
}

unsigned long r_fibonacci (unsigned long number){
	if ((number == 0) || (number ==1))
		return number;
	else
		return r_fibonacci(number-1) + r_fibonacci(number-2);
}

unsigned long i_fibonacci (unsigned long number){
	int i, result, last1=1, last2=0;

	if ((number == 0) || (number ==1))
		result = number;
	else {
		for (i=2; i<=number;i++){
			result = last1 + last2;
			last2 = last1;
			last1 = result;			
		}
	}
	return result;
}
