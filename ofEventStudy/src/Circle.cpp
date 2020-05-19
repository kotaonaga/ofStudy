//
//  Circle.cpp
//  ofEventStudy
//
//  Created by kota on 2020/05/19.
//

#include "Circle.hpp"

using namespace glm;

ofEvent<vec2> Circle::clickedInsideGlobal = ofEvent<vec2>();

Circle::Circle(){
    bRegisteredEvents = false;
}

Circle::~Circle(){
    clear();
}

void Circle::setup(int _radius, int _x, int _y, ofColor _color){
    radius = _radius;
    x = _x;
    y = _y;
    color = _color;
    if(!bRegisteredEvents){
        ofRegisterMouseEvents(this);
        bRegisteredEvents = true;
    }
}

void Circle::draw(){
    ofPushStyle();
    ofSetColor(color);
    ofDrawCircle(x, y, radius);
    ofPopStyle();
}

void Circle::clear() {
    if(bRegisteredEvents) {
        ofUnregisterMouseEvents(this); // disable listening to mouse events.
        bRegisteredEvents = false;
    }
}

void Circle::mouseMoved(ofMouseEventArgs & args){}
void Circle::mouseDragged(ofMouseEventArgs & args){}
void Circle::mousePressed(ofMouseEventArgs & args){}
void Circle::mouseReleased(ofMouseEventArgs & args){
    if(inside(args.x, args.y)){
        vec2 mousePos = vec2(args.x, args.y);
        ofNotifyEvent(clickedInside, mousePos, this);
        ofNotifyEvent(clickedInsideGlobal, mousePos);
    }
}

void Circle::mouseScrolled(ofMouseEventArgs & args){}
void Circle::mouseEntered(ofMouseEventArgs & args){}
void Circle::mouseExited(ofMouseEventArgs & args){}

bool Circle::inside(float _x, float _y){
    return(distance(vec2(_x, _y), vec2(x, y)) < radius);
}
