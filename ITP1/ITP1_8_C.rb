count_hash = {}
('a'..'z').each { |chr| count_hash[chr] = 0 }

while (input_str = gets) do
  input_str.each_char do |chr|
    if chr.downcase =~ /[a-z]/
      count_hash[chr.downcase] += 1
    end
  end
end

count_hash.each { |key, value| puts "#{key} : #{value}" }
