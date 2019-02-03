#include <iostream>
using namespace std;
#include <stdlib.h>
#include <stdio.h>
#include <algorithm>
#include <string>
/**
 * [main description]
 * @return check_permutations: Given two strings, write a method to decide if one is a permutation of the other
 */
int main() {
	string s1,s2;
	int flag=1;
	//fflush( stdin );
	cin>>s1>>s2;
	sort(s1.begin(),s1.end());
	sort(s2.begin(),s2.end());
	for(int i=0;i<s1.length();i++){
	    if(s1[i]!=s2[i]){flag=0;break;}
	}
	if(flag)printf("si");
	else printf("no");
	return 0;
}
