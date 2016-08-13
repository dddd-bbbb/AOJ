def print_rectangle(h, w)
  h.times do |i|
    w.times do |j|
      print "#"
    end
    print "\n"
  end
end

def print_rectangle2(h, w)
  for i in 1..h
    for j in 1..w
      print "#"
    end
    print "\n"
  end
end

while true do
  a, b = gets.split(" ").map {|s| s.to_i}
  break if a == 0 && b  == 0
  # print_rectangle(a, b)
  print_rectangle2(a, b)
  print "\n"
end
