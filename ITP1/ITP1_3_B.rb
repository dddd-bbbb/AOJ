input_numbers = []
i = 1

while true
  n = gets.to_i
  if n == 0
    break
  end
  input_numbers.push(n)
end

input_numbers.each do |number|
  puts "Case #{i}: #{number}"
  i += 1
end
