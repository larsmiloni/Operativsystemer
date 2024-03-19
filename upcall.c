#include <stdio.h>
#include <signal.h>
#include <unistd.h>

void handler(int signum)
{
	printf("I caught a %d signal\n", signum);
}

int main()
{
	printf("Signal handler demo\n");

	signal(SIGTERM, handler);
	signal(SIGKILL, handler);

	pause();
	return 0;
}
