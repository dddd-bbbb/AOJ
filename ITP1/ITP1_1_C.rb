class Rectangle
  attr_accessor :length, :width

  def initialize(length, width)
    @length = length
    @width  = width
  end

  def calculate_area
    @length * @width
  end

  def calculate_circumstances
    @length * 2 + @width * 2
  end

  def output_format
    "#{calculate_area} #{calculate_circumstances}"
  end
end

length, width = gets.split.map(&:to_i)

puts Rectangle.new(length, width).output_format
