#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void receiver(int frame , int len)
{
int i,j,counter,y;
int res[100];
y=len-8;
j=0;
for(i=0;i<y;i++)
{
if frame(frame[i]==0)
{
if counter(counter==5)
{
j++;
counter=0;
}
else{
res[j]=frame[i];
j++;
counter++;
}}
printf("received frame is : \n");
for(i=0;i<j;i++)
printf("%d",res[i]);
printf("\n");
}

void sender()
{
int msg[100],frame[100],fl=0,i,j=8;
int count,add=0;
printf("enter the no of bits\n");
scanf("%d",&n);
printf("enter the msg for bits\n");
for(i=0;i<n;i++)
scanf("&d",&msg[i]);
frame[0]=0;
frame[1]=0;
frame[2]=1;
frame[3]=1;
frame[4]=1;
frame[5]=1;
frame[6]=1;
frame[7]=1;

i=0;
count=1;
while(i<n)
{
if(msg[i]==1)
{
frame[j]=msg[i];
for(k=i+1;msg[k]==1&&k,n && count<5;k++)
{
j++;
frame[j]==0;
add+=add;
i=k;
else
{
frame[j]=msg[i];
}
i++;
j++;
printf("after stuffing \n");
for(i=0;i<j;i++)
printf("%d",framre[i]);
}
void main()
{
sender();}

