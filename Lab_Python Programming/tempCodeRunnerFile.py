import numpy as np

arr1 = np.array([1, 2, 3])

arr2 = np.array([4, 5, 6])

arr3 = np.array([7, 8, 9])

arr = np.stack((arr1, arr2, arr3), axis=1)

print(arr, "\n")

arr = np.vstack((arr1, arr2, arr3))

print(arr)