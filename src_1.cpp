#define _CRT_SECURE_NO_WARNINGS
#include"list_t_routines.hpp"
int main(void)
{
    list_t* list_1 = nullptr;
    for (int i = 0;i < 6;i++)
	{
        pict_t buf;
       // scanf("%s", buf.auth);
       // scanf("%s", buf.name);
      //  scanf("%d", &(buf.year));
       // scanf("%d", &(buf.count));
		buf.count = 1990-(i-2)*(i-2);
        Add(&list_1, buf);
        /*char auth[16];
    char name[16];
    int year;
    int count;
    char** expositions;*/
    }
	Print(list_1);
	printf("%d",FindMostPopular(list_1));
	int kq = 0;
	kq++;
    return 0;
}
