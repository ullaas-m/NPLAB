#include<stdio.h>

int main()
{
	char str[60],temp;
	int i=0,j,ans=0;
	printf("Enter a string: ");
	scanf("%[^\n]%*c",str);
	while(str[i]!='\0'){
		
		j = (int)(str[i]);
		if(j>=48 && j<=57){
		ans+=sizeof(int)*8;
		}
		else{
		ans+=sizeof(char)*8;
		}
		i++;

	}
	printf("Bits : %d\n",ans);
	return 0;

}
