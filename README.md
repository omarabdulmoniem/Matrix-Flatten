# Matrix-Flatten

* Flattening formula: oneD[i + height * (j + width * k)] = threeD[i][j][k]
* i is the variable used to traverse columns (height)
* j is the variable used to traverse rows (width)
* k is the variable used to traverse depth

# Understading how to flatten 2D array first

To flatten a 2D array we use the formula:
* oneD[i + j * height] = twoD[i][j]
it starts traversing the array column by column starting with the twoD[0][0] then twoD[1][0] then twoD[2][0]
and so on.

# The way to flatten a 3D array
this formula treats the 3D matrix as layers of 2D matrices and uses the same way as treaversing the 2D matrices 
except that now we have a third dimension that we will refer to as if it's the number of layers represented by the depth
and traverse through the variable k in the algorithm so it starts traversing the 3D matrix starting from the first element 
in every 2D layer then the second element in the same column in every 2D layer then the third element and so on till the end of 
the column and then moves to the next column and repeats the process till the end of the 3D matrix.

* indexing: offset = i + height * (j + width * k)

 # Algorithm
 flatten(arr[height][width][depth])
 
 # Description
 Traveses a 3D array and converts the 3D indexing to 1D indexing
 
 # Input
 3D array
 
 # Output
 1D vector (1D array)
