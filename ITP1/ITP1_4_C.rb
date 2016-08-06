def calc(x, y, str_op)
  case str_op
    when "+"
      puts x + y
    when "-"
      puts x - y
    when "*"
      puts x * y
    when "/"
      puts x / y
  end
end

while true do
  str_a, str_op, str_b = gets.split(" ")
  break if str_op == "?"
  num_a = str_a.to_i
  num_b = str_b.to_i
  calc(num_a, num_b, str_op)
end
