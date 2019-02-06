#include "ofMain.h"
#include "application.h"


//========================================================================
int main( ){
	ofSetupOpenGL(500,500,OF_WINDOW);			// <-------- setup the GL context
	ofSetWindowTitle("TP1 ");

	// this kicks off the running of my app
	// can be OF_WINDOW or OF_FULLSCREEN
	// pass in width and height too:
	ofRunApp(new Application());

}
