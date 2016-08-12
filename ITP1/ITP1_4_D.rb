n = gets.to_i

begin
  num_ary = gets.split(" ").map(&:to_i)
end while (num_ary.length != n)


min = num_ary.min
max = num_ary.max
sum = num_ary.inject(0) {|p, q| p + q }

puts "#{min} #{max} #{sum}"
