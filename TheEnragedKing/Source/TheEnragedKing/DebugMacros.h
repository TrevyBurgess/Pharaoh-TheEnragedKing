#pragma once

#include "DrawDebugHelpers.h"

// Added for debugging purposes
#define DEBUG_SEGMENTS 30

#define DRAW_SPHERE(LOCATION)\
    if (GetWorld())\
    {\
        DrawDebugSphere(GetWorld(), LOCATION, 100.0f, DEBUG_SEGMENTS, FColor::Red, false, -1.0f, 0, 2.0f);\
    }

#define DRAW_LINE(START, END)\
    if (GetWorld())\
    {\
        DrawDebugLine(GetWorld(), START, END, FColor::Green, false, -1.0f, 0, 2.0f);\
    }

#define DRAW_POINT(LOCATION)\
    if (GetWorld())\
    {\
        DrawDebugPoint(GetWorld(), LOCATION, 10.0f, FColor::Blue, false, -1.0f);\
    }
