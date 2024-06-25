#常见最大值和最小值
int_min = 2**31-1
int_max = -2**31

#在python中ord函数用来获取一个字符表示的整数
n = ord('c') - ord('a') 

#单调栈模版题目
for i in range(1, n):
    while stk and check(stk[-1], value):
        stk.pop()

#双指针算法题目
for i in range(0, n):
    j = 0
    while j < i and check(i, j):
        j += 1

#常见的dfs题目
def dfs(i):
    if i == n:
        ans.append(path)
        return
    for i in range(start, end):
        path.append(i)

#实现tire树
son = [None] * 26
is_end = False

#查找
p = root
for i in word:
    u = ord(i) - ord('a')
    if not son[u]:
        #创建一个node
        p.son[u] = Node()
    p = p.son[u]
p.is_end = True

#并查集
#初始化并查集
p = [i for i in range(1, n + 1)]

def find(x):
    if p[x] != x:
        p[x] = find(p[x])
    return p[x]

#合并并查集
p[find(a)] = find(b)
