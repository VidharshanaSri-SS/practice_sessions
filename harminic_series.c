# include <stdio.h>
int main(){
    int a;
    float sum=0;
    scanf("%d",&a);
    for (int i=1;i<=a;i++){
        sum+=1.0/i;
    }
    printf("%.2f\n",sum);
    return 0;
}