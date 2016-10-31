class Student
  attr_reader :total_score, :re, :mid_score, :end_score

  def initialize(mid_score, end_score, re)
    @mid_score   = mid_score
    @end_score   = end_score
    @total_score = mid_score + end_score
    @re          = re
  end

  def grading
    if mid_score == -1 or end_score == -1
      return 'F'
    elsif total_score >= 80
      return 'A'
    elsif total_score < 80 && total_score >= 65
      return 'B'
    elsif total_score < 65 && total_score >= 50
      return 'C'
    elsif total_score < 50 && total_score >= 30
      if re >= 50
        return 'C'
      else
        return 'D'
      end
    else
      return 'F'
    end
  end
end

while true
  a, b, c = gets.split(" ").map(&:to_i)
  break if a == -1 && b == -1 && c == -1
  puts Student.new(a, b, c).grading
end
