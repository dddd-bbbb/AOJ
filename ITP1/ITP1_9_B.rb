while true do
  str = gets.chomp
  break if str == '-'

  gets.to_i.times do
    h = gets.to_i
    str = str[h,str.length] + str[0,h]
  end

  puts str
end
