#include<bits/stdc++.h>
using namespace std;
int calculateGcd(int a,int b)
{
	if(b==0)
	return a;
	return calculateGcd(b,a%b);
	
}
int main(void)
{

	cout<<"Enter two number\n";
	int a,b;
	cin>>a>>b;
	//as we know that lcm=(a*b)/gcd(a,b);
	// so i apply the same
	int gcd=calculateGcd(a,b);
	int lcm=(a*b)/gcd;
	cout<<lcm;
	
}
