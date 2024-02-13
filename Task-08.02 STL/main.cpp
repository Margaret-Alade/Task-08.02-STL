//
//  main.cpp
//  Task-08.02 STL
//
//  Created by Маргарет  on 13.02.2024.
//

#include <iostream>
#include <set>
#include <vector>
#include <list>

template <class T>
void print_container (const T& cont) {
    for (auto it = cont.begin(); it != cont.end(); it++) {
        std::cout << *it << " ";
    }
}



int main(int argc, const char * argv[]) {
    std::cout << "Print container set: ";
    std::set<std::string> test_set = { "one", "two", "three", "four" };
    print_container(test_set);
    std::cout << "\n";
    std::cout << "Print container list: ";
    std::list<std::string> test_list = { "one", "two", "three", "four" };
    print_container(test_list);
    std::cout << "\n";
    std::cout << "Print container vector: ";
    std::vector<std::string> test_vector = { "one", "two", "three", "four" };
    print_container(test_vector);
    std::cout << "\n";
    return 0;
}
