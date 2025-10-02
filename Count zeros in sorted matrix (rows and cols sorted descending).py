def count_zeros(matrix):
    n=len(matrix)
    count=0
    i,j=0,n-1
    while i<n and j>=0:
        if matrix[i][j]==0:
            count+=j+1
            i+=1
        else:
            j-=1
    return count

print(count_zeros([[1,1,0],[1,0,0],[0,0,0]]))
