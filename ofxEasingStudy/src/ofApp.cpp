#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetBackgroundColor(0);
    positions.resize(5);
    initTime = 0;
    endPosition = ofGetWidth() - 40;

    easingNames = {
        "linear",
        "quad",
        "cubic",
        "bounce",
        "back",
    };
}

//--------------------------------------------------------------
void ofApp::update(){
    auto duration = 1.f;
    auto endTime = initTime + duration;
    auto now = ofGetElapsedTimef();
    positions[0] = map_clamp(now, initTime, endTime, 0, endPosition, &ofxeasing::linear::easeIn);
    positions[1] = map_clamp(now, initTime, endTime, 0, endPosition, quad::easeIn);
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofSetColor(255);
    auto h = 20;
    auto y = 20;
    auto i = 0;
    for(auto & x: positions){
        ofDrawRectangle(0, y, x, h);
        ofDrawBitmapString(easingNames[i], 10, y+h*1.6);
        y+=h*2;
        i++;
    }

    ofSetColor(200);
    ofDrawLine(endPosition, 0, endPosition, ofGetHeight());
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    initTime = ofGetElapsedTimef();
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
