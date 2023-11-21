#include <tango.h>
#include <ximc.h>


#include <iostream>
#include <type_traits>
 
enum e1 {};
enum class e2: int {};

long_t test_long_t;

long test_long;

Tango::DevLong64 dev_long_long;

 
int main() {
    bool e1_type = std::is_same<
        unsigned
       ,typename std::underlying_type<e1>::type
    >::value; 
 
    bool e2_type = std::is_same<
        int
       ,typename std::underlying_type<e2>::type
    >::value;
 
    std::cout
    << "underlying type for 'e1' is " << (e1_type?"unsigned":"non-unsigned") << '\n'
    << "underlying type for 'e2' is " << (e2_type?"int":"non-int") << '\n';

    std::cout << "test_long_t: "  << sizeof(test_long_t) << std::endl;

    std::cout << "test_long: "  << sizeof(test_long) << std::endl;

    std::cout << "dev_longlong: "  << sizeof(dev_long_long) << std::endl;
}


