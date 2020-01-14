#include "stdio.h"
#include "conio.h"
int main()
{
int i=0,c=0;
char bdata[100];
printf("Enter the bit stuffed data: ");
scanf("%s",bdata);
printf("\n Your  Data is \n");

for(i=0;bdata[i]; i++)
{
    if(bdata[i]=='1')
        c++;
    else
        c=0;
printf("%c",bdata[i]);
if(c==5)
    {
     if(bdata[i+1]='0')
        {
          for(int j=(i+1);j<100;j++)
          {
              bdata[j]=bdata[j+1];
              c=0;
          }
          
        }
    }
}
return 1;
}
