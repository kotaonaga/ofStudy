#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetWindowShape(600, 600);
    img.allocate(ofGetWidth()/4, ofGetHeight()/4, OF_IMAGE_COLOR);

     
    for(int i = 0; i < 10; i++){
        blobs[i].setup(ofRandom(ofGetWidth()/4), ofRandom(ofGetHeight() / 4));
    }
}

//--------------------------------------------------------------
void ofApp::update(){
    
    
    for(int i = 0; i < 10; i++){
        blobs[i].update();
    }
    img.update();
}

//--------------------------------------------------------------
void ofApp::draw(){
//    ofBackground(51);
//    img.setColor(ofColor::white);
    
    for(int x = 0; x < img.getWidth(); x++){
        for(int y = 0; y < img.getHeight(); y++){
            float sum = 0;
            for(int blobNum = 0; blobNum < 10; blobNum++){
                float distance = ofDist(x, y, blobs[blobNum].getPosX(), blobs[blobNum].getPosY());
                sum += 10 * blobs[blobNum].getR() / distance;
                sum = ofClamp(sum, 0.0, 255.0);
            }
            img.setColor(x,y, ofColor(sum));
        }
    }
    
//    img.update();
    img.draw(0,0, ofGetWidth(), ofGetHeight());
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
