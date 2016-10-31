while (a, b, c = gets.split(" ").map(&:to_i)) != [-1, -1, -1]
  total_score = a + b
  grading = if a == -1 or b == -1
              'F'
            elsif total_score >= 80
              'A'
            elsif total_score < 80 && total_score >= 65
              'B'
            elsif total_score < 65 && total_score >= 50
              'C'
            elsif total_score < 50 && total_score >= 30
              c >= 50 ? 'C' : 'D'
            else
              'F'
            end
  puts grading
end
