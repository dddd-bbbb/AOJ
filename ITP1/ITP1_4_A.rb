a, b = gets.split(" ").map{ |s| s.to_i }
puts sprintf("%d %d %.5f",a / b, a % b, a / b.to_f)
