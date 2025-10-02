def dynamicArray(n, queries):
    arr=[[] for _ in range(n)]
    lastAnswer=0
    output=[]
    for t,x,y in queries:
        idx=(x^lastAnswer)%n
        if t==1:
            arr[idx].append(y)
        else:
            lastAnswer=arr[idx][y%len(arr[idx])]
            output.append(lastAnswer)
    return output

print(dynamicArray(2, [[1,0,5],[1,1,7],[1,0,3],[2,1,0],[2,1,1]]))
