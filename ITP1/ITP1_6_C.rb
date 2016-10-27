def generate_official_house
  Array.new(3) do
    ary = []
    10.times { ary << 0 }
    ary
  end
end

def print_output(ridge, delimiter = true)
  ridge.each do |floor|
    puts " " + floor.join(" ")
  end
  puts "#" * 20 if delimiter
end

ridge_1 = generate_official_house
ridge_2 = generate_official_house
ridge_3 = generate_official_house
ridge_4 = generate_official_house

gets.to_i.times do
  b, f, r, v = gets.split(" ").map(&:to_i)

  case b
  when 1
    ridge_1[f-1][r-1] += v
  when 2
    ridge_2[f-1][r-1] += v
  when 3
    ridge_3[f-1][r-1] += v
  when 4
    ridge_4[f-1][r-1] += v
  end
end

print_output(ridge_1)
print_output(ridge_2)
print_output(ridge_3)
print_output(ridge_4, false)
