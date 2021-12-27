
// CPU-Scheduling-Algorithm-In-C
// First Come First Served(FCFS) Scheduling Algorithm(Non Pre-emptive)

#include<stdio.h>
#include<malloc.h>

void main() 
{
     int i,j=1, n, *bt, *wt, *tat,*at,bt_n;
    float avgtat, avgwt;
    printf("\n Enter the number of processes : ");
    scanf("%d", &n);

    bt  = (int*)malloc(n*sizeof(int)); //Burst Time
    wt  = (int*)malloc(n*sizeof(int)); //Waiting Time
    tat = (int*)malloc(n*sizeof(int)); //Turnaround Time
    at  = (int*)malloc(n*sizeof(int)); //Arrival time
    
    printf("\n Enter the Arrival time for each process \n");
	for(i=0; i<n; i++)
	{
	    printf(" Arrival time for P%d : ", i);
        scanf("%d", &at[i]);
	}
	
    printf("\n Enter the burst time for each process \n");
    for(i=0; i<n; i++)
	{
        printf(" Burst time for P%d : ", i);
        scanf("%d", &bt[i]);
	}

    wt[0] = 0;
    tat[0] = bt[0];
    avgwt = wt[0];
    avgtat = tat[0];
	bt_n=bt[0];
    for(i=1; i<n; i++)
    {
        wt[i] = (bt_n)-at[i]+at[0];  //waiting time[p] = waiting time[p-1] + Burst Time[p-1]
        tat[i] = wt[i] + bt[i];           //Turnaround Time = Waiting Time + Burst Time
              
        bt_n+=bt[i];
        
        avgwt += wt[i];
        avgtat += tat[i];
    }

 
    avgwt = avgwt/n;
    avgtat = avgtat/n;

    printf("\n PROCESS \t BURST TIME \t WAITING TIME \t TURNAROUND TIME \n");
    printf("____________________________________________________________\n");
    for(i=0; i<n; i++)
    {
        printf(" P%d \t\t %d \t\t %d \t\t %d \n", i, bt[i], wt[i], tat[i]);
    }

    printf("\n Average Waiting Time = %f \n Average Turnaround Time = %f \n", avgwt, avgtat);

    printf("\n \tGAANT CHART \n");
    printf("__________________________\n");
    for(i=0; i<n; i++)
    {
        printf(" %d\t|| P%d ||\t%d\n", wt[i], i, tat[i]);
    }
	
	
}
