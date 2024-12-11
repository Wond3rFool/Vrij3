#pragma once

#include "DrawDebugHelpers.h"

#define DRAW_SPHERE(Location) if(GetWorld()) DrawDebugSphere(GetWorld(), Location, 24, 12.f, FColor::Green, true, -1.f, 0, 1.f);
#define DRAW_SPHERE_SingleFrame(Location) if(GetWorld()) DrawDebugSphere(GetWorld(), Location, 24, 12.f, FColor::Green, false, -1.0f, 0, 1.f);
#define DRAW_LINE(StartLocation, EndLocation) if(GetWorld()) DrawDebugLine(GetWorld(), StartLocation, EndLocation, FColor::Green, true, -1.f, 0, 1.f); 
#define DRAW_LINE_SingleFrame(StartLocation, EndLocation) if(GetWorld()) DrawDebugLine(GetWorld(), StartLocation, EndLocation, FColor::Green, false, -1.f, 0, 1.f); 
#define DRAW_POINT(Location) if(GetWorld()) DrawDebugPoint(GetWorld(), Location, 15.f, FColor::Green, true);
#define DRAW_POINT(Location) if(GetWorld()) DrawDebugPoint(GetWorld(), Location, 15.f, FColor::Green, false, -1.f);
#define DRAW_VECTOR(StartLocation, EndLocation) if(GetWorld()) \
	{\
		DrawDebugLine(GetWorld(), StartLocation, EndLocation, FColor::Green, true, -1.0f, 0, 1.f);\
		DrawDebugPoint(GetWorld(), EndLocation, 15.f, FColor::Green, true);\
	}
#define DRAW_VECTOR_SingleFrame(StartLocation, EndLocation) if(GetWorld()) \
	{\
		DrawDebugLine(GetWorld(), StartLocation, EndLocation, FColor::Green, false, -1.0f, 0, 1.f);\
		DrawDebugPoint(GetWorld(), EndLocation, 15.f, FColor::Green, false, -1.f);\
	}