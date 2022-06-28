#include<stdio.h>
#include<stdlib.h>
#define MIN(x,y) (x>y)?y:x
int main()
{
    int orate,drop=0,cap,x,count=0,inp[10]={0},i=0,nsec,ch;
    printf("enter bucket size : \n");
    scanf("%d",&cap);
    printf("enter output rate : \n");
    scanf("%d",&orate);
    do{
        printf("enter number of packets coming aat second %d :",i+1);
        scanf("%d",&inp[i]);
        if(inp[i]>cap)
        {
            printf("bucket overflow \n");
            printf("Packet discarded \n");
            exit(0);
        }
        i++;
        printf("enter 1 to continue or 0 to quit \n");
        scanf("%d",&ch);
    }
    while(ch);
    nsec=i;
    printf("\n second \t received \t sent \t dropped \t remained \n");
    for(i=0;count || i<nsec;i++)
    {
        printf("%d",i+1);
        printf("\t \t %d\t",inp[i]);
        printf("\t%d\t",MIN((inp[i]+count),orate));
        if((x=inp[i]+count-orate)>0)
        {
            if(x>cap)
            {
                count=cap;
                drop=x-cap;
            }
            else
            {
count=x;
drop=0;
            }
        }
        else{
            drop=0;
            count=0;
            }
            printf(" \t%d\t \n",drop,count);
        }
        return 0;
            }