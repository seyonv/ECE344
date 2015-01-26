 
#include "../include/hello.h"
/*
int hello()
{
        kkprintf("Hello World AGAIN%d\n",4%3);
        return 0;
}
*/
char int2char(int n)
{
        char c;
        if (n%16<10)
                c=n+48;
        else
	{
                c=n+55;
	}	
	kprintf("Value of Int2Char:%c\n", c);
        return c;
}
char *dectohex(int arg1, int* numstored)
{
        kprintf("entered function dec2hex\n");
        char *hex_arr = (char *) kmalloc(sizeof(char[3]));
        *numstored=1;
       
        int loc = 0;
       
        while (arg1>=16)
        {      
          //kprintf("**Current value of arg1 is %d \n",arg1);
     
      hex_arr[loc]=int2char(arg1%16);
         
          arg1=arg1/16;
          //kprintf("value of hex_arr[%d] is %c\n Value of arg1 is %d \n",loc,hex_arr[loc],arg1);                
          loc++;
          *numstored=*numstored+1;
        }
 
        hex_arr[loc]=int2char(arg1%16);
        //kprintf("value of hex_arr[%d] is %c\n Value of arg1 is %d \n",loc,hex_arr[loc],arg1);          
        //kprintf("value of hex_arr is %s \n",hex_arr);
        return hex_arr;
}
 
 

 
int hello(int* dValue,int num_val,int state)
{

	int dV2 = *dValue;  
	kprintf("VALUE OF dValue & num_val are: %d, %d\n", dV2, num_val);     
	 if (state==1)
              dV2+=num_val;
        else if (state==0)
              dV2-=num_val;
      	kprintf("New Value of DV2 is %d", dV2);

	//kprintf("AFter addition/subtraction VALUE OF dValue is: %d\n", dV2);

        /*int onflag=3;
        int offflag=3;
        int sizeoftest=sizeof(char[4]);
        */
        //representing length of number stored
        int numstored=0;
 
       
       
        //example: flag #3 on.
        char *hexval=(char *) kmalloc(sizeof(char[20]));
        hexval=dectohex(dV2,&numstored);
       
 
        //kprintf("\n Value of count is %d \n  ", numstored);
        char *final_s=(char *) kmalloc(sizeof(char[20]));
        final_s[0]='0';
        final_s[1]='X';
 	
	int i;
     
       
        //kprintf("\n");
       
        //kprintf("VALUE OF NUMSTORED IS %d \n",numstored);
       
 	kprintf("VALUE OF DVALUE %d \n", dV2);

        int j=0;
	
        for (i=numstored-1; i>=0; i--)
        {
                final_s[j+2]=hexval[i];
                j++;
        }
  
 
        /*
        for (int i=0; i<numstored; i++)
                kprintf("For value i=%d, hexval[i] it is %c \n",i,hexval[i]);
        */
        // kprintf("\n Final Output is: ");
        for (i=0; i<numstored+3; i++)
        {
                //kprintf("For value i=%d, it is %c \n",i,final_s[i]);
                kprintf("%c",final_s[i]);
        }
       
        kprintf("\n");
        //kprintf("converted from Dval=%d to hexval=%c \n",dValue,*hexval);
 
       
 
       
 
 
        return dV2;
}

