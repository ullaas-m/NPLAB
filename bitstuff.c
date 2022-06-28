#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void sender();
void receiver(int *message,int l2);

int main()
{
	sender();
	return 0;
}

void sender()
{
	int i,j,n,count=0,onecounter=0,l1,zero=0;
	int msg[50];
	int result[50];
	
	printf("Enter the number of bits to be sent: ");
	scanf("%d",&n);
	printf("Enter the bits: ");
	for(i = 0;i<n;i++){
		scanf("%d",&msg[i]);
	}
	result[0]=0;
	result[1]=1;
	result[2]=1;
	result[3]=1;
	result[4]=1;
	result[5]=1;
	result[6]=1;
	result[7]=0;
	j=8;
	
	for(i=0;i<n;i++){
	
		if(count==5 && zero==1){
				result[j++] = 0;
				onecounter++;
				count=0;
			}
		if(msg[i]==0){
			result[j++] = msg[i];
			count = 0; 
			zero=1;
		}
		else{
			result[j++] = msg[i];
			count++;
		}
	}
	if(count==5){
		result[j++] = 0;
		onecounter++;
		count=0;
	}
	result[j++]=0;
	result[j++]=1;
	result[j++]=1;
	result[j++]=1;
	result[j++]=1;
	result[j++]=1;
	result[j++]=1;
	result[j++]=0;
	l1=16+n+onecounter;
	for(i=0;i<l1;i++){
		printf("%d",result[i]);
	}
}
