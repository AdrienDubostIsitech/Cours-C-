#include <iostream>
#include <vector>
#include <string>
#include <array>
#include <list>
#include <map>
#include <algorithm>
using namespace std;

bool test(string name);
// marche pour retourner un booléen
 bool test(string name)
{
    return (name.size() > 6);
}

int main()
{



    vector<string> Noms =
    {
        "Julien",
        "Adrien",
        "Yohann",
        "Yohann",
        "Brice",
        "Gregoire",
        "Nicolas",
        "Evan",
        "Naoufel"
    };

cout << count_if(Noms.begin(), Noms.end(), test);



    //plusieurs conteneurs
    //séquentiels

    //array ->générique  car d'autres type pour être initilisé
    //array<T, n> MonArray;
    // vector<T> -> générique
//    vector<string> strings;
//
//    strings.push_back("one");
//    strings.push_back("two");
//    strings.push_back("three");
//    for(size_t i= 0;  i < strings.size(); i++)
//    {
//        cout << strings[i] << endl;
//    }
//    for (auto it = strings.begin(); it != strings.end(); ++it)
//    {
//        cout << *it << endl;
//    }
//
//    vector<string>::iterator it = strings.begin();
//
//
//    vector<int> MyInt;
//    MyInt.push_back(1);
//    MyInt.push_back(2);
//    MyInt.push_back(3);
//
//
//    cout << MyInt.back() << endl; // retourne une référence du dernier on peut donc modifier
//    cout << MyInt.front() << endl; // retourne une référence du premier
//    cout << MyInt.data() << endl; //retourne l'adresse du premier
//    for (auto it = MyInt.begin(); it != MyInt.end(); ++it)
//    {
//            cout << &*it <<endl;
//    }
//    std::list<int> MyIntList;
//    MyIntList.push_back(1);
//    MyIntList.push_back(2);
//    MyIntList.push_back(3);
//    //MyIntList.push_front(0);
//    list<int>::iterator iterat = MyIntList.begin();
//    cout<< *iterat << endl;
//    //iterat++;
//    //MyIntList.insert(iterat, MyIntList.begin(), MyIntList.end());
//    //iterat++;
//
//    //iterat prend la  valeur d'après ( car elle devient la première valeur)
//    iterat = MyIntList.erase(iterat);
//    cout<< *iterat <<endl;
//    for(auto it = MyIntList.begin(); it != MyIntList.end(); ++it)
//    {
//        cout << *it << endl;
//    }
//
//        cout<<endl;
//        cout<<endl;
//        cout<<endl;
//
//    array<int, 4> ArrayTable {1, 2, 3, 4};
//
//    vector<int> VectorTable;
//    VectorTable.push_back(1);
//    VectorTable.push_back(2);
//    VectorTable.push_back(3);
//    VectorTable.push_back(4);
//
//    list<int> ListTable;
//    ListTable.push_back(1);
//    ListTable.push_back(2);
//    ListTable.push_back(3);
//    ListTable.push_back(4);
//
//
//
//    cout << VectorTable.size() << endl;
//    cout << VectorTable.capacity() << endl;
//    VectorTable.push_back(5);
//    VectorTable.push_back(6);
//    cout << VectorTable.size() << endl;
//    cout << VectorTable.capacity() << endl;
//    vector<int>::iterator ite = VectorTable.begin();
//    ite++;
//    VectorTable.erase(ite);
//    ite++;
//    VectorTable.erase(ite);
//     cout << VectorTable.size() << endl;
//    cout << VectorTable.capacity() << endl;
//
//    VectorTable.reserve(64);
//    cout << VectorTable.capacity() << endl;
//         cout << VectorTable.max_size() << endl;
//
//   // queue
//
//    //associatifs
//
//    //on accède aux données grâce à un clé
//
//
//    // les presque
//
//    cout << "Hello world!" << endl;
    return 0;
}
