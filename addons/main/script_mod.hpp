// COMPONENT should be defined in the script_component.hpp and included BEFORE this hpp

#define MAINPREFIX synixe
#define PREFIX factions
#define SUBPREFIX addons

#include "script_version.hpp"

// MINIMAL required version for the Mod. Components can specify others..
#define REQUIRED_VERSION 2.12

#ifdef COMPONENT_BEAUTIFIED
	#define COMPONENT_NAME QUOTE(Synixe Contractors - COMPONENT_BEAUTIFIED)
#else
	#define COMPONENT_NAME QUOTE(Synixe Contractors - COMPONENT)
#endif