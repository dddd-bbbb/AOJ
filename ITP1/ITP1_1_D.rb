input_number = gets.to_i
h = input_number / 3600
m = input_number % 3600 / 60
s = input_number % 3600 % 60

puts "#{h}:#{m}:#{s}"
