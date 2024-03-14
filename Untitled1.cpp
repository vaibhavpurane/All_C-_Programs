#include<stdio.h>
void show()
{
	int *ptr;
	//sfdasdf

}
int main()
{
	show();
	float x=123;
	int i=888;
	char ch;
	int *ptr;
	void *iptr;
	iptr=&x;
	printf("size of void ptr= %d\n",sizeof(iptr));
	printf("%f",*(float*)iptr);
	
	iptr=&i;
	*(int*)iptr=555;
	printf("\n i=%d",i);
	printf("\nadd = %d",iptr);
	iptr=NULL;
	ptr=NULL;
	printf("\nadd = %d",iptr);
	return 0;
	
}
