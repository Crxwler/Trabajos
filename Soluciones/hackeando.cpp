#include <iostream>
#include <algorithm>
#include <string>
#include <stdio.h>
#include <stdlib.h>
std::string a[100],a2[100];
using namespace std;

int main(int argc, char const *argv[])
{
	int n,flag=0;
	scanf("%i",&n);
	std::string pal,out="";
	for (int i = 0; i < n; ++i)
	{
		std::cin>>pal;
		std::string pal2=pal;
		reverse(pal2.begin(),pal2.end());
		//printf("%s %s\n",pal,pal2 );
		if(!pal2.compare(pal)){out=pal;flag=1;}
		else{
			a[i]=pal;
			a2[i]=pal2;
		}
	}
	if(flag)printf("%i %c\n",out.length(),out[out.length()/2]);
	else{
		
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < n; ++j)
			{
				if (a[i]==a2[j]){
					out=a2[j];
					printf("%i %c\n",out.length(),out[out.length()/2]);
					return 0;
				}
			}
		}
	}
	return 0;
}