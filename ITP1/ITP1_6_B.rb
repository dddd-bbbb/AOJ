cards_ary = []
for picture in ["S", "H", "C", "D"]
  for num in 1..13
    cards_ary << "#{picture} #{num}"
  end
end

n = gets.to_i
i = 0
while i < n do
  input_card = gets.strip
  cards_ary.delete(input_card)
  i += 1
end

puts cards_ary
