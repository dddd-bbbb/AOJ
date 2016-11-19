tarou = 0
hanako = 0

gets.to_i.times do
  str = gets.split()
  if str[0] > str[1]
    tarou += 3
  elsif str[0] < str[1]
    hanako += 3
  else
    tarou += 1
    hanako += 1
  end
end

puts "#{tarou} #{hanako}"
