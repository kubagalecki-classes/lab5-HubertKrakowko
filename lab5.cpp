#include <iostream>
#include <list>
#include <vector>

#include "Human.hpp"
using namespace std;

std::vector< char > foo(std::list< Human >& people)
{
    // Twoja implementacja tutaj
    //list<Human> lista;
    //ref=&people;
    vector<char> T;

    for (Human e : people) {
        e.birthday();
    }
    
    bool monster;

    for(auto rit=people.rbegin();rit!=(auto ritend=rend());*it++)
    {
      monster=rit->isMonster();

      if(monster==true)
      {
          T.push_back("n");
      }
      else{
        T.push_back("y");
      }
      
    }

    return {T};
}


int main()
{

    list< Human > lista;

    vector< char > vs;

    // LISTY
    /*
    list< int > lista;
    lista.push_back(5);
    lista.push_back(6);
    cout << &lista.front() << endl;
    cout << &lista.back() << endl;
    lista.push_front(4);
    lista.push_front(3);
    lista.push_front(2);
    lista.push_front(1);
    cout << &lista.back() << endl;

    std::list< int >::reverse_iterator it    = lista.rbegin();
    std::list< int >::reverse_iterator endit = lista.rend();

    for (int i = 0; it != endit; *it++) {
        *it = *it + 1;
        cout << *it;
    }

    for (int e : lista) {
        cout << e << endl;
    }
*/
    // WEKTORY
    /*
        vector< Human > vecH{};

        // vector<int>           v{1, 2, 3};
        // vector<int>::iterator it = v.begin();

        int n = 3;

        */
    /*
          for (int i = 0; i < n; i++) {
              string a;
              cout << "imie:";
              cin >> a;
              Human B(a, 20, true, true);
              vecH.push_back(B);
          }
      */
    /*
        int s = 0;
        while (s < n) {
            string a;
            cout << "imie humana nr" << s;
            cin >> a;
            if (a == "pop") {
                vecH.pop_back();
                s--;
            }
            else {
                Human B(a, 20, true, true);
                vecH.push_back(B);
                s++;
            }
        }
    */
    /*
        for (int i = 0; i < n; i++) {
            cout << vecH[i].getName() << endl;
        }
    */

    // iterator1
    /*
    vector< Human >::iterator it    = vecH.begin();
    vector< Human >::iterator endit = vecH.end();
    for (int i = 0; it != endit; *it++) {
        Human temp("1", 2, true, true);

        temp = *it;
        // cout << "a";
        cout << temp.getName();
    }

    for (Human e : vecH) {
        cout << e.getName();
    }

    */
    // zad 1-3
    /*
      // puts("Hello, World!");
      int                    T = 42;
      vector< unsigned int > vec(100, T);
      cout << vec.size() << endl;
      cout << vec.capacity() << endl;

      for (int i = 0; i < 16; i++) {
          // vec.push_back(i);
          cout << vec[i] << endl;
      }
      cout << vec.size() << endl;
      cout << vec.capacity() << endl;
      cout << "adres" << &vec[0];

      for (int i = 0; i < 32; i++) {
          vec.push_back(i);
      }
      cout << vec.size() << endl;
      cout << vec.capacity() << endl;
      cout << "adres" << &vec[0];

      vec[5] = 0;
      cout << vec[5];*/
}
