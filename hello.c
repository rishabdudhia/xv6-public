#include "types.h"
#include "stat.h"
#include "user.h"

int main (int argc, char* argv[])
{
	int status;
	int pid = fork();

	// if (pid==0) {

	// }
	
	if (pid) {
		waitpid(pid,&status,0);
		//wait(&status);
		printf(1,"parent %d\n", pid);
		exit(2);
	}
	else {
		exit(10);
	}


}
