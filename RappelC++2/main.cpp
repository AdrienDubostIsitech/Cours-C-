#include <iostream>
#include <vector>
#include <string>
#include <array>
#include <list>
using namespace std;

int main()
{
    //plusieurs conteneurs
    //s�quentiels

    //array ->g�n�rique  car d'autres type pour �tre initilis�
    //array<T, n> MonArray;
    // vector<T> -> g�n�rique
    vector<string> strings;

    strings.push_back("one");
    strings.push_back("two");
    strings.push_back("three");
    for(size_t i= 0;  i < strings.size(); i++)
    {
        cout << strings[i] << endl;
    }
    for (auto it = strings.begin(); it != strings.end(); ++it)
    {
        cout << *it << endl;
    }

    vector<string>::iterator it = strings.begin();


    vector<int> MyInt;
    MyInt.push_back(1);
    MyInt.push_back(2);
    MyInt.push_back(3);


    cout << MyInt.back() << endl; // retourne une r�f�rence du dernier on peut donc modifier
    cout << MyInt.front() << endl; // retourne une r�f�rence du premier
    cout << MyInt.data() << endl; //retourne l'adresse du premier
    for (auto it = MyInt.begin(); it != MyInt.end(); ++it)
    {
            cout << &*it <<endl;
    }
    std::list<int> MyIntList;
    MyIntList.push_back(1);
    MyIntList.push_back(2);
    MyIntList.push_back(3);
    MyIntList.push_front(0);
    list<int>::iterator iterat = MyIntList.begin();
    iterat++;
    MyIntList.insert(iterat, MyIntList.begin(), MyIntList.end());
    for(auto it = MyIntList.begin(); it != MyIntList.end(); ++it)
    {
        cout << *it << endl;

    }

   // queue

    //associatifs

    //on acc�de aux donn�es gr�ce � un cl�


    // les presque

    cout << "Hello world!" << endl;
    return 0;
}
