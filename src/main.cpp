#include "include/Elevator.h"
#include "include/ElevatorHandler.h"
#include <iostream>
#include <vector>

int main()
{
    Elevator elevator1(0), elevator2(6);
    ElevatorHandler elevatorHandler(elevator1, elevator2);
    elevatorHandler.Start();

    return 0;
}