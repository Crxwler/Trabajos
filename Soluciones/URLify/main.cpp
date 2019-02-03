#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string>
using namespace std;
/*
Write a method to replace all spaces in a string with '%20' you may assume that the string has 
sufficient space at the end to hold the addtiioal characters, and that you are given the true 
length of string. 
(Note: if implementing in Java, please use a character array so that you can perform this operation in place)
 */
char s2[10000];
int main()
{
    string s;
    getline(cin,s);
    string s2=s;
    string re="%20";
    for(int i=0;i<s.size();i++){
        if(s[i]==32){
        	//printf("%i %i \n",i,"%20");
            s.replace(i,1,re);
        }
    }
    cout<<s<<endl;
    
    while(s2.find(32) != -1){
    	s2.replace(s2.find(32),1,re);
    }
    cout<<s2;
    return 0;
}
