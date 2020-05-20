//
//  Circle.hpp
//  constructor
//
//  Created by kota on 2020/05/20.
//

#ifndef Circle_hpp
#define Circle_hpp

#include <stdio.h>
#include "ofMain.h"

class Circle{
private:
    int x;
    
public:
    Circle();
    Circle(int _x);
    //Circle(); //引数なしverを試す
    int getX();
};

#endif /* Circle_hpp */
