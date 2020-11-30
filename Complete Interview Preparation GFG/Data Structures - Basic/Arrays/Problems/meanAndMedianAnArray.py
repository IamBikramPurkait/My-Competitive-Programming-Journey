# {
# Driver Code Starts
# Initial Template for Python 3


import math


# } Driver Code Ends

# User function Template for python3
import statistics

# Complete the below codes


def median(A, N):
    #
    A.sort()
    if N % 2 == 0:
        median1 = A[N//2]
        median2 = A[N//2 - 1]
        median = (median1 + median2)/2
    else:
        median = A[N//2]
    return math.floor(median)

    # Your code here
    # If median is fraction then convert the median to integer and return


def mean(A, N):
    return math.floor(sum(A) / N)


# {
# Driver Code Starts.

def main():

    T = int(input())

    while(T > 0):

        N = int(input())
        a = [int(x) for x in input().strip().split()]

        print(mean(a, N), median(a, N))

        T -= 1


if __name__ == "__main__":
    main()
# } Driver Code Ends
