#coding:utf-8

def bubble_sort(tabint)
	done = false
	size = tabint.length - 2

	while not done
		done = true

		for i in 0..size
			if tabint[i] > tabint[i+1]
				tabint[i], tabint[i+1] = tabint[i+1], tabint[i]
				done = false
			end
		end
		size -= 1
	end

	return tabint
end

#-----------------------------------------------------------------

tab = [5, 10, 1, 3, 4, 9, 7, 6, 8, 2]

puts "\nAvant tri :"
for element in tab
	print "#{element} "
end

tab = bubble_sort(tab)

puts "\nAprès tri : "
for element in tab
	print "#{element} "
end