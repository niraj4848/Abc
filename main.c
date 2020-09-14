#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arg1, arg2, add, sub, mul, quo, rem ;
    //  float arg3, arg4;
    printf( "Enter two integer numbers : " );
    scanf( "%d%d", &arg1, &arg2 );

    /* Perform Addition, Subtraction, Multiplication & Division */
    __asm__ ( "addl %%ebx, %%eax;" : "=a" (add) : "a" (arg1) , "b" (arg2) );
    printf( "%d + %d = %d\n", arg1, arg2, add );

    __asm__ ( "subl %%ebx, %%eax;" : "=a" (sub) : "a" (arg1) , "b" (arg2) );
    printf( "%d - %d = %d\n", arg1, arg2, sub );

    __asm__ ( "imull %%ebx, %%eax;" : "=a" (mul) : "a" (arg1) , "b" (arg2) );
    printf( "%d * %d = %d\n", arg1, arg2, mul );

 //   printf( "Enter two float numbers : " );
  //  scanf( "%d%d", &arg3, &arg4 );

/*   __asm__ ( "fld %2;"
              "fld %1;"
              "fdiv;"
              "fstp %0;" : "=g" (div) : "g" (arg1), "g" (arg2) );
    printf( "%f / %f = %f\n", arg3, arg4, quo );
    printf( "%f %% %f= %f\n", arg3, arg4, rem );
  */  return 0;
}
