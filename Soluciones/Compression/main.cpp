#include <iostream>

using namespace std;
#include <stdlib.h>
#include <stdio.h>
#include <algorithm>
#include <string>
/*
Implement a method to perform basic string compression using the counts of reapeted characters.
 For example the string aabcccccaaa would become a2b1c5a3. if the compressed string would not become smaller
  than the original string your method should return the original string.
   You can assume the string has only uppercase and lowercase letters (a-z).
 */
int main()
{
    string s="aabccccaaaabbbxxxddd";
    int aux=0;
    char s2=s[0];
    for(int i=0;i<s.length();i++){
        if(s[i]==s2)aux++;
        else{
            cout<<s2<<aux;
            s2=s[i];
            aux=0;i--;
        }
    }
    cout<<s2<<aux;
    return 0;
}
