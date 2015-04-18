#include <stdio.h>
#include <string.h>

int main(void){
    int n;
    int i,j,k;
    int valid;
    int overlap[10][10];
    char input[10][101],tmp[2][11],output[101];
    while(scanf("%d",&n)!=EOF && n!=0){
        for(i=0;i<n;i++){
            scanf("%s",input[i]);
            //detect partial string
            for(j=0;j<i;j++){
                if(strcmp(input[j],"")!=0){
                    if(strstr(input[j],input[i])!=NULL)strcpy(input[i],"");
                    if(strstr(input[i],input[j])!=NULL)strcpy(input[j],input[i]);
                    if(strcmp(input[i],input[j])==0){
                        strcpy(input[j],input[i]);
                        strcpy(input[i],"");
                    }
                }
                if(strcmp(input[j],"")==0){
                    strcpy(input[j],input[i]);
                    strcpy(input[i],"");
                }

            }
        }
        //check valid input
        for(i=0;i<n;i++)if(strcmp(input[i],"")!=0)valid++;
        //full search
        for(i=0;i<valid;i++){
            strcpy(tmp[0],"");
            strcpy(tmp[1],"");
            for(j=0;j<strlen(input[i]);j++){
                strncpy(tmp[0],input[i],j+1);
                tmp[0][j+1]='\0';
                //printf("tmp[0]:%s\n",tmp[0]);
                for(k=0;k<i;k++){
                    strncpy(tmp[1],input[k]+(strlen(input[k])-j-1),j+1);
                    tmp[1][j+1]='\0';
                    if(strcmp(tmp[0],tmp[1])==0){
                        strcpy(input[k]+(strlen(input[k])-j-1),input[i]);
                        //printf("match:%s\n",tmp[1]);
                        //printf("printf:%s\n",input[k]);
                    }
                    //printf("tmp[1]:%s\n",tmp[1]);
                }
            }
        }
        //debug
        printf("[DEBUG]\n");
        for(i=0;i<n;i++){
            printf("input[%d]:%s\n",i,input[i]);
        }
        //answer
        //printf("[ANS]%s\n",input[0]);
    }
    return 0;
}