#pragma once

#include "ofMain.h"
#include "livid.h"

class testApp : public ofBaseApp {
	
public:
	
	void setup();
	void update();
	void draw();

	livid mLivid;
};
