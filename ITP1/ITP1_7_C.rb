col, row = gets.split(" ").map(&:to_i)

arr = Array.new(col) do
  gets.split(" ").map(&:to_i)
end

for i in (0..col-1)
  row_sum = 0
  for j in (0 ..row-1)
    print "#{arr[i][j]} "
    row_sum += arr[i][j]
  end
  print "#{row_sum}\n"
end

row_sum = 0
for k in (0..row-1)
  col_sum = 0
  for l in (0..col-1)
    col_sum += arr[l][k]
  end
  print "#{col_sum} "
  row_sum += col_sum
end
print "#{row_sum}\n"
