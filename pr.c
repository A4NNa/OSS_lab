#include<stdio.h>
#define MAX 5
#define Infinite 9999
int i,j,c,d,temp;
int bt[MAX];
int pr[MAX];
int prSorted[MAX];
int wt[MAX];
int min=Infinite;
int sum;
float avgWT;
void main(){

//.................Inputs....................

	printf("Enter the Burst Time For\n");
	    for(i=0;i<MAX;i++)
	    {   
		     printf("Process %d :",i+1);
             scanf("%d",&bt[i]);
             printf("\n");
	    }
	
             printf("Enter Priority for\n");

        for(i=0;i<MAX;i++)
	    {   
		     printf("Process %d :",i+1);
             scanf("%d",&pr[i]);
             printf("\n");
	    }
	

//...................Sorting......................        



                
	  for (c = 0 ; c < MAX - 1; c++)
  {
    for (d = 0 ; d < MAX - c - 1; d++)
    {
      if (pr[d] > pr[d+1])
      {
        temp  = pr[d];
        pr[d]   = pr[d+1];
        pr[d+1] = temp;
            temp = bt[d];
            bt[d]   = bt[d+1];
            bt[d+1] = temp;
      }
    }
  }

//................Sorted........................
for (c = 0; c < MAX; c++)
 printf("priority :%d\tBT:%d\n", pr[c],bt[c]);
//................Sorted........................
wt[0] = 0;
for(i=1;i<MAX;i++)
wt[i] = wt[i-1] + bt[i-1];

sum = 0;
for(i=0;i<MAX;i++)
sum = sum + wt[i];

avgWT = sum/MAX;

//printf("P.No.\t B.T.\tPr.\tWT")

printf("\nAvg Waiting Time %f\n",avgWT);



}
