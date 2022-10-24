#include<bits/stdc++.h>
using namespace std;
int fib(int n)
{
	if(n == 0 || n == 1)
		return n;

	return fib(n-1)+fib(n-2);
}
int main()
{
	int n;
	cin>>n;
	cout<<fib(n);
}

/*
Time Complexity::

No of recursion calls , for every n we are calling 2 guys. It is near to exponential , O(2^n).

*/