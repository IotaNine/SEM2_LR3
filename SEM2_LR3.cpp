#include <ctime>
#include "Parallel.h"
#include "Sequential.h"

int main()
{
    setlocale(LC_ALL, "Russian");
    srand(time(NULL));
    unsigned int N = 0;
    std::cout << "Введите кол-во элементов: ";
    std::cin >> N;
    std::cout << std::endl;
    std::vector<Battery*> batteries;
    for (unsigned int i = 0; i < N; i++)
    {
        if (rand() % 2)
        {
            batteries.push_back(new Parallel(1 + rand() % 10, 1 + rand() % 10));
        }
        else
        {
            batteries.push_back(new Sequential(1 + rand() % 10, 1 + rand() % 10));
        }
    }
    for (Battery* battery : batteries)
    {
        battery->PrintInfo();
        std::cout << "Capacity of battery: " << battery->CountCapacity() << std::endl;
        std::cout << std::endl;
    }
}