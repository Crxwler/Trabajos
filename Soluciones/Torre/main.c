#include <stdio.h>
#include <stdlib.h>

long long int torre(long long int n){
if(n==0) return 0;
else if(n==1) return 1;
else return torre(n-1)+((torre(n-1)-torre(n-2))*2);
}
int main()
{
    long long int n;
    scanf("%lld",&n);
    printf("%i",torre(n));
    return 0;
}
