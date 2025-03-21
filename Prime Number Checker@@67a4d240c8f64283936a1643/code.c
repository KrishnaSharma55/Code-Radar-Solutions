#include <stdio.h>
int main(){
    int t,i=0;
    int num;
    scanf("%d",&t);
    while(i<t){
        scanf("%d",&num);
        printf("%d\n",isPrime(num));
        i++;
    }
    return 0;
}
int isPrime(int num){
    if(num==1){
        return 0;
        }
    if(num==2){
        return 1;
    }
    for(int i =2; i<(num/2); i++){
        if(num%i==0){
            return 0;
        }
        else{
            return 1;
        }
    }
}
