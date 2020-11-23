#include <stdio.h>
#define TAB_SIZE 10

//Type booléen
typedef enum {false, true}Bool;

//Prototypes
void bubble_sort(int *tabint);

/*----------------------------------------------------------*/

int main(void)
{
	int tab[TAB_SIZE] = {5, 10, 1, 3, 4, 9, 7, 6, 8, 2};
	int i;

	printf("\nAvant tri :\n");
	for(i = 0 ; i < TAB_SIZE ; i++)
		printf("[%d] ", tab[i]);

	bubble_sort(tab);

	printf("\nApres tri :\n");
	for(i = 0 ; i < TAB_SIZE ; i++)
		printf("[%d] ", tab[i]);
}

/*----------------------------------------------------------*/

void bubble_sort(int *tabint)
{
	int is_done = 0;//false
	int size = TAB_SIZE - 1;

	while(!is_done)
	{
		is_done = 1;//true

		for(int i = 0 ; i < size ; i++)
			if(tabint[i] > tabint[i+1])
			{
				int tmp = tabint[i+1];
				tabint[i+1] = tabint[i];
				tabint[i] = tmp;

				is_done = 0;//false
			}

		size--;
	}
	
}