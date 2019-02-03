#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <algorithm>
#include <string>
using namespace std;

/*
There are three types of edits that can be performed on strings:
insert a character, remove a character, or replace a character.
Given two strings, write a function to check if they are one edit (or zero edits) away.

Example:
pale, ple -> true
pales, pale -> true
pale, bale -> true
pale, bake -> false
 */
int main()
{

    string s1,s2;
    std::cin>>s1;
    //fflush(stdin);
    std::cin>>s2;
    int aux=0;
    int n1=s1.length();
    int n2=s2.length();
    //si por la dimension es mayor a 2 no son.
    if (n1-n2 >1 || n2-n1>1)
    {
    	printf("false\n");return 0;
    }
    int i=0,j=0;
    while(i<n1&&j<n2){

    	if(s1[i]!=s2[i]){
    		//aux++;
    		if(n1<n2)i++;
    		else if(n1>n2)j++;
    		else{
    			i++;
    			j++;
    		}
    		aux++;
    	}
    	else{
    	i++;j++;
    	}

    }
    
    if(i<n1||j<n2)aux++;
    if(aux==1){printf("true\n");}
    else printf("false\n");
    return 0;
}
