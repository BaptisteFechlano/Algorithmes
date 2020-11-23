using System;

namespace BubbleApp
{
	class Program
	{
		static void Main(string[] args)
		{
			int[] tab = {5, 10, 1, 3, 4, 9, 7, 6, 8, 2}; 
			int i;

			Console.WriteLine("\nAvant tri :");
			for(i = 0 ; i < tab.Length ; i++)
				Console.Write(tab[i] + " ");

			tab = BubbleSort(tab);

			Console.WriteLine("\nApres tri :");
			for(i = 0 ; i < tab.Length ; i++)
				Console.Write(tab[i] + " ");
		}

		static int[] BubbleSort(int[] tabint)
		{
			bool isDone = false;
			int size = tabint.Length - 1;

			while(!isDone)
			{
				isDone = true;

				for(int i = 0 ; i < size ; i++)
					if(tabint[i] > tabint[i+1])
					{
						int tmp = tabint[i+1];
						tabint[i+1] = tabint[i];
						tabint[i] = tmp;

						isDone = false;
					}

				size--;
			}

			return tabint;
		}
	}
}