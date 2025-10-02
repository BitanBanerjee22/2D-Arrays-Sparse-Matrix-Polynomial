def sum_diagonals(mat):
    n = len(mat)
    s = 0
    for i in range(n):
        s += mat[i][i]
        if i != n-1-i:
            s += mat[i][n-1-i]
    return s

print(sum_diagonals([[1,2,3],[4,5,6],[7,8,9]]))
