#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetBackgroundColor(0);
    ofSetCircleResolution(100);
    ofSetDepthTest(false); // disable this for smooth colour // enable for shards of colour

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    float time = ofGetElapsedTimef();

    for (int x = 1; x < 40; x++) {

        for (int i = 0; i < 900; i += 5) {
            // ofSetCircleResolution(53 + 50 * sin(i *0.001 + time  )); // makes sure the smallest resolution is 3side (for triangles)

            ofSetColor(100 + 127 * sin(i * 0.01 + time * x),
                100 + 127 * sin(i * 0.011 + time * x),
                100 + 127 * sin(i * 0.012 + time * x));

            // take your pick
            // ofDrawCircle( ofGetWidth()/2 , i, 100 );
            // ofDrawCircle( ofGetWidth()/2 + 100 * sin( i * 0.01 + time ), i , 50 +  40 * sin( i * 0.005 + time  ) ) ;
             ofDrawSphere(50 * x + 150 * sin(i * 0.0015 + time * x), 50 + i, 50 + 40 * sin(i * 0.0005 + time + x));
             //ofDrawCircle(50 * x + 150 * sin(i * 0.015 + time + x), 50 + i, 50 + 40 * sin(i * 0.0005 + time + x));
             //ofDrawSphere(50 * x + 100 * cos( i * 0.01 + time * x), 75 * x + 50 * sin( i * 0.01 + time + x), 50 + i , 50 +  40 * sin( i * 0.005 + time + x) ) ; // draw spheres in 3D
        }
    }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    switch (key) {
    case 'f':
    case 'F':
        ofToggleFullscreen();
        break;

    default:
        break;
    }

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y){

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