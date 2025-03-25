int main() {
  int x = 10;
  ++x; // OK
  int& x_ref = x;
  ++x_ref; // OK
  const int y = 5;
  ++y; // FAIL
  const int& y_ref = y; // OK
  ++y_ref; // FAIL
}
