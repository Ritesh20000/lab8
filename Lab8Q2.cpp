#include <iostream>
using namespace std;
//write function that will mean
float mean(int a[], int b){
    int s=0;
	for(int n=0;n<b;n++)
	s+=a[n];
	return s/b;
}
int max(int a[], int b){//for max
	return a[b-1];
}
int min(int a[], int b){//for min
	return a[0];
}
float medianf(int a[],int b){//for med
	if(b%2==0)
	return ((a[b/2-1]+a[b/2])/2);
	else
	return a[(b-1)/2];
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
	float meanf = mean(billu, x);
	for (int i=0;i<x-1;i++)    
        for (int l=0;l<x-i-1;l++)  
	if(billu[l]>billu[l+1]) {//this will arrange elements according to value
		billu[l]=billu[l]+billu[l+1];
		billu[l+1]=billu[l]-billu[l+1];
		billu[l]=billu[l]-billu[l+1];
	}
	int maxi = max(billu, x);
	int mini = min(billu, x);
	float median = medianf(billu, x);
	cout <<"the mean is"<<meanf<<endl;
	cout <<"the maximum is"<<maxi<<endl;
	cout <<"the minimum is"<<mini<<endl;
	cout <<"the median is"<<median<<endl;
	
return 0;
}
//we should be done by now
