require "spec_helper"
require_relative "../../ITP1_1_A"

describe "#hello" do
  it "should puts 'Hello World'" do
    expect(hello).to eq puts "Hello World"
  end
end
