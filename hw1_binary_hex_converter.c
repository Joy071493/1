#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main(){
	int num, num_for_hex, bin=0, reminder=0, place=1;
	printf ("Please enter a decimal number(between 0~255)\n");
	scanf ("%d", &num);
	num_for_hex = num; //�קKnum�b�G�i��ɱNnum�л\ 
	if(0 <= num && num <= 255){
		printf("The binary of %d is ", num);
		while(num){
			reminder=num%2;
			num=num/2;
			bin=bin+(reminder*place);
			place=place*10;
		}
		printf("%d",bin);
		
		char arr[] = "0123456789ABCDEF";
    	char hex[3]; //0~255 �̦h�u��2�Ӧ�m 
    	int i = 0 , j = 0 ;
    	printf("\nThe hexadecimal of %d is ", num_for_hex);
    	while (num_for_hex){
    		hex[i++] = arr[num_for_hex % 16];   
    		num_for_hex = num_for_hex / 16;
    	}
    	for (j = i - 1; j >= 0; --j){  //hex[i]�O���۰�16���l�ƱƤU�ӡA��16�i��n�f�۾l�ƱơA�]���]�p hex[j]
        	printf("%c", hex[j]);
        }
    	printf("\n");	
	}
	else{
		printf ("The number isn't between 0~255.");
		return 0;
	}
		//Hexadecimal
	
	return 0;
}
