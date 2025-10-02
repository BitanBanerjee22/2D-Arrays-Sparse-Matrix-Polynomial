def is_identity(matrix):
    n=len(matrix)
    for i in range(n):
        for j in range(n):
            if (i==j and matrix[i][j]!=1) or (i!=j and matrix[i][j]!=0):
                return False
    return True

print(is_identity([[1,0,0],[0,1,0],[0,0,1]]))
