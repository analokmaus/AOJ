#include <stdio.h>

int leapyear(int y){
    if((y % 4 == 0 && y % 100 != 0) || y % 400 == 0)return 1;
        else return 0;
}

int main(void){
    int a,b,count,first=1;
    while(scanf("%d %d",&a,&b) != EOF && ( a != 0 || b != 0)){
        count=0;
        if(first == 0)printf("\n");
        for(int y = a;y <= b;y++){
            if(leapyear(y) == 1){
                printf("%d\n",y);
                count++;
            }
        }
        if(count == 0)printf("NA\n");
        first=0;
    }
    return 0;
}