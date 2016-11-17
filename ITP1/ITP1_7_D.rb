n, m, l = gets.split(" ").map(&:to_i)

matrix_a = Array.new(n) { gets.split(" ").map(&:to_i) }
matrix_b = Array.new(m) { gets.split(" ").map(&:to_i) }
matrix_c = Array.new(n) { Array.new(l,0) }

n.times do |i|
  l.times do |j|
    m.times do |k|
      matrix_c[i][j] += matrix_a[i][k] * matrix_b[k][j]
    end
  end
end

for row in matrix_c
  print "#{row.join(" ")}\n"
end
