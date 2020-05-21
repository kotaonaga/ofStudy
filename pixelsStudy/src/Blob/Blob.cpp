//
//  Blob.cpp
//  pixelsStudy
//
//  Created by kota on 2020/05/06.
//

#include "Blob.hpp"

Blob::Blob(){
   
}

void Blob::setup(float _x, float _y){
    pos.set(_x,_y);
       vel.set(ofRandom(-1.0, 1.0), ofRandom(-1.0, 1.0));
       vel * ofRandom(2.0, 5.0);
       r = ofRandom(90, 130);
}

void Blob::update(){
    pos += vel;
    if (pos.x > ofGetWidth()/4 || pos.x < 0) {
        vel.x *= -1;
    }
    if (pos.y > ofGetHeight()/4 || pos.y < 0) {
        vel.y *= -1;
    }
}


float Blob::getPosX(){
    return pos.x;
}

float Blob::getPosY(){
    return pos.y;
}

float Blob::getR(){
    return r;
}


void Blob::show(){
    ofNoFill();
    ofSetLineWidth(4);
    ofDrawEllipse(pos.x, pos.y, r*2, r*2);
}
