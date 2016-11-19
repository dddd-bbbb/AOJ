str = gets.chomp

gets.to_i.times do
  line = gets.split()
  order = line[0]
  first = line[1].to_i
  last  = line[2].to_i

  if order == "print"
    puts str[first..last]
  elsif order == "replace"
    word = line[3]
    str[first..last] = word
  elsif order == "reverse"
    str[first..last] = str[first..last].reverse
  end
end
