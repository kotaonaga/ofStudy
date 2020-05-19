#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetWindowShape(600, 600);
    ofSetCircleResolution(64);
    
    firstCircle.setup(100, ofRandom(ofGetWidth()-200)+100, ofRandom(ofGetHeight()-200)+100, ofColor(ofRandom(255), 123, 123));
    
    ofAddListener(firstCircle.clickedInside, this, &ofApp::onMouseInCircle);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(233);
    firstCircle.draw();
}

void ofApp::onMouseInCircle(glm::vec2 & e){
    clickedPoint = e;
    ofLog() << "clicked";
}

//void onMouseInAnyCircle(glm::vec2 & e){
//    
//}


//--------------------------------------------------------------
void ofApp::keyPressed(int key){

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
