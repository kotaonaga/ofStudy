#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    //charで繋がっているnofill
    //charでfill
    //vectorのfill
    //vectorのnofill
    //ひとつひとつの点にアクセスした時に得られるやつのFill
    //ひとつひとつの  点にアクセスした時に得られるやつのnoFill()
    //これらを扱うのにofPathを使う。ofPathはpolylineと違ってfillできる。
    
    ofBackground(255,255,255);
    
    canaro.load("Canaro-LightDEMO.ttf", 60, true, true, true);
    comfortaa.load("ComfortaaLight-MJ0v.ttf", 60);
    gramourgirl.load("NagomiGokubosoGothic-ExtraLight.otf",60);
    phenomena.load("Phenomena-Black.ttf",60);
    
    letter = '7';
    
    bool vflip = true;
    bool filled = true;
    
    canaroChar = canaro.getCharacterAsPoints(letter, vflip, filled);
    
    
    

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofSetColor(45, 123, 34);
    ofFill();
    canaroChar.draw(40,140);
//    canaro.drawString("Hello", 15, 100);
//    comfortaa.drawString("Hello", 15, 200);
//    gramourgirl.drawString("Hello", 15, 300);
//    phenomena.drawString("Hello", 15, 400);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    switch(key){
        case OF_KEY_BACKSPACE:
            if(textTyped.length() > 0){
               textTyped = textTyped.substr(0, MAX(0, textTyped.length() - 1));
            }
            break;
        case OF_KEY_RETURN:
            break;
            
        default: textTyped += key;
    }
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
