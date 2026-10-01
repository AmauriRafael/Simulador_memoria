#include <string>

class Cache {
public:
    Cache(std::string name, int latency, int associativity, int num_sets, int line_size, std::string write_policy)
        : name(name), latency(latency), associativity(associativity),
          num_sets(num_sets), line_size(line_size), write_policy(write_policy) {}

    int get_size_bytes() {
        return associativity * num_sets * line_size;
    }

    std::string name;
    int latency;
    int associativity;
    int num_sets;
    int line_size;
    std::string write_policy; 
};

int main() {
    return 0;
}
