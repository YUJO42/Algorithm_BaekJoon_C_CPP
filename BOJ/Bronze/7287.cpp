#include <unistd.h>

int main(void)
{
	write(1, "43\n", 3);
	write(1, "yujo", 4);
	
	return 0;
}
