
#pragma once

#include "ofMain.h"
#include "ofxGui.h"
//#include "BulgeEffect.h" (OPTIONAL)

class ofApp : public ofBaseApp
{
	public:

		void setup();
		void update();
		void draw();

		ofSerial serial;
		ofVideoPlayer video;

		string message, strCSpeed, strNSpeed;
		float sDistance, newSpeed, currentSpeed;

		ofTrueTypeFont font;

		//BulgeEffect bulgeEffect; (OPTIONAL)

};