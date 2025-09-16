#include <iostream>
#include <random>
using namespace std;


int main () {
    // non-deterministic seed
    std::random_device rd;

    // Mersenne Twister engine - using the seed
    std::mt19937 gen(rd());

    // define a distribution e.g. uniform - with a range of 1 - 10
    std::uniform_int_distribution<int> dist(0, 10);
    int random_int = dist(gen);

    cout << "Random integer: " << random_int << '\n';

    // example real distribution
    std::uniform_real_distribution<double> real_dist(0.0, 1.0);
    double real_dist_random = real_dist(gen);
    
    cout << "Real distribution random number 0 - 1: " << real_dist_random << '\n';

    // NOTE - the mt19937 engine is not cryptographically secure, but works faster
    // for a secure random number, which could be used for a token - use just the random device - do more research on how lol

    return 0;
}