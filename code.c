#include<reg51.h>
void main(void)
{
unsigned char mydata[]={0x25,0x62,0x3f,0x52,0xe8};
unsigned char chksum=0;
unsigned char x;
unsigned int i,j;
for(x=0;x<5;x++)
chksum=chksum+mydata[x];
if(chksum==0)
{
a:
P0=255;
for(i=0;i<=255;i++)
for(j=0;j<=2555;j++)
{}
P0=0;
for(i=0;i<=255;i++)
for(j=0;j<=2555;j++)
{}
goto a;
}
else
P0=0;
}
