#include <iostream>
using namespace std;
#include <algorithm>

int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    int n,x,x2,x3=0,i;
	cin>>n;
	int a[n];
	cin>>a[0];
	int flag=1;
	for (i = 1; i < n; ++i)
	{
		cin>>a[i];
		if(a[i-1]<a[i] ){

			if(flag){
			x=a[i-1]; flag=0;}
			
		}else{

			if(!flag){
				flag=1;
				x2=a[i-1]-x;
					x3=max(x3,x2);
			}
		}

	}
	if(!flag);
			x3=max(x3,a[i-1]-x);

	cout<<x3;
	return 0;
}
