n = gets.to_i

begin
  num_array = gets.split(" ").map(&:to_i)
end while (num_array.length != n)

sorted_num_ary = num_array.sort

min = sorted_num_ary.min
max = sorted_num_ary.max
sum = num_array.inject(0) {|start, a| start + a }

puts "#{min} #{max} #{sum}"
