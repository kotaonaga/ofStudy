#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    coords.resize(10);

          for (int i = 0; i < 10; i ++) {
              coords[i].x = i * 10;
              coords[i].y = i * 20;
          }

          for (int i = 0; i < 5; i++) {
              matrixCoords.push_back(coords);
          }

          ofLog() << matrixCoords[1][1].x;//10
          ofLog() << matrixCoords[1][3].x;//30
    ofLog() << matrixCoords[1][1];
    ofLog() << matrixCoords[2][1];
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

}

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
