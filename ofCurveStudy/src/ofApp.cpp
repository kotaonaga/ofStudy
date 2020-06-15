#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    //draggedで値を変えられるのでこれを時間変化にするとウニョウニョしたものが作れそう。
    ofSetWindowShape(600, 600);
    
    ofBackground(200);
    nCurveVertices = 7;

    curveVertices[0].x = 326;
    curveVertices[0].y = 209;
    curveVertices[1].x = 306;
    curveVertices[1].y = 279;
    curveVertices[2].x = 265;
    curveVertices[2].y = 331;
    curveVertices[3].x = 304;
    curveVertices[3].y = 383;
    curveVertices[4].x = 374;
    curveVertices[4].y = 383;
    curveVertices[5].x = 418;
    curveVertices[5].y = 309;
    curveVertices[6].x = 345;
    curveVertices[6].y = 279;
    
    for (int i = 0; i < nCurveVertices; i++)
    {
        curveVertices[i].bOver = false;
        curveVertices[i].bBeingDragged = false;
        curveVertices[i].radius = 4;
    }
}

//--------------------------------------------------------------
void ofApp::update(){
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofFill();
    ofSetColor(12,34,124);
    ofBeginShape();

    for (int i = 0; i < nCurveVertices; i++)
    {

        // sorry about all the if/states here, but to do catmull rom curves
        // we need to duplicate the start and end points so the curve acutally
        // goes through them.

        // for i == 0, we just call the vertex twice
        // for i == nCurveVertices-1 (last point) we call vertex 0 twice
        // otherwise just normal ofCurveVertex call

        if (i == 0)
        {
            ofCurveVertex(curveVertices[0].x, curveVertices[0].y); // we need to duplicate 0 for the curve to start at point 0
            ofCurveVertex(curveVertices[0].x, curveVertices[0].y); // we need to duplicate 0 for the curve to start at point 0
        }
        else if (i == nCurveVertices - 1)
        {
            ofCurveVertex(curveVertices[i].x, curveVertices[i].y);
            ofCurveVertex(curveVertices[0].x, curveVertices[0].y); // to draw a curve from pt 6 to pt 0
            ofCurveVertex(curveVertices[0].x, curveVertices[0].y); // we duplicate the first point twice
        }
        else
        {
            ofCurveVertex(curveVertices[i].x, curveVertices[i].y);
        }
    }

    ofEndShape();

    // show a faint the non-curve version of the same polygon:
    ofEnableAlphaBlending();
    ofNoFill();
    ofSetColor(0, 0, 0, 40);
    ofBeginShape();
    for (int i = 0; i < nCurveVertices; i++)
    {
        ofVertex(curveVertices[i].x, curveVertices[i].y);
    }
    ofEndShape(true);

    ofSetColor(0, 0, 0, 80);
    for (int i = 0; i < nCurveVertices; i++)
    {
        if (curveVertices[i].bOver == true)
            ofFill();
        else
            ofNoFill();
        ofDrawCircle(curveVertices[i].x, curveVertices[i].y, 4);
    }
    ofDisableAlphaBlending();
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
    for (int i = 0; i < nCurveVertices; i++)
    {
        if (curveVertices[i].bBeingDragged == true)
        {
            curveVertices[i].x = x;
            curveVertices[i].y = y;
        }
    }
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    for(int i = 0; i < nCurveVertices; i++){
        float diffx = x - curveVertices[i].x;
        float diffy = y - curveVertices[i].y;
        float dist = sqrt(diffx * diffx + diffy * diffy);
        if(dist < curveVertices[i].radius){
            curveVertices[i].bBeingDragged = true;
        }else{
            curveVertices[i].bBeingDragged = false;
        }
    }
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
