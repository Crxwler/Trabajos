#include <iostream>
using namespace std;

int c[500],p[500];

int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int g,n,x=0;
	cin>>g>>n;
	for (int i = 0; i < n; ++i)
	{
		cin>>c[i]>>p[i];
	}
	int i=0,flag=1;
	while(flag) {
	    
	    if(c[i]<g){
	    	x+=p[i];
	    	g-=c[i];
	    }else{
	    	flag=0;
	    }
	    i++;
	}
	cout<<x;
	return 0;
}
