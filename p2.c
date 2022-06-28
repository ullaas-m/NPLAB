
#include<stdio.h>
#include<string.h>
int main()
{
	char str1[60],str2[60],str3[60];
	int i=0,l1,l2,d;
	printf("Enter bit string 1: ");
	scanf("%[^\n]%*c",str1);
	printf("Enter bit string 2: ");
	scanf("%[^\n]%*c",str2);
	l1 = strlen(str1);
	l2 = strlen(str2);
	//printf("%d",l1);
	if(l1<l2){
		str1[l1+d] = '\0';
		d = l2-l1;
		while(l1>0){
			str1[l1+d-1] = str1[l1-1];
			l1--;
		}
		while(d>0){
			str1[d-1] = '0';
			d--;
		}
	}
	if(l2<l1){
		d = l1-l2;
		str2[l2+d] = '\0';
		while(l2>0){
			str2[l2+d-1] = str2[l2-1];
			l2--;
		}
		while(d>0){
			str2[d-1] = '0';
			d--;
		}
	}
	while(str2[i]!='\0'){
		if(str1[i] == str2[i])
			str3[i] = '0';
		else
			str3[i]='1';
		i++;
	}
	str3[i]='\0';
	i=0;
	while(str3[i]!='\0'){
	printf("%c",str3[i]);
	i++;
	}
	return 0;
}


