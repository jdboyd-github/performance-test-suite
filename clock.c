/*C program to design a digital clock.*/
 
#include <stdio.h>
#include <time.h> //for sleep() function
#include <unistd.h>
#include <stdlib.h>
 
 void countEval();
 void timeEval();
 
int main()
{
    int hour, minute, second;
     
    hour=minute=second=0;
 
    while(1)
    {
        //clear output screen
        system("clear");
         
        //print time in HH : MM : SS format
        printf("%02d : %02d : %02d ",hour,minute,second);
         
         //clear output buffer in gcc
        fflush(stdout);
         
         //increase second
        second++;
 
        //update hour, minute and second
        if(second==60){
            minute+=1;
            second=0;
        }
        if(minute==60){
            hour+=1;
            minute=0;
        }
        if(hour==24){
            hour=0;
            minute=0;
            second=0;
        }
         
        sleep(1);   //wait till 1 second
    }
    
    countEval();
    timeEval();
 
    return 0;
}

void countEval(){  
	int i=0;        
	
	for(i=1;i<=10;i++) {      
		printf("%d\n", i);      
	}     
}   

void timeEval()
{
    time_t tmi;
    struct tm* utcTime;

    time(&tmi);
    utcTime = gmtime(&tmi);

    printf("UTC Time: %2d:%02d:%02d\n", (utcTime->tm_hour) % 24, utcTime->tm_min, utcTime->tm_sec);
    printf("Time in India: %2d:%02d:%02d\n", (utcTime->tm_hour + 5) % 24, utcTime->tm_min, utcTime->tm_sec);
}  
