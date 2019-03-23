
void delay(volatile int d)
{
		while(d--);	
}

int led_on(int which)
{
		unsigned int *pGPFCON = (unsigned int *)0x56000050;
		unsigned int *pGPFDAT = (unsigned int *)0x56000054;
		
		if ( which == 4 )
		{
				/* set GPF4 is output */
				*pGPFCON = 0x100;
		}
		else if(which == 5)
		{
				/* set GPF4 is output */
				*pGPFCON = 0x400;	
		}
		
		/* set GPF data is low */
		*pGPFDAT = 0;
		
		return 0;	
}

