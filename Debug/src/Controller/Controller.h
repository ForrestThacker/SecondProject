/*
 * Controller.h
 *
 *  Created on: Jan 19, 2016
 *      Author: ftha4681
 */

#ifndef DEBUG_SRC_CONTROLLER_CONTROLLER_H_
#define DEBUG_SRC_CONTROLLER_CONTROLLER_H_

class Controller
{
private:
	int classCount;
public:
	Controller();
	void setClassCount(int classCount);
	int getClassCount();
	void start();
};

#endif /* DEBUG_SRC_CONTROLLER_CONTROLLER_H_ */
