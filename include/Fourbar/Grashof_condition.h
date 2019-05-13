#ifndef _GRASHOF_CONDITION_
#define _GRASHOF_CONDITION_

#include <string>
#include <vector>

// Grashof condition class. It will contain a description string about if input & output bars of fourbar are crank, rocker, 
// 0-rocker or Pi-rocker; and a bool containing if input bar is a crank and can fully rotate.
// - Crank: it can fully rotate 360�.
// - Rocker: it can rotate a range which does not include 0� or 180�.
// - 0-Rocker: it can rotate a range which includes 0� degrees but not 180�.
// - Pi-Rocker: it can rotate a range which includes 180� but not 0�.
class GrashofCondition {
public:
	GrashofCondition(std::string, bool);
	std::string get_description();
	bool get_isCrank();
private:
	bool isCrank;
	std::string description;
};

// Evaluation of Grashof condition, given the bar lenghts [ground, input, floating, output]. Returns a GrashofCondition. 
GrashofCondition evaluateGrashof(std::vector<double>&);

#endif
