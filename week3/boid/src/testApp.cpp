#include "testApp.h"

testApp::~testApp()
{
	for (int i = 0; i < boids.size(); i++)
	{
		delete boids[i];
	}

	for (int i = 0; i < boids1.size(); i++)
	{
		delete boids1[i];
	}
}

//--------------------------------------------------------------
void testApp::setup(){
	
	
	int screenW = ofGetScreenWidth();
	int screenH = ofGetScreenHeight();

	ofBackground(0,0,70);
	
	// set up the boids
	for (int i = 0; i < 50; i++)
		boids.push_back(new Boid());

	for (int i = 0; i < 20; i++)
		boids1.push_back(new Boid());

}


//--------------------------------------------------------------
void testApp::update(){
	
    ofVec3f min(0, 0);
	ofVec3f max(ofGetWidth(), ofGetHeight());
	for (int i = 0; i < boids.size(); i++)
	{
		boids[i]->update(boids, boids1, min, max);
	}

	for (int i = 0; i < boids1.size(); i++)
	{
		boids1[i]->update(boids1, boids, min, max);
	}
}

//--------------------------------------------------------------
void testApp::draw(){

	for (int i = 0; i < boids.size(); i++)
	{
		boids[i]->draw();
	}

	for (int i = 0; i < boids1.size(); i++)
	{
		boids1[i]->draw1();
	}
}


//--------------------------------------------------------------
void testApp::keyPressed(int key){
 
}

//--------------------------------------------------------------
void testApp::keyReleased(int key){
    
}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){
    
}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){
    
}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){
	
}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){
    
}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){
    
}
