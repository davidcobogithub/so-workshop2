#include <stdio.h>
#include <sys/time.h>
#include <time.h>
#include <unistd.h>

int main() 
{
 
	struct timeval tv;
    
	struct tm* ptm;
    
	char time_string[40];
  
	gettimeofday(&tv, NULL);
  	ptm = localtime(&tv.tv_sec);
    	strftime(time_string, sizeof(time_string),  "%d/%m/%Y %H:%M:%S" , ptm);
 	printf( "La hora es: %s\n" ,time_string);
   
 return 0;

}
