#include<stdio.h>
#include<stdlib.h>

int main()
{
     int RQ[100],i,j,n,TotalHeadMovement=0, initial,size,move;
     printf("enter the number of requets \n");
     scanf("%d",&n);
     printf("enter the request sequence\n");
     for(i=0;i<n;i++)
      scanf("%d",&RQ[i]);
      printf("initial head position\n");
      scanf("%d", &initial);
      printf("enter total disk size\n");
      scanf("%d",&size);
      printf("enter the head movement dir3ection for high 1 and for low 0\n");
      scanf("%d", &move);
      
      for(i=0;i<n;i++)
{
    for(j=0;j<n-i-1;)
}
