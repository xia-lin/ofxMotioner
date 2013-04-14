//
//  ofxMotioner.h
//  ofxMotioner
//
//  Created by Onishi Yoshito on 4/15/13.
//
//

#ifndef __ofxMotioner__ofxMotioner__
#define __ofxMotioner__ofxMotioner__

#include "ofxMotionerConstants.h"
#include "ofxMotionerUtils.h"
#include "ofxMotionerNode.h"
#include "ofxMotionerSkeleton.h"

#include "ofMain.h"
#include "ofxOscReceiver.h"

namespace ofxMot = ofxMotioner;

namespace ofxMotioner {
    
    void setup(int oscIncomingPort = 10000);
    void update();
    void draw();
    void debugDraw();
    
    struct EventArgs {
        SkeletonPtr skeleton;
    };
        
    extern ofEvent<EventArgs> drawSkeletonEvent;
}

#endif /* defined(__ofxMotioner__ofxMotioner__) */