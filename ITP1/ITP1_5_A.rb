def print_rectangle(h, w)
  h.times do |i|
    w.times do |j|
      print "#"
    end
    print "\n" if i < h - 1
  end
end

while true do
  a, b = gets.split(" ").map {|s| s.to_i}
  break if a == 0 && b  == 0
  print_rectangle(a, b)
  print "\n\n"
end
