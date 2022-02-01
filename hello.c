#include "types.h"
#include "stat.h"
#include "user.h"

int main (int argc, char* argv[])
{
	int* status = 0;
	int pid = fork();
	
	if (pid) {
		//waitpid(0,status,0);
		wait(status);
		printf(1,"parent %d\n", pid);
		exit(2);
	}
	else {
		exit(20);
	}


}
