#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string>
using namespace std;
/*
Implement an algorithm to determine if a string has all unique characters.
 What if you cannot use additional data structures?
 */

int main()
{
    string s;
    int flag=1;
    scanf("%s",&s);
    for(int i=0;i<s.length();i++){
        for(int j=i+1;j<s.length();j++){
            if(s[i]==s[j]){flag=0;break;}
        }
    }
    if(flag)printf("unicos");
    else printf("no unicos");
    return 0;
}
