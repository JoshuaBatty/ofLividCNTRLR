#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup() {
	ofSetVerticalSync(true);
	ofBackground(255, 255, 255);
	ofSetLogLevel(OF_LOG_VERBOSE);
	
	mLivid.setup();
}

//--------------------------------------------------------------
void testApp::update() {
	

}

//--------------------------------------------------------------
void testApp::draw() {

	mLivid.draw();
}

