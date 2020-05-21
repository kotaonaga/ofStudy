#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
//    ofSetWindowShape(600, 600);
    ofBackground(0);
    ofPlanePrimitive plane;
    plane.set(1000, 1000, 100, 100);
    mesh = plane.getMesh();
}

//--------------------------------------------------------------
void ofApp::update(){
    float div = 200.0; //波の周波数
    float scale = 200.0; //波の高さ
    float speed = 0.5;
    //頂点の数だけループ
    //getVerticesはvectorを返す。それのsize()
    for (int i = 0; i < mesh.getVertices().size(); i++) {
        //頂点のZ座標をsinとcosで変更
        float x = mesh.getVertices()[i].x;
        float y = mesh.getVertices()[i].y;
//        float zx = sin(ofGetElapsedTimef() + x * freq) * scale;
//        float zy = cos(ofGetElapsedTimef() + y * freq) * scale;
        float z = ofNoise(x/div, y/div, ofGetElapsedTimef() * speed) * scale;
        mesh.setVertex(i, ofVec3f(x, y, z));
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    cam.begin();
    ofPushMatrix();
    ofRotateX(-45);
    //頂点をポイントで描画
//    ofSetColor(222, 22, 222);
//    mesh.setMode(OF_PRIMITIVE_TRIANGLE_STRIP);
//    mesh.setMode(OF_PRIMITIVE_TRIANGLES);
    mesh.setMode(OF_PRIMITIVE_POINTS);
    
//    mesh.setMode(OF_PRIMITIVE_TRIANGLE_STRIP);
    glPointSize(3.0);
    mesh.draw();
    ofPopMatrix();
    cam.end();
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
