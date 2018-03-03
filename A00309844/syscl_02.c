#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main(){ 

	int fd, i, vector[10];
	
	fd=creat("prueba.txt",0600);

	for (i=0;i<10;i++) vector[i]=i;
		
	write(fd,vector,sizeof(vector));
		
	printf("Hola Soy David Cobo");
	
	close(fd);
	
	return(0);
}
