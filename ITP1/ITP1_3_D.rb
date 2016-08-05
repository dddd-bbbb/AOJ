first, last, num= gets.split(" ").map(&:to_i)
cnt = 0

for i in (first..last)
  cnt += 1 if num % i == 0
end

puts cnt
