#include <stdio.h>

int cjudge(int pm,int pe,int pj){
    int c;//クラス
    if(pm == 100 || pe== 100 || pj== 100)c=0;
    else if(pm + pe >= 180)c=0;
    else if(pm + pe + pj >= 240)c=0;
    else if(pm + pe + pj >= 210)c=1;
    else if((pm + pe + pj >= 150) && (pm >= 80 || pe >= 80))c=1;
    else c=2;
    return c;
}

int main(void){
    int n,pm,pe,pj;
    while(scanf("%d",&n) != EOF && n != 0){
        for(int i=0;i < n;i++){
            scanf("%d %d %d",&pm,&pe,&pj);
            printf("%c\n",'A' + cjudge(pm,pe,pj));
        }
    }
    return 0;
}