
#include "ofApp.h"

void ofApp::setup()
{
	// BASIC SETTINGS.
	ofBackground(255, 255, 255);
	ofSetFrameRate(60);
	font.loadFont("EXO_BLACK.otf", 6);

	// ADUINO SETUP.
	serial.setup("COM6", 9600);

	// MOVIE SETUP.
	video.load("movies/bulge1080.mp4");
	video.setPixelFormat(OF_PIXELS_RGB);
	video.setLoopState(OF_LOOP_PALINDROME);
	video.play();
	video.setSpeed(1.0f);

	// SET VARIABLES FOR THE CURRENT AND NEW SPEED.
	currentSpeed = 0.0f;
	newSpeed = 0.0f;
	sDistance = 0.0f;

}

void ofApp::update()
{

	// INFORM IF SERIAL IS AVAILABLE. 
	if (serial.available() < 0) {
		message = "YOU SUCK";
	}
	else
	{
			// LOOP THROUGH SERIAL DATA WHEN SERIAL IS PROVIDED.
			while (serial.available() > 0)
			{
				int newOuput = serial.readByte();

				if(newOuput > 1.0f)
				{
					sDistance = newOuput;
				}
				else
				{
					video.setPaused(true);
				}
				message = ofToString(sDistance);
			}
	}

	// UPDATE OBJECTS.
	video.update();

	// MEASURE NEW SPEED WITH SPECIFIC DISTANCES.
	if (sDistance < 8.0f) 
	{
		video.setPaused(true);
	}
	else if (sDistance > 7.0f && sDistance < 14.0f)
	{
		newSpeed = 3.0f;
		video.setPaused(false);
	}
	else if (sDistance > 14.0f && sDistance < 30.0f)
	{
		newSpeed = 2.0f;
		video.setPaused(false);
	}
	else if (sDistance > 31.0f && sDistance < 70.0f)
	{
		newSpeed = 1.5f;
		video.setPaused(false);
	}
	else {
		video.setPaused(true);
	}

	// LINEAR INTERPOLATION TO THE NEW SPEED.
		// ---- newSpeed = ofLerp(currentSpeed, newSpeed, 0.1f);

	video.setSpeed(newSpeed);

	// SET STRING...
	strNSpeed = ofToString(newSpeed);
	strCSpeed = ofToString(currentSpeed);

	// GRAB CURRENT SPEED AND STORE IT.
	currentSpeed = video.getSpeed();
}

void ofApp::draw()
{
	// DRAW OBJECTS.
	video.draw(0, 0);

	// SET COLORS SHAPES AND TEXTS TO DRAW OUTPUT DATA.
	ofSetHexColor(0x000000);
	ofFill();
	ofRect(30, ofGetHeight() - 115, 180, 35);
	ofSetHexColor(0xffffff);

	font.drawString("ARD OUPUT: " + message, 40, ofGetHeight() - 90);
	font.drawString("CURRENT SPEED: " + ofToString(currentSpeed), 40, ofGetHeight() - 100);

}
