#include <stdio.h>


int max(int x , int y) 
{
    if(x>y)
    return x;
    else
    return y;
} 
   int max_of_four(int a, int b, int c, int d)
   {
   return max(max(a,b) , max(c,d));
    }
    int main()
    {
        int a, b, c, d;
        scanf("%d %d %d %d", &a , &b, &c, &d);
        printf("%d" ,max_of_four(a ,b,c,d));
        
    
    return 0;
}
