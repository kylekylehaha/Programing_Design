#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <time.h>
#define MAX_SIZE 20
using namespace std;

void swap(int *data, int index1, int index2){
	int temp = data[index1];
	data[index1] = data[index2];
	data[index2] = temp;
	return ;
}

void quicksort(int *a, int left, int right){
	int pivotindex = (left+right)/2;
	int pivot = a[pivotindex];
	int index, i;

	if (right<=left)
		return;
	index = left;
	swap(a,pivotindex,right);
	for (i=left;i<right;i++){
		if (a[i]<=pivot){
			swap(a,index++,i);
		}
	}
	swap(a,index,right);
	quicksort(a,left,index-1);
	quicksort(a,index+1,right);
	return ;
}

int binarysearch(int *data, int key){
	int left = 0, right = MAX_SIZE-1;

	while (left <=right){
		int middle = (left+right)/2;
		
		if (data[middle] == key){
			return middle;
		}
		if (data[middle] > key)
			right = middle -1;
		else
			left = middle+1;
	}
	return -1;
}

void printArray(int *data){
	int i;
	for (i=0;i<MAX_SIZE;i++){
		cout <<data[i]<< setw(4);
		if (i==9)
			cout <<'\n';
	}
	cout <<'\n';
	return ;
}

int main(){
	int i,key,success;
	int data[MAX_SIZE];

	srand(time(NULL));
	for (i=0;i<MAX_SIZE;i++)
		data[i] = rand() % 100;
	cout << "enter searching key\n";
	cin >> key;
	cout << "before sort\n";
	printArray(data);
	quicksort(data,0,MAX_SIZE-1);
	cout << "after sorted\n";
	printArray(data);
	success = binarysearch(data,key);
	if (success == -1)
		cout << "fail to find key in array\n";
	else
		cout << "success to find key in index:"<<success<<'\n';
}
