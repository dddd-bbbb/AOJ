while true do
  str = gets.chomp
  break if str == '-'

  gets.to_i.times do
    h = gets.to_i
    str = str[h..-1] + str[0..h-1]
  end

  puts str
end
