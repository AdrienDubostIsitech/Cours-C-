#include <iostream>
#include <vector>
#include <string>
#include <array>
#include <list>
#include <map>
using namespace std;

int main()
{
    map<string, int>noteRPI;
    noteRPI["Yohann"] = 15;
    noteRPI["Gregoire"] = 11;
    noteRPI["Nicolas"] = 13;
    noteRPI["Julien"] = 17;
    noteRPI["Naoufal"] = 16;

    //make_pair retourne un truc du type que tu veux envoy� dans ce cas l� un cl� et une valeur
    noteRPI.insert(make_pair("Evan", 14));

    for(map<string, int>::iterator it = noteRPI.begin(); it != noteRPI.end(); it++)
    {
        // ond�clare une paire des types pr�ciser
        pair<string, int> note =*it;
        cout << "La note de " << note.first << " est: " <<note.second << endl;
    }

    //plusieurs conteneurs
    //s�quentiels

    //array ->g�n�rique  car d'autres type pour �tre initilis�
    //array<T, n> MonArray;
    // vector<T> -> g�n�rique
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
//    cout << MyInt.back() << endl; // retourne une r�f�rence du dernier on peut donc modifier
//    cout << MyInt.front() << endl; // retourne une r�f�rence du premier
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
//    //iterat prend la  valeur d'apr�s ( car elle devient la premi�re valeur)
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
//    //on acc�de aux donn�es gr�ce � un cl�
//
//
//    // les presque
//
//    cout << "Hello world!" << endl;
    return 0;
}
