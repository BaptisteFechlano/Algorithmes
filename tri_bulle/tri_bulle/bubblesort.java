public class BubbleApp
{
	public static void main(String[] args)
	{
		int tab[] = {5, 10, 1, 3, 4, 9, 7, 6, 8, 2}; 
		int i;

		System.out.println("\nAvant tri :");
		for(i = 0 ; i < tab.length ; i++)
			System.out.print(tab[i] + " ");

		tab = bubbleSort(tab);

		System.out.println("\nApres tri :");
		for(i = 0 ; i < tab.length ; i++)
			System.out.print(tab[i] + " ");
	}

	public static int[] bubbleSort(int tabint[])
	{
		boolean isDone = false;
		int size = tabint.length - 1;

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