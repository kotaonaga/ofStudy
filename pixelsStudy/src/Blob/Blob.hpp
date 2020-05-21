//
//  Blob.hpp
//  pixelsStudy
//
//  Created by kota on 2020/05/06.
//

#ifndef Blob_hpp
#define Blob_hpp

#include <stdio.h>
#include "ofMain.h"

class Blob {
    
public:
    Blob();
    void setup(float _x, float _y);
    void update();
    void show();
    float getPosX();
    float getPosY();
    float getR();
    
    
private:
    ofVec2f pos;
    float r;
    ofVec2f vel;
};

#endif /* Blob_hpp */
