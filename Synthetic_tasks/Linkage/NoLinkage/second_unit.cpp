static int x;
extern int y;

int* GetXAddressFromSecond() {
    return &x;
}
int* GetYAddressFromSecond() {
    return &y;
}