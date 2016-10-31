while (n, x = gets.split(" ").map(&:to_i)) != [0, 0]
  count = 0
  for a in (1..n)
    for b in (a+1..n)
      for c in (b+1..n)
        count += 1 if a + b + c == x
      end
    end
  end
  puts count
end
