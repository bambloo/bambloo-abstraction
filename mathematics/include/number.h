#include <type_traits>

namespace bambloo::mathematics {
    class Word
    {
    public:
        void add();
        void sub();
        void mod();
        void mul();
    private:
        size_t number;
    };

    class Number {
    };
}
