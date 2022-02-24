#include "types.h"
#include "stat.h"
#include "user.h"

int main(int argc, char *argv[])
{
	
	int PScheduler(void);

  printf(1, "\n This program tests the correctness of your lab#2\n");
  
	PScheduler();
	return 0;
}
  
    
int PScheduler(void){
		 
    // use this part to test the priority scheduler. Assuming that the priorities range between range between 0 to 31
    // 0 is the highest priority and 31 is the lowest priority.  

    int pid;
    int i,j,k;

    setpriority(0);
	//printf(1, "1priority: %d\n", getpriority());
    for (i = 0; i <  3; i++) {
		pid = fork();
		if (pid > 0 ) {
			continue;}
		else if ( pid == 0) {

			setpriority(30-10*i);
			//printf(1, "priority: %d\n", getpriority());	
			for (j=0;j<50000;j++) {
				for(k=0;k<1000;k++) {
					asm("nop"); }}
			printf(1, "\n child# %d with priority %d has finished! \n",getpid(),30-10*i);	
            times();	
			exit(0);
			}
			else {
				printf(2," \n Error \n");
				
			}
	}

	if(pid > 0) {
		for (i = 0; i <  3; i++) {
			wait(0);

		}
                     printf(1,"\n if processes with highest priority finished first then its correct \n");
}
	exit(0);		
	return 0;}