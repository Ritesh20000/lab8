#include <iostream>
using namespace std;
//function
double* max(double*bill,int x){
	if(x == 0){
	return 0;}
	else{
	double *b;
	double max = *bill;
	double *ptr = bill;
	
	b = bill + 1;
	for(int i= 0; i<x; i++){
		if (*b > max){
		max = *b;
		ptr = b;
	}
	b++;
	}
	return ptr;
}
}


int main(){
	int x;    //ask user to define the array
	cout <<"enter the number of terms to be in array"<<endl;
	cin >>x;
	double billu[x];
	cout <<"enter the numbers now"<<endl;
	for(int n=0;n<x;n++)
	cin >>billu[n];
	double* d = max(billu, x);//call function
	
	cout <<"the maximum is "<<*d<<endl;
return 0;
}
