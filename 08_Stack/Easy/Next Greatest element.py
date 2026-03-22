def nextGreaterElement(arr):
    n = len(arr)
    result = [-1] * n
    stack = []   # will store indices

    for i in range(n):
        # While current element is greater than stack top
        while stack and arr[i] > arr[stack[-1]]:
            index = stack.pop()
            result[index] = arr[i]

        stack.append(i)

    return result
