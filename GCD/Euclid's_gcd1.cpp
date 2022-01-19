// Time Complexity: O(log(min(a,b)));


#include<iostream>
#define ll long long int

using namespace std;


ll gcd(ll a,ll b)
{
	return (b?gcd(b,a%b):a);
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	ll a,b;
	cout<<"Enter the First Number"<<endl;
	cin>>a;
	cout<<"Enter the Second Number"<<endl;
	cin>>b;
	cout<<gcd(a,b)<<endl;
	return 0;
}
