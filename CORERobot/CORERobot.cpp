
#include "CORERobot.h"

using namespace CORE;

void CORERobot::add(CORESubsystem& subsystem){
	subsystems.push_back(&subsystem);
}

std::vector<CORESubsystem*>& CORERobot::get_subsystems(void){
	return subsystems;
}

void CORERobot::robot_init(void){
	std::vector<CORESubsystem*>::iterator it;
		for(it = subsystems.begin(); it != subsystems.end(); ++it){
			cout << "robot init " << (*it)->name() << endl;
			(*it)->robot_init();
		}
}

void CORERobot::teleop_init(void){
	std::vector<CORESubsystem*>::iterator it;
	for(it = subsystems.begin(); it != subsystems.end(); ++it){
		cout << "tele init " << (*it)->name() << endl;
		(*it)->teleop_init();
	}
}

void CORERobot::teleop(){
	std::vector<CORESubsystem*>::iterator it;
	joystick.update_cache();
	for (it = subsystems.begin(); it != subsystems.end(); ++it){
		cout << "teleop" << (*it)->name() << endl;
		(*it)->teleop();
	}
}

std::string CORESubsystem::name(void){
	return "undefined name";
}

void CORESubsystem::robot_init(void){
	printf("Unimplemented robot_init\n");
}

void CORESubsystem::teleop_init(void){
	printf("Unimplemented teleop_init\n");
}

void CORESubsystem::teleop(){
	printf("Unimplemented teleop function\n");
}



