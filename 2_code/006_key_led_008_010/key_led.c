#include "s3c2440_soc.h"

int main(void)
{
	int val1 = 0,val2 = 0;

	/* ����GPFCON��GPF4/5/6����Ϊ������� */
	GPFCON &= ~((3<<8) | (3<<10) | (3<<12) );
	GPFCON |= ( (1<<8) | (1<<10) | (1<<12) );

	/* ������������Ϊ��������
	 * GPF0(S2),GPF2(S3),GPG3(S4)
	*/
	GPFCON &= ~((3<<0) | (3<<4));  /* gpf0,2 */
	GPGCON &= ~((3<<6));  /* gpg3 */

	/* ѭ����� */
	while(1)
	{
		val1 = GPFDAT;
		val2 = GPGDAT;

		if( val1 & (1<<0) )  /* s2 */
		{
			/*�ɿ�*/
			GPFDAT |= (1<<6);
		}
		else
		{
			/* ���� */
			GPFDAT &= ~(1<<6);
		}

	if( val1 & (1<<2) )  /* s3 */
	{
		/*�ɿ�*/
		GPFDAT |= (1<<5);
	}
	else
	{
		/* ���� */
		GPFDAT &= ~(1<<5);
	}


	if( val2 & (1<<3) )  /* s4 */
	{
		/*�ɿ�*/
		GPFDAT |= (1<<4);
	}
	else
	{
		/* ���� */
		GPFDAT &= ~(1<<4);
	}

	
	}
	
}



