#include <iostream>

using namespace std;

int main()
{
    int maVariable{42};
    int maVariable2{43};
    int maVariable3{44};
    int maVaribale4{45};

    int *monpointeur{&maVariable};

    monpointeur = &maVariable2;
    std::cout << maVariable2 <<endl;
    *monpointeur = 454567;

    std::cout << monpointeur <<endl ;
    cout<< *monpointeur << endl ;
    cout << maVariable2 << endl;

    monpointeur = nullptr;

}
