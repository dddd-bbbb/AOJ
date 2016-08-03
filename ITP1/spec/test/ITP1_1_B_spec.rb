require "spec_helper"
require_relative "../../ITP1_1_B"

describe "#cube(x)" do
  before { @input = gets.to_i }
  it "標準入力値の三乗が出力される" do
    expect(cube(@input)).to eq puts @input**3
  end
end
