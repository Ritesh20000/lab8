#include <iostream>
using namespace std;
//write function that will sum
int sum(int a[], int b){
    int s=0;
	for(int n=0;n<b;n++)
	s+=a[n];
	return s;
}
//write main function
	int main(){
	int x;    //ask user to define the array
	cout <<"enter the no. of terms you wanna sum(the no. of terms in the array)"<<endl;
	cin >>x;//shall be the size
	int billu[x];
	cout <<"enter the numbers you wanna sum"<<endl;//enter elements
	for(int n=0;n<x;n++)
	cin >>billu[n];
	int sumf = sum(billu, x);
	cout <<"the sum is " <<sumf<<endl;
return 0;
}
//we should be done by now
