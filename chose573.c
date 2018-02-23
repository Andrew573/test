#include "chose573.h"

void Chose(uchar n)
{
	P2 &= 0x1f;
	if((n>3)&&(n<8))
		P2 |= (n<<5);
}

void Ch(uchar mode,uchar dat)
{
	Chose(mode);
	P0 = dat;
	Chose(0);
}

void Close()
{
	Ch(4,0xff);
	Ch(5,0);
}