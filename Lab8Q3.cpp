#include <iostream>
using namespace std;
//write function that will mean


int max(int a[], int b, int c){//for max
	return a[b-c];
}
int min(int a[], int b, int c){//for min
	return a[c-1];
}
//write main function
	int main(){
	int x;    //ask user to define the array
	cout <<"enter the number of terms to be in array"<<endl;
	cin >>x;
	int billu[x];
	cout <<"enter the numbers now"<<endl;
	for(int n=0;n<x;n++)
	cin >>billu[n];
	
	for (int i=0;i<x-1;i++)    
        for (int l=0;l<x-i-1;l++)  
	if(billu[l]>billu[l+1]) {//this will arrange elements according to value
		billu[l]=billu[l]+billu[l+1];
		billu[l+1]=billu[l]-billu[l+1];
		billu[l]=billu[l]-billu[l+1];}
	//ask user
	cout <<"enter the k as in to find the kth largest and smallest"<<endl;
	int k;
	cin >>k;
	int kmax = max(billu, x, k);
	int kmin = min(billu, x, k);
	cout <<"kth max is "<< kmax <<endl;
	cout <<"kth min is "<< kmin <<endl;
	cout <<"thank you for using this program"<<endl;//instead of the one we already made in lab 4 -_- 
	return 0;
	}
