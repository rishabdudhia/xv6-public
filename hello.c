#include "types.h"
#include "stat.h"
#include "user.h"

int main (int argc, char* argv[])
{
	int pid = fork();
	//int a = 55;
	int* status = 0;

	if (pid) {
		wait(status);
		exit(2);
	}
	else {
		wait(status);
		exit(10);
	}


}
