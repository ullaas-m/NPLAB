#include<stdio.h>
#include<string.h>
int main()
{
	char str1[60],str2[60];
	int l1,l2,i,j;
	printf("Enter bit string: ");
	scanf("%[^\n]%*c",str1);
	printf("Enter bit string pattern to be searched: ");
	scanf("%[^\n]%*c",str2);
	l1 = strlen(str1);
	l2 = strlen(str2);
	if(l2>l1){
		printf("Pattern size is greater\n");
		return 0;
	}
	for(i=0;i<l1;i++){
		if(str1[i]==str2[0]){
			for(j=0;j<l2;j++){
				if(str2[j]!=str1[i+j])
				break;			
			}
			if(j==l2){
				printf("Found at index %d",i);			
			}
		}
	}
	return 0;
}

