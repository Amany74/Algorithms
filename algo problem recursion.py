my_list = []
def getSubStr(str_list, curr, n, k):
    if (k == 0) :
        if not ('ab' in curr) :
            my_list.append(curr) # excluding the substrings with 'ab' in that order and append to new str
        # print(curr)
        return
    for i in range(n):
        next = curr + str_list[i]
        getSubStr(str_list, next, n, k - 1)


str_list = ['a', 'b','c']
k = 1
n = 2
for k  in range(n+1):
    getSubStr(str_list,"",len(str_list),k)  # k:number of possible combinations
print("----------")
print(my_list)


