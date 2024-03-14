#include<stdio.h>
#include<string.h>
int main(){
	
	
	char ch[300];
	
	scanf("%s",&ch);

	FILE* ptr;
	ptr=fopen("C:/Users/Vaibhav/Desktop/c++-Notes/file_new.txt","a");
	
	
	fputs(ch,ptr);
	fclose(ptr);
	printf("done");
	return 0; 
}

