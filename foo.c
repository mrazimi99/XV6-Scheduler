#include "types.h"
#include "stat.h"
#include "user.h"

int main(int argc, char const *argv[])
{
	int i;
	int pid = 0;

	for (i = 0; i < 6; ++i)
	{
		pid = fork();
		double counter;

		for (counter = 0; counter < 30000000; counter += 0.1)
			continue;

		if (!pid)
			break;
	}

	for (i = 0; i < 6; ++i)
	{
		if (pid)
		{
			printf(1, "x: %d\n", wait());
		}
	}

	printf(1, "%d finished\n", getpid());
	exit();
}
