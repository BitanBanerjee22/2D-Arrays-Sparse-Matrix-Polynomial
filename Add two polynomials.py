def add_poly(A, B):
    n = max(len(A),len(B))
    res = [0]*n
    for i in range(n):
        res[i] = (A[i] if i<len(A) else 0) + (B[i] if i<len(B) else 0)
    return res

print(add_poly([3,0,2,5,0],[1,2,3,0,4]))
