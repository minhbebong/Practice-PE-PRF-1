#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main() {
  	system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	int size;
	scanf("%d",&size);
 
  
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
	for(int i=0;i<size;i++)
	{
		for(int j=0;j<i;j++)
		{
			printf(" ");
		}
		for(int j=size-i-1;j>=0;j--)
		{
			printf("*");
		}
		printf("\n");
	}







  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
