#include <iostream> using namespace std; class test {     int code;     static int count;   public:     void setcode(void)     {         code = ++count;     }     void showcode(void)     {         cout << "object number :" << code << "\n";     }     static void showcount(void)     {         cout << "count:" << count << "\n";     } }; int test::count; int main() {     test t[5];     t[1].setcode();     t[2].setcode();       test::showcount();        t[3].setcode();       test::showcount();     t[1].showcode();     t[2].showcode();     t[3].showcode();     return 0; } 