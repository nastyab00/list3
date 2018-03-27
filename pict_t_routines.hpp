#ifndef PICT_T_ROUTINES_HPP
#define PICT_T_ROUTINES_HPP
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
struct pict_t {
    char auth[16];
    char name[16];
    int year;
    int count;
    char** expositions;
};
int PrintPict(pict_t pic)
{
	puts("-------------");
	printf("%s\n", pic.auth);
	printf("%s\n", pic.name);
		printf("%d\n", pic.year);
			printf("%d\n", pic.count);
		puts("-------------");
	return 0;
}
#endif // PICT_T_ROUTINES_HPP
