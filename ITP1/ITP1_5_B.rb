def print_frame(height, width)
  height.times do |i|
    if i == 0 || i == height - 1
      puts "#" * width
    else
      puts "#" + "." * (width - 2) + "#"
    end
  end
  puts
end

while true do
  h, w = gets.split(" ").map(&:to_i)
  (h == 0 && w == 0) ? break : print_frame(h, w)
end
