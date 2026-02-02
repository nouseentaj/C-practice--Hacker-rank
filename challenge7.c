#include <stdio.h>

 main()
{
    int n,k,a,b,and , or,xor,max_and,max_or,max_xor;
    scanf("%d %d",&n,&k);
     max_and = 0;
     max_or = 0;
     max_xor = 0;
    for( a = 1; a<=n;a++){
    for ( b =a+1;b<=n;b++){
    and = a & b;
     or = a | b;
    xor = a^b;
    if(and<k && and> max_and)
    {
    max_and = and;
    }
    if(or<k && or>max_or)
    {
        max_or=or;
    }
        if(xor<k && xor> max_xor )
      {  
        max_xor = xor;
      }
}
}
printf("%d\n",max_and);
printf("%d\n",max_or);
printf("%d\n",max_xor);
return 0;
    
}
