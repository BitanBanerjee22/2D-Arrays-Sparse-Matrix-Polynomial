def multiply_poly(A,B):
    res=[0]*(len(A)+len(B)-1)
    for i in range(len(A)):
        for j in range(len(B)):
            res[i+j]+=A[i]*B[j]
    return res

print(multiply_poly([1,2,3],[4,5]))
