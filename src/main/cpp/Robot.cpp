#include "Robot.h"
#include "Prefs.h"

#include <iostream>

#include <frc/smartdashboard/SmartDashboard.h>

Robot::Robot():
a_joystick(joystick_port),
a_xbox(xbox_port)
{

}

void Robot::RobotInit() {}

void Robot::RobotPeriodic() {}

void Robot::AutonomousInit() {}

void Robot::AutonomousPeriodic() {}

void Robot::TeleopInit() {}

void Robot::TeleopPeriodic() {}

void Robot::DisabledInit() {}

void Robot::DisabledPeriodic() {}

void Robot::TestInit() {}

void Robot::TestPeriodic() {}

#ifndef RUNNING_FRC_TESTS
int main() { return frc::StartRobot<Robot>(); }
#endif
