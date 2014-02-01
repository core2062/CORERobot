#ifndef COREAUTO_H
#define COREAUTO_H

#include <string>
#include <queue>
#include <vector>

#include "WPILib.h"

namespace CORE{
	
	/*
	 * Basic Action class
	 * an action can return 3 states:
	 * Continue : the action will happen again
	 * End : the action is done
	 * Background : The action is on a background list where all background actions can happen simultaneously
	 */
class Action{
	public:
		enum ControlFlow{
			CONTINUE,
			END,
			BACKGROUND
		};
		Action();
		virtual ControlFlow call(void){cout << "action base class operator"<< endl; return END;} // =0
		virtual void init(void){}
		virtual ~Action(){}
	};

	/*
	 * A spacer action allowing the robot to wait a period of time
	 */
class WaitAction : public Action{
	float m_duration;
	Timer timer;
public:
	WaitAction(float duration);
	virtual ControlFlow call(void);
	virtual ~WaitAction(void){};
};

	/*
	 * Holds all auto actions that are added to it
	 */
class AutoSequencer{
	std::queue<Action*> aqueue;
	std::vector<Action*> background;
public:
	AutoSequencer(void);
	void add_action(Action& action);
	void add_action(Action* action);
	void iter(void);
};

}
#endif
