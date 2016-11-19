finding_word = gets.chomp.downcase
text_word_ary= []
counter = 0

while ((line = gets) !~ /END_OF_TEXT/) do
  text_word_ary << line.downcase.gsub("\"","").split()
end
text_word_ary.flatten.each {|word| counter += 1 if word == finding_word}

puts counter
