#ifndef _TXT_WRITE_
#define _TXT_WRITE_

#include "Simbody.h"
#include "PF_utilities.h"

// This will write reference and particles both angle into an txt file:

void Angle_write(SimTK::State&, ParticleList&);

#endif