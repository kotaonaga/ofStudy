//
//  Circle.cpp
//  constructor
//
//  Created by kota on 2020/05/20.
//

#include "Circle.hpp"

//コンストラクタを2つ作れることがわかった
Circle::Circle(){
    x = 12;
}


Circle::Circle(int _x){
    x = _x;
}

int Circle::getX(){
    return x;
}
