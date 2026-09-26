#pragma once

#include "EZ-Template/api.hpp"
#include "api.h"

extern Drive chassis;

// Your motors, sensors, etc. should go here.  Below are examples

// inline pros::Motor intake(1);
// inline pros::adi::DigitalIn limit_switch('A');



inline pros::Motor centerMotor(-8);
inline pros::Motor intakeMotor2(21);


inline pros::Motor bottomMotor(4);
inline pros::Motor bottomMotor2(-11);
inline pros::adi::Pneumatics intakeThing('B', false);
inline pros::adi::Pneumatics descore('A', false);