#import <iostream>

using namespace std;


int main (void){
	
	float a, b;
	bool u;
	
	cout<<"inserire un valore a: "<< endl;
	cin>>a;
	cout<<"inserire un valore b: "<< endl;
	cin>>b;
	
	a= a+1;
	b= b-1;
	
	u= a==b;
	
	
	cout<<a<<" sara' uguale a: "<<b<<" ?"<<endl;
	cout<<u;
	
}
