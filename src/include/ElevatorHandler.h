#ifndef _ELEVATOR_HANDLER_H
#define _ELEVATOR_HANDLER_H

#include "Elevator.h"
#include <vector>

class ElevatorHandler
{
private:
    void HandleInputTypeOne(int level);
    void HandleInputTypeTwo(int level);
    void GetInput();
    std::vector<Elevator> elevators;
    Elevator &lastMovedElevator;

public:
    ElevatorHandler(Elevator elevator1, Elevator elevator2);
    void Start();
};

#endif