#include <iostream>
#define TAB_SIZE 10

//Prototypes
void bubble_sort(int *tabint);

/*----------------------------------------------------------*/

int main()
{
	int tab[TAB_SIZE] = {5, 10, 1, 3, 4, 9, 7, 6, 8, 2};
	int i;

	std::cout << std::endl << "Avant tri :" << std::endl;
	for(i = 0 ; i < TAB_SIZE ; i++)
		std::cout << tab[i] << " ";

	bubble_sort(tab);

	std::cout << std::endl << "Apres tri :" << std::endl;
	for(i = 0 ; i < TAB_SIZE ; i++)
		std::cout << tab[i] << " ";
}

/*----------------------------------------------------------*/

void bubble_sort(int *tabint)
{
	bool is_done = false;
	int size = TAB_SIZE - 1;

	while(!is_done)
	{
		is_done = true;

		for(int i = 0 ; i < size ; i++)
			if(tabint[i] > tabint[i+1])
			{
				int tmp = tabint[i+1];
				tabint[i+1] = tabint[i];
				tabint[i] = tmp;

				is_done = false;
			}

		size--;
	}
	
}