#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    //値渡し。変数のコピーを変更する。
    //    int a = 1;
    //    int b = 2;
    //    cout << a << " " << b << endl;
    //    swapByValue(a, b);
    //    cout << a << " " << b << endl;
    
    //参照渡し
    //    int c = 3;
    //    int d = 4;
    //    cout << c << " " << d << endl;
    //    swapByReference(c, d);
    //    cout << c << " " << d << endl;
    
    //ポインタ渡し
    //    int e = 5;
    //    int f = 6;
    //    int* ep = &e;
    //    int* fp = &f;
    //
    //    cout << e << " " << f << endl;
    //    swapByPointer(ep, fp);
    //    cout << e << " " << f << endl;
    
    //ポインタの使いどき
    //    string myName = "kota";
    //    string* pName = &myName;
    //    addExclamation(pName);
    //    cout << myName << endl;
    
    //参照渡し使いどき。変数の実際のメモリを変更する。
    //    int i = 1;
    //    addOne(i);
    //    cout << i << endl;
    
    /*
     参照とポインタの違いをわかってなかった。&がポインタの付属品くらいに考えていた。
     違った。int&とすることで参照オブジェクトみたいなのを作ることができる。
     fooをbarに入れて、barの値を変えると、fooの値も変わる。
     */
    int foo = 12;
    int& bar = foo;
    cout << "this is bar: " << bar << endl;
    bar = 34;
    cout << "this is foo: " << foo << endl;
    
    refTest(foo);
    cout << foo << endl;
    
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

//値渡し。実際に変数の中身を入れ替えることはできない。
void ofApp::swapByValue(int i, int j){
    int tmp = i;
    i = j;
    j = tmp;
}

//参照渡し。アドレスを渡す。実際に入れ替わる。
void ofApp::swapByReference(int &i, int &j){
    int tmp = i;
    i = j;
    j = tmp;
}

//ポインタ渡し。ポインタを渡す。実際に入れ替わる。
//void ofApp::swapByPointer(int* i, int* j){
//    int tmp = i;
//    i = j;
//    j = tmp;
//}


void ofApp::addExclamation(string* s){
    //s.appendという感じ。sはポインタなので->を使う。
    s -> append("!");
}

void ofApp::addOne(int& i){
    i += 1;
}


void ofApp::refTest(int& rr){
    rr += 3;
}
