#include <iostream>
#include <string>
#include <stdlib.h>
#include <stdio.h>
#include <algorithm>
using namespace std;
/*
Given a string, write a function to check if it is a permutation of a pelindrome. A pelindrome is.
 aword or phrase that is the same fowards andd backwards. A permutation is a rearrangement of letters.
  The plaindrome does not need to be limited to just dictionary words.
 */
int main()
{		
    string s;
    std::cin>>s;
    string s2=s;
    reverse(s2.begin(),s2.end());
    //std::cout<<"  "<<s<<"  "<<s2;
    if(!s.compare(s2))printf("Yes\n");
    else printf("No\n");
    return 0;
}
