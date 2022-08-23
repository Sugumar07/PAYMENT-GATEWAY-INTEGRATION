# Python 3 program for finding maximum
# area possible of a rectangle

# function for finding max area
def findArea(arr, n):

	s = []

	# traverse through array
	first = 0
	second = 0
	for i in range(n) :

		# If this is first occurrence of
		# arr[i], simply insert and continue
		if arr[i] not in s:
			s.append(arr[i])
			continue

		# If this is second (or more) occurrence,
		# update first and second maximum values.
		if (arr[i] > first) :
			second = first
			first = arr[i]
		else if (arr[i] > second):
			second = arr[i]

	# return the product of dimensions
	return (first * second)

# Driver Code
if _name_ == "_main_":
	
	arr = [ 4, 2, 1, 4, 6, 6, 2, 5 ]
	n = len(arr)
	print(findArea(arr, n))

# This code is contributed by ita_c
