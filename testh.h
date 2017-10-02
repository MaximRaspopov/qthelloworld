#ifndef TESTH_H
#define TESTH_H
using namespace std;
class Myclass{
    string a;
public:
    Myclass()
    {
        a = string();
    }
    void foo(string b)
    {
        a = b;
        cout << a;
    }

};

#endif // TESTH_H
