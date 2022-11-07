#include <stdio.h>
#include <unistd.h>
#include <curses.h>

//void get_time();
void get_clock();
int main()
{
    printf("please enter your current time in this format: <HOURS>:<MUNITE>:<SECONDS>\n");
    get_clock();
    return 0;
}
// function to get input and out for our time
// solution to create a watch thst work on my MAC and every PC
void get_clock(){
  int hours, minutes, seconds;
  printf("we are gone make this work this time");
}
// window PC solution to create a clock
/*
void get_time()
{
    int hours;
    int minutes;
    int seconds;
    printf("Please Enter Your Current Hours!:");
    scanf("%d", &hours);
      printf("Please Enter Your Current Minute!:");
      scanf("%d", &minutes);
        printf("Please Enter Your Current Seconds!:");
        scanf("%d", &seconds);
        printf("your current time is %02d:%02d:%02d", hours, minutes, seconds);
    // we use while loop after getting all the value from the input
    while(hours < 24)
    {
             while(minutes < 60)
              {
                     while(seconds <  60)
                      {
                            sleep(1000);
                              seconds++;
                              printf("Time Is Now: %02d : %02d : %02d,", hours, minutes, seconds );
                    }
              minutes++;
              seconds = 0;
             }
             hours++;
             minutes = 0;
    }
    getch();
}
*/