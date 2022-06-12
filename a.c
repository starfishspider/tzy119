#include<stdio.h>
int main()
{float a[9]={9.8,12,45,67,23,19.8,2.55,45,37.5},max,min,s=0;
 int i;
 max=min=a[0];
 printf("数组中的数:\n");
 for(i=0;i<9;i++)
  {s+=a[i];
   if(max<a[i])max=a[i];
   if(min>a[i])min=a[i];
   printf("%g ",a[i]);
  }
 printf("\n最大值=%g\n最小值=%g\n平均值=%g\n",max,min,s/9.0); 
 return 0;
}
