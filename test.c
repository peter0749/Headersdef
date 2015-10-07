#define SWITCH_ON
#include "switch.h"
#define MAX 1000

int main(void)
{
	char *str;
	str=(char*)malloc(sizeof(char)*MAX);
	gets(str);
	puts(str);
	
	return 0;
}
