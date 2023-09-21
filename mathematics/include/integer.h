#include <vector>
#include <number.h>
#include <definition.h>

class Word {
public:
    Word add(const Word& r);
    Word sub(const Word& r);
    Word mul(const Word& r);
    
private:
    word data;
};

class Integer {
public:
    Integer(int a);
    // virtual void test() {

    // };
    ~Integer();
private:
    word flag;
    word bits;
    std::vector<word> data;
};