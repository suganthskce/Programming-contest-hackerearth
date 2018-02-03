int main() {
    long int t;
    scanf("%ld",&t);
    while(t--) {
        long long int i,n,sum=0;
        scanf("%lld",&n);
        for(i=1;i<=sqrt(n);i++){
            if(n%i==0) {
                if(i&1)
                sum+=i;
                if(i!=(n/i)&&(n/i)&1)
                sum+=n/i;
            }
        }
        printf("%lld\n",sum);
    }
    
    return 0;
}
