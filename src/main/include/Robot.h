// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#pragma once

#include "rev/CANSparkMaxLowLevel.h"
#include <string>

#include <frc/Joystick.h>
#include <frc/TimedRobot.h>
#include <frc/smartdashboard/SendableChooser.h>
#include <rev/CANSparkMax.h>

class Robot : public frc::TimedRobot {
public:
  void RobotInit() override;
  void RobotPeriodic() override;
  void AutonomousInit() override;
  void AutonomousPeriodic() override;
  void TeleopInit() override;
  void TeleopPeriodic() override;
  void DisabledInit() override;
  void DisabledPeriodic() override;
  void TestInit() override;
  void TestPeriodic() override;

private:
  rev::CANSparkMax motor0 = rev::CANSparkMax(0, rev::CANSparkMaxLowLevel::MotorType::kBrushed);
  rev::CANSparkMax motor1 = rev::CANSparkMax(1, rev::CANSparkMaxLowLevel::MotorType::kBrushed);

  frc::Joystick joystick = frc::Joystick(0);
};
