#===========基础语法===================
#常见最大值和最小值
int_min = 2**31-1
int_max = -2**31

#初始化数组的常用手法
[[0] * n for _ in range(n)]

#在python中ord函数用来获取一个字符表示的整数
n = ord('c') - ord('a') 

#zip, 同时遍历两个字符串
for i, j in zip(str1, str2)

#hash表;
hash = {}

# 判断是否位于hash表中
1 in hash
#统计每一个字符串出现的次数
cnt = Counter(str)

#===========基本数据结构===================

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


#=========数学=========
#位运算计算当前的二进制值中的1
res = 0
while x:
    x -= (x & -x)
    res += 1

#常见dp的公式
#01背包问题, 但是需要从结尾开始遍历
dp[i] = max(dp[j], dp[j-v[i]]+w[i])

#完全背包
dp[i] = max(dp[j], dp[j-v[i]] + w[i])

#hash 判断, 适用于go 语言
hash := make(map[int]int, l)
if value, ok := hash[index]; !ok {
}

# hash的另外一种变形就是使用对应的字符-"a" 数组的形式
hash[value - 'a'] = 12
