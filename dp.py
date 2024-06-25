for i in range(1, n):
  for j in range(0, n):
    f[i][j] = f[i-1][j]
      if j >= v[i]:
        f[i][j] = max(f[i-1][j], f[i-1][j-v[i]] + w[i])
