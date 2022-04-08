
/* 
input 
2
3
4
5
6
56
12
34
23
45

*/

#include<stdio.h>
void main()
{
    int a1[5],a2[5],a3[5],a4[5];

    for (int i=0;i<5;i++)
    {
       
        scanf("%d",&a1[i]);
    }

    for(int i=0;i<5;i++)
    {
        
        scanf("%d",&a2[i]);
    }

    for (int i = 0; i <5; i++) {
            for (int j = 0; j < 5 - i - 1; j++) {
                if (a2[j]>a2[j+1] > 0) {
                    int  temp = a2[j];
                    a2[j] = a2[j + 1];
                    a2[j + 1] = temp;
                    int tempa1=a1[j];
                    a1[j]=a1[j+1];
                    a1[j+1]=tempa1;
                }
            }
        }

    // non-preemptive sjf

    int time=0;
    for(int i=0;i<5;i++)
    { // waiting time
     a3[i]=time;
    //turn around time
        time=time+a2[i];
        a4[i]=time;

    }

    //printing waiting time
    
        printf("..................Waiting time.....................\n");
    for(int i=0;i<5;i++)
    {
        printf("P_ID[%d]=%d\n",a1[i],a3[i]);
    }
    //printing turnaround time
        printf("..................Turn around  time.....................\n");
     for(int i=0;i<5;i++)
    {
        printf("P_ID[%d}=%d\n",a1[i],a4[i]);
    }





}