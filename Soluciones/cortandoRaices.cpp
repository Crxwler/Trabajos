#include <iostream>
using namespace std;

long long int n;
long long int a[10000000];

long long int corte(long long int x){
	long long int m=0;
	for (long long int i = 0; i < n; ++i)
	{
	    if(a[i]-x<=0)continue;
	    else
		m=m+(a[i]-x);
	}
	return m;
}
int main(int argc, char const *argv[])
{
	long long int bus;
	//ios_base::sync_with_stdio(false);
	//cin.tie(NULL);
	cin>>n>>bus;
	long long int ma=0;
	for (long int i = 0; i < n; ++i){
        int x;
        cin>>x;
        //cout<<i<<" ";
		a[i]=x;ma+=x;
	}
	//cout<<"IN\n";
	long long int x=0,in=0,fin=ma,co=0;
	while(x<ma){
		x=(in+fin)/2;
		co=corte(x);
		if(co==bus){cout<<x;return x;}
		if(co<bus)fin=x-1;
		else in=x+1;
	}
	return 0;
}
