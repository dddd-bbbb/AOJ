while (true) do
  input_str = gets
  break if input_str[0] == '0'
  sum = 0
  input_str.each_char { |chr|
    sum += chr.to_i
  }
  puts sum
end
