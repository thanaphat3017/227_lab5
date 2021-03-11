#include <stdio.h>

int main()
{
  int order_number ,i=1,j,a[3]={2,3,5},x,z=1;

  scanf("%d",&order_number);
  int ugly_number[order_number];
  ugly_number[0]=1;
  for(i=2;z<order_number;i++)
  { x=i;

      for(j=0;j<3;)
      {
            if(x%a[j]==0)
            {
                x/=a[j];
            }
            else
                j++;


      }if(x==1)
            {
                ugly_number[z]=i;
                z++;
            }
  }

    printf("%d",ugly_number[order_number-1]);





}

