#include <iostream>
using namespace std;

int n,a[100];

long int peter(int n){

	int uno=a[0],x=0;
	for (int i = 1; i < n; ++i)
	{
		int sum=0;
		if(uno==a[i]){
			x++;a[i]+=1;
		}else if(uno>a[i]){
			sum=(uno-a[i]) +1;
			a[i]+=sum;
		}
		x+=sum;
		uno=a[i];
	}
	return x;
}
int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n,aux=0;
	cin>>n;
	for (int i = 0; i < n; ++i)
		cin>>a[i];

	cout<<peter(n);
	return 0;
}
