n, m = gets.split(" ").map(&:to_i)

a = Array.new(n) do
  gets.split(" ").map(&:to_i)
end
b = Array.new(m) do
  gets.to_i
end
c = Array.new(n, 0)


for i in (0..n-1)
  for j in (0..m-1)
    c[i] += a[i][j] * b[j]
  end
  puts c[i]
end
