#include <stdio.h>

int meiji[3]={1868,9,8};
int taisho[3]={1912,7,30};
int showa[3]={1926,12,25};
int heisei[3]={1989,1,8};

int cmp(int input[],int comp[]){//前後判定　inputがcompより前なら0 後なら1 配列の中身は後述
    if(input[0]*372 + input[1]*31 + input[2] < comp[0]*372 + comp[1]*31 + comp[2])return 0;
    else return 1;
    //すべての月を31日、1年を371日と理想化して比較

}

int main(void){
    int input[3];//[0]=year,[1]=month,[2]=day
    while(scanf("%d %d %d",&input[0],&input[1],&input[2]) != EOF){
        if(cmp(input,meiji) == 0)printf("pre-meiji\n");
        else if(cmp(input,taisho) == 0)printf("meiji %d %d %d\n",input[0]-meiji[0]+1,input[1],input[2]);
        else if(cmp(input,showa) == 0)printf("taisho %d %d %d\n",input[0]-taisho[0]+1,input[1],input[2]);
        else if(cmp(input,heisei) == 0)printf("showa %d %d %d\n",input[0]-showa[0]+1,input[1],input[2]);
        else printf("heisei %d %d %d\n",input[0]-heisei[0]+1,input[1],input[2]);
    }
    return 0;
    
}