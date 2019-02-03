#include <iostream>

using namespace std;
#include <stdlib.h>
#include <stdio.h>
#include <algorithm>
#include <string>
/*
Assume you have a method is Substring which checks if one word is a substring of another.
 Given two strings, s1, and s2, write code to check if s2 is a rotation of s1 using only
  one call to isSubstring (e.g., "waterbottle" is a rotation of "erbottlewat")
 */
bool isSubstring(string s1,string s2){
    sort(s1.begin(),s1.end());
	sort(s2.begin(),s2.end());
	for(int i=0;i<s1.length();i++){
	    if(s1[i]!=s2[i]){return false;}
	}
	return true;
}

int main()
{
    string s1,s2;
	//int flag=1;
	//fflush( stdin );
	cin>>s1>>s2;
	if(isSubstring(s1,s2))printf("si");
	else printf("no");
	return 0;
}
