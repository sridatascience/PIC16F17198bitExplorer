/* COMPILER DIRECTIVES FOR CHIP CONFIGURATION BITS*/
#include<xc.h>
#pragma config LVP = OFF
#pragma config WDTE = OFF        // WDT operating mode (WDT enabled regardless of sleep; SWDTEN is ignored)



void delayzz(void) 
{	int i, j;
	for(i=0;i<5000;i++)
     {
	for(j=0;j<2;j++) 

             {       /*  Timer */   }}}

void main(void) 
{
	TRISB = 0xF0 ; // PORT B Setting: Set all the pins in port B to Output. 
  while(1)    
		{
                	
		LATBbits.LATB0 = 1;   // RB-0 to High   
		LATBbits.LATB1 = 1;   // RB-1 to High 

		delayzz();
		
		LATBbits.LATB0 = 0;    // RB-0 to LOW
		LATBbits.LATB1 = 0;    // RB-1 to LOW
        
		delayzz();
	     }
}
/* THE END */