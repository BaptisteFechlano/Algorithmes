#coding:utf-8

def bubble_sort(tabint):
	done = False
	size = len(tabint) - 1

	while not done:
		done = True

		for i in range(0, size):
			if tabint[i] > tabint[i+1]:
				tabint[i], tabint[i+1] = tabint[i+1], tabint[i]
				done = False

		size -= 1

	return tabint

#-----------------------------------------------------------------

tab = [5, 10, 1, 3, 4, 9, 7, 6, 8, 2]

print("\nAvant tri :")
for element in tab:
	print(element, " ", end="")

tab = bubble_sort(tab)

print("\nAprès tri : ")
for element in tab:
	print(element, " ", end="")