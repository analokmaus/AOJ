#include <stdio.h>

int main(void){
    int n,m,a;
    int hl[1000],hls[1000],hlg[1000];
    int pl,ph;
    int end[3];
    int i,j,tmp;
    while(1){
        scanf("%d %d %d",&n,&m,&a);
        pl=a;
        for(i=0;i<m;i++)scanf("%d %d %d",&hl[i],&hls[i],&hlg[i]);
        for(ph=1000;ph>=0;ph--){
            for(j=0;j<m;j++){
                if(ph==hl[j] && pl==hls[j]){
                    pl=hlg[j];
                    ph--;
                    printf("h=%d l=%d\n",ph,pl);
                }
                if(ph==hl[j] && pl==hlg[j]){
                    pl=hls[j];
                    ph--;
                    printf("h=%d l=%d\n",ph,pl);
                }
            }
        }
        scanf("%d %d %d",&end[0],&end[1],&end[2]);
        if(end[0]==0 && end[1]==0 && end[2]==0)break;
    }
    printf("%d\n",pl);
    return 0;
}