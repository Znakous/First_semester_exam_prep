#include <iostream>
#include <cassert>

struct S{
  S(int n_) : n(n_) { }
  S(const S&) = delete;
  S(S&&) = delete;
  S& operator=(const S&) = delete;
  S& operator=(S&&) = delete;
  // you can't copy value of type S
  int n;
};

void out_and_inc(S el_to_out, S el_to_inc) {
  std::cout << el_to_out.n;
  ++el_to_inc.n;
}

int main() {
  S seven(7);
  S eight(8);
  out_and_inc(seven, eight); // 7
  assert(eight.n == 9);

  const S one(1);
  S two(2);
  out_and_inc(one, two); // 1
  assert(two.n == 3);
  return 0;
}
