#pragma once

#include "Human.hpp"

#include <list>
#include <vector>

using namespace std;

std::vector< char > foo(std::list< Human >& people)
{
    // Twoja implementacja tutaj
    //list<Human> lista;
    //ref=&people;
    vector<char> T;
/*
    for (Human e : people) {
        e.birthday();
    }
    */
    bool monster;

    std::list<Human>::reverse_iterator rit;

    for(rit=people.rbegin();rit!=people.rend();*rit++)
    {
      monster=rit->isMonster();
      rit->birthday();

      if(monster==true)
      {
          T.push_back('n');
      }
      else{
        T.push_back('y');
      }
      
    }

    return {T};
}