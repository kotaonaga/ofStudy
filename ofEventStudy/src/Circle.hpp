//
//  Circle.hpp
//  ofEventStudy
//
//  Created by kota on 2020/05/19.
//

#ifndef Circle_hpp
#define Circle_hpp

#include "ofMain.h"

using namespace glm;

class Circle{
public:
    Circle();
    ~Circle();
    ofEvent<vec2> clickedInside;
    static ofEvent<vec2> clickedInsideGlobal;
    
    void setup(int _radius, int _x, int _y, ofColor _color);
    void draw();
    void clear();
    
    void mouseMoved(ofMouseEventArgs & args);
    void mouseDragged(ofMouseEventArgs & args);
    void mousePressed(ofMouseEventArgs & args);
    void mouseReleased(ofMouseEventArgs & args);
    void mouseScrolled(ofMouseEventArgs & args);
    void mouseEntered(ofMouseEventArgs & args);
    void mouseExited(ofMouseEventArgs & args);
    
    bool inside(float _x, float _y);
    int radius, x, y;
    ofColor color;
    
protected:
    bool bRegisteredEvents;
};

#endif /* Circle_hpp */
