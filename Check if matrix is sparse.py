def is_sparse(matrix):
    total = len(matrix)*len(matrix[0])
    zeros = sum(row.count(0) for row in matrix)
    return zeros > total/2

print(is_sparse([[0,0,1],[0,0,0],[1,0,0]]))
