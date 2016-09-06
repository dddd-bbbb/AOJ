input_numbers = []
i = 1

while true
  n = gets.to_i
  break if n == 0
  input_numbers.push(n)
end

input_numbers.each do |number|
  puts "Case #{i}: #{number}"
  i += 1
end
