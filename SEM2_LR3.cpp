#include <ctime>
#include "Parallel.h"
#include "Sequential.h"

int main()
{
    srand(time(NULL));
    unsigned int N = 0;
    unsigned int R = 0;
    std::cout << "Enter quantity of elements: ";
    std::cin >> N;
    std::cout << "Enter range for generation capacity of conductor: ";
    std::cin >> R;
    std::cout << std::endl;
    std::vector<Battery*> batteries;
    for (unsigned int i = 0; i < N; i++)
    {
        if (rand() % 2)
        {
            batteries.push_back(new Parallel(1 + rand() % R, 1 + rand() % R));
        }
        else
        {
            batteries.push_back(new Sequential(1 + rand() % R, 1 + rand() % R));
        }
    }
    for (Battery* battery : batteries)
    {
        battery->PrintInfo();
        std::cout << "Capacity of battery: " << battery->CountCapacity() << std::endl;
        std::cout << std::endl;
    }
}
