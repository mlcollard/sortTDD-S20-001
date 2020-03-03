/*
    sort_t.cpp

    Test program for sort functions
*/

#include "sort.hpp"
#include <cassert>
#include <vector>

int main() {

    {
        std::vector<int> v;
        assert(v.empty());
        assert(v.size() == 0);

        sort(v);

        assert(v.empty());
        assert(v.size() == 0);
    }

    {
        std::vector<int> v{ 2, 1 };
        assert(!v.empty());
        assert(v.size() == 2);
        assert(v[0] == 2);
        assert(v[1] == 1);

        sort(v);

        assert(!v.empty());
        assert(v.size() == 2);
        assert(v[0] == 1);
        assert(v[1] == 2);
    }

    return 0;
}
