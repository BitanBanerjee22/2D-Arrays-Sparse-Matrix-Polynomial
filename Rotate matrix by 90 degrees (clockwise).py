def rotate90(matrix):
    n = len(matrix)
    # transpose
    for i in range(n):
        for j in range(i,n):
            matrix[i][j], matrix[j][i] = matrix[j][i], matrix[i][j]
    # reverse each row
    for row in matrix:
        row.reverse()

mat = [[1,2,3],[4,5,6],[7,8,9]]
rotate90(mat)
for r in mat: print(r)
