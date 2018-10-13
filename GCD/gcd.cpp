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
	int ans=calculateGcd(a,b);
	cout<<ans;
	
}
