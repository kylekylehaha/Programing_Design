#include <iostream>
using namespace std;

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

int main(){
	int i;
	for (i=0;i<=10;i++){
		cout << "fibonacci (" << i << ") = " << i_fibonacci (i) << endl; 
	}
	cout << "fibonacci (20) = " << i_fibonacci(20) <<endl;	
	cout << "fibonacci (30) = " << i_fibonacci(30) <<endl;	
	cout << "fibonacci (35) = " << i_fibonacci(35) <<endl;	
}
