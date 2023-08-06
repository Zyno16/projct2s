#include <stdio.h>
#include <stdlib.h>
#include<time.h>


/*void show_date_time_after_second(){

time_t now;
struct tm* dt;
unsigned int my_delay;
now =time(NULL);
dt =localtime(&now);
printf("\r%.2d/%.2d/%.4d-",dt->tm_mday,dt->tm_mon+1,dt->tm_year+1900);
printf("%.2d:%.2d:%.2d",dt->tm_hour,dt->tm_min,dt->tm_sec);
my_delay =time(NULL)+1;
while(time(NULL)<my_delay);





}

int main()
{for(;;)
   show_date_time_after_second();
    return 0;
}*/






void show_date_time_second(){
unsigned my_delay;
time_t now;
struct tm*dt;
now=time(NULL);
dt= localtime(&now);
my_delay=time(NULL)+1;
printf("\r%.2d/%.2d/%.2d-",dt->tm_mday,dt->tm_mon+1,dt->tm_year+1900);
printf("%.2d:%.2d:%.2d",dt->tm_hour,dt->tm_min,dt->tm_sec);
while(time(NULL)<my_delay);


}
main(){
    for(;;)
show_date_time_second();
return 0;
}
