#include <string>
#include <stdio.h>

#include "WPILib.h"
#include "CORERobot/CORERobot.h"

using namespace CORE;

class TestBot : public SimpleRobot{

	CORERobot robot;
	
public:
	TestBot(void):
		robot()
	{
		// Add your Subsystems here
	}

	void Autonomous(void)
	{
		
	}

	void RobotInit(void){
		robot.robot_init();
	}
	
	void OperatorControl(void)
	{
		Watchdog &wd = GetWatchdog();
		
		robot.teleop_init();
		
		while(IsOperatorControl() and !IsDisabled()){
			
			robot.teleop();

			wd.Feed();
			Wait(.005);
		}
		
	}
};

START_ROBOT_CLASS(TestBot);

