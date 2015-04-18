#include <stdio.h>
#include <string.h>

int main(void){
    //int samplen;
    int i,j,k;
    int h,w;
    int area[7];
    char lug[51][51];
    //scanf("%d",&samplen);
    //load
    scanf("%d %d",&h,&w);
    for(i=0;i<h;i++){
        for(j=0;j<w;j++)lug[i][j]=0;
    }
    printf("startloading\n");
    for(i=0;i<h;i++)scanf("%s",&lug[i]);
    printf("loaded\n");
    //printf("Vertexcheck:%d\n",vertexcheck(lug[1][1]));
}