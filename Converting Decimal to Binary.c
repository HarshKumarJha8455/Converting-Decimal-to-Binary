// Converting Decimal to Binary
#include<stdio.h>

int main(){
    long long int n;
    printf("Enter The Decimal Number: ");
    scanf("%lld",&n);
    int rem;
    int a[100];
    int i=0;
    if(n==0)
        printf("%d",0);
    else
    {
    while(n!=0){
        rem=n%2;
        n=n/2;
        a[i]=rem;
        i++;
    }
    
    for(int j=i-1;j>=0;j--){
        
        printf("%d",a[j]);
    }
    }
    
    return 0;
}