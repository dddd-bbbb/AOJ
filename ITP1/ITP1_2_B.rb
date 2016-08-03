a, b, c = gets.split.map(&:to_i)

def answer(x, y, z)
  if x < y && y < z
    puts "Yes"
  else
    puts "No"
  end
end

answer(a, b, c)
