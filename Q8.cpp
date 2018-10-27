#include <iostream>
using namespace std;
int myStrLen(char* x) 
{ //start as length 0
  int StrLen = 0;
  //inclrease charactercount till end is reached
  for (*x; x++; x != "\0"){
	StrLen++;
}
  return StrLen;
}
int main(){
	cout <<"enter the string of characters"<<endl;
	char a;
	cin >>a;
	
	char* x = &a;
	int y = myStrLen(x);
	cout <<"the length is "<<y<<endl;
return 0;
}
