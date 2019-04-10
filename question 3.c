#include<stdio.h>
#include<conio.h>

int main()
{
  int time,bt[10],at[10],sum_bt=0,smallest,rem,n,i,rt[10];//declaring the varialbe
  int sumt=0,sumw=0;//declaring the varialbe
  printf("\nno of processes : ");//will ask the no. of processes
  scanf("%d",&n);//take the input of processes
  rem=n;
  for(i=0;i<n;i++)//ask the user to enter the details for each details
  {
   		printf("\nArrival time for process P%d : ",i+1);//ask to enter arrival time
   		scanf("%d",&at[i]);//take the input for arrival time
    	printf("\nBurst time for process P%d : ",i+1);//ask to enter burst time
    	scanf("%d",&bt[i]);//take the input for arrival time
		rt[i]=bt[i];
   
  }
  for(i=0;i<n;i++)//checking the non zero condition of program
  {
    if(at[i]==0)
  	{
  		printf("\nerror"); 	
  		printf("\narival time cannot be 0");
  		exit(0);//exit the process if there is any process starting with 0
  }
  
  
  rt[9]=bt[9]=9999; //giving the opposite condition as highest        
  for(time=0;rem!=0;time++)
  {
    smallest=9;
    for(i=0;i<n;i++)
    {
      if(at[i]<=time && rt[i]>0 && rt[i]<rt[smallest])
        smallest=i;
    }
rt[smallest]--;
if(rt[smallest]==0)
{
rem--;
    printf("P[%d]\t|\t%d\t|\t%d\n",smallest+1,time+1-bt[smallest]-at[smallest],time+1-at[smallest]);
    sumt+=time+1-bt[smallest]-at[smallest]; 
    sumw+=time+1-at[smallest];
    
   
  }}
  printf("\n\n average turnaround time = %f",sumw*1.0/n);//integer convertion to float and giving value in decimals
  printf("\n\n average waiting time = %f",sumt*1.0/n);
  return 0;
}}
