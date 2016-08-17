def print_chessboard(h, w)
  h.times do |i|
    w.times do |j|
      if i % 2 == 0
        print (j % 2 == 0) ? "#" : "."
      else
        print (j % 2 == 0) ? "." : "#"
      end
    end
    puts
  end
  puts
end

while true do
  h, w = gets.split(" ").map{|s| s.to_i}
  break if h == 0 && w == 0
  print_chessboard(h, w)
end
