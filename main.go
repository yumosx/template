//整理一份go语言的模板
intMin := math.MinInt32
intMax := math.MaxInt32

//hash的使用方法
hash := make(map[byte]byte, l)
if value, ok := hash[value - "a"]; ok {
  if value != xxx {
    //条件判断
  }
}
delete(hash, key)

//在go 语言种模拟stack
stack := make([]int, l)
stack = append(stack, value)
stack = stack[:len(stack)-1]
