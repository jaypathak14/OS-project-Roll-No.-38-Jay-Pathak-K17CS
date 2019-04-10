#include<stdio.h>
#include<conio.h>

int main()
{
  int time,bt[10],at[10],sum_bt=0,smallest,rem,n,i,rt[10];
  int sumt=0,sumw=0;
  printf("no of processes : ");
  scanf("%d",&n);rem=n;
  for(i=0;i<n;i++)
  {
    printf("arrival time for process P%d : ",i+1);
    scanf("%d",&at[i]);
    printf("burst time for process P%d : ",i+1);
    scanf("%d",&bt[i]);rt[i]=bt[i];
   
  }
  rt[9]=bt[9]=9999;
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
  printf("\n\n average waiting time = %f",sumw*1.0/n);
  printf("\n\n average turnaround time = %f",sumt*1.0/n);
  return 0;
}
