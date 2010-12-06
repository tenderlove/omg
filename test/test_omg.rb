require "test/unit"
require "omg"

class TestOmg < Test::Unit::TestCase
  def test_sanity
    assert_raises(RuntimeError) do
      Omg.call_raise
    end
  end
end
