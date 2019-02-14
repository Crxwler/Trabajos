#include <iostream>
using namespace std;
#include <algorithm>

string a[100],a2[100];
bool check(string pal,int n){
	int x=0;
	for (int i = 0; i < n; ++i)
	{
		if(pal==a2[i])return true;
	}
	return false;
}
void out(string alfa){
	int n=alfa.size()/2;
	
	for (int i = n; i < alfa.size(); ++i)
	{
		cout<<alfa[i];
	}
	for (int j = n-1; j >= 0; --j)
	{
		cout<<alfa[j];
	}
}
int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n,aux=0,pos=0,flag=0;
	string pal;
	cin>>n;
	for (int i = 0; i < n; ++i){
		cin>>a[i];
		sort(a[i].begin(),a[i].end());
	}
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			if(i==j) continue;
			//if(check(pal,aux)==0)continue;
			if(a[i]==a[j]){
				//if(a[i]==pal)aux--;
				pal=a[i];
				a2[aux]=pal;
				aux++;
			}
		}
	}
	//cout<<aux;
	if(aux==1){
		out(pal);
		return 0;
	}
	if(aux==0){
		cout<<"!";
		return 0;
	}
	if(aux>1){
		cout<<"?";
		return 0;
	}
	return 0;
}
