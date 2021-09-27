#import <iostream>

using namespace std;


int main (void){
	
	float a, b;
	bool u;
	
	cout<<"give to A a value: "<< endl;
	cin>>a;
	cout<<"give to B a value: "<< endl;
	cin>>b;
	
	a= a+1;
	b= b-1;
	
	u= a==b;
	
	
	cout<<"Will "<<a<<" have the same value of: "<<b<<" ?"<<endl;
	cout<<u;
	
}
//made by Filippo Lunardi 
