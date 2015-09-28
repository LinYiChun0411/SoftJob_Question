#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int atoi(char *s){
	int sum=0;
	for(int i=0;s[i]!='\0';i++){
		sum = sum*10 + (s[i]-'0');
		
	}
	
	return sum;
}


char* reverse(char *str)
{
	for(int i = 0 ,j=strlen(str)-1 ; i<j ; i++ , j--){
		char c=str[i];
		str[i]=str[j];
		str[j]=c;	
	}
	return str;
}


char* itoa(int num){

    char *s=(char*)malloc(sizeof(char)*50);
    int i=0;
    while(num!=0){
    	
    	s[i++]= num%10+'0';
    	num=num/10;
	}
    s[i]='\0';

	return reverse(s);
}





int main() {
	
	char s[]= "1234" ;
	
	int i=atoi(s);// string to int 
	printf("%d\n",i);
	
	
	char *s2=itoa(i);//int to string
	printf("%s\n",s2);
	
	system("pause");
	return 0;
}
