
#include "../include/hello.h"

/*
int hello()
{
	kprintf("Hello World AGAIN%d\n",4%3);
	return 0;
}

char decToHex(int arg1)
{
	char hex_arr[4];
	int loc = 2;
	
	while (1)
	{	
		if (arg1<16)
		{	
		   hex_arr[loc]=arg1;
		   break;
		}
		else
		{
		  hex_arr[loc]=arg1%16;
		  arg1=arg1/16;
		  loc--;
		}
	}
	int temp[3] = 0;
	//temp[0] = first digits of hexadecimal value
	//temp[1] = second digits of hexadecimal value
	//temp[2] = last digits of hexadecimal value

	while (arg1 < 16)
}
*/

int addHelper(int arg1, int arg2)
{
	int result = -1;
	//default = -1 for debugging purpose

	arg2 = 1 << arg2;
	//2 to the power of 'arg2'

	result = arg1 + arg2;
	return result;
}

int subtractHelper(int arg1, int arg2)
{
	int result = -1;
	//default = -1 for debugging purpose

	arg2 = 1 << arg2;
	//2 to the power of 'arg2'

	result = arg1 - arg2;
	return result;
}


int hello()
{
	int dValue=0;
	//example: flag #3 on.
	
	dValue = addHelper(dValue, 3);
	
	//example: flag #4 on.
	dValue = addHelper(dValue, 4);

	//example: flag #3 off.
	dValue = subtractHelper(dValue, 3);

	kprintf("dValue in decimal: %d\n", dValue);
	kprintf("testing Left shift: %d\n", 1 << 1);

	char *str;
	str = (char *) kmalloc(15);


	return 0;
}

