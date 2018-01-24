#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
long int comb(long int n) {
    return n*(n-1)/2;
}
long int func(long int n,long int k) {
    long int count1 = n/k;
    
    if(n<k)
        return 0;
    
    
    return comb(count1)*(k-(n%k)) + comb(count1+1)*(n%k);
}

int main() {
    long int n,k;
    scanf("%ld %ld",&n,&k);
    long int i,j,l,sum; 
    //for(i=1;i<=n;i++)
    //printf("%ld ",i%k);
    //printf("\n");
    printf("%ld",func(n,k));
    return 0;
}
