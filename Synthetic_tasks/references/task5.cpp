int main() {
  int x = 10;
  ++x; // OK
  cosnt int& x_ref = x;
  ++x_ref; // should be OK
  const int y = 5;
  ++y; // FAIL
  int& y_ref = y; // should be OK
  ++y_ref; // should FAIL
}
