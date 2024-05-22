#pragma once

struct Reading { // a temperature reading
	int hour; // hour after midnight [0:23]
	double temperature; // in Fahrenheit
	Reading(int h, double t) : hour{ h }, temperature{ t } {}	
};
