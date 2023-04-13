#include "include/ElevatorHandler.h"
#include "include/Elevator.h"
#include <iostream>
#include <vector>

ElevatorHandler::ElevatorHandler(Elevator elevator1, Elevator elevator2)
    : elevators({elevator1, elevator2}), lastMovedElevator(elevator1)
{
}

void ElevatorHandler::HandleInputTypeOne(int level)
{
    int elevatorOneDistance = elevators[0].GetDistance(level), elevatorTwoDistance = elevators[1].GetDistance(level);

    if (elevatorOneDistance + elevatorTwoDistance == 0)
    {
        if (elevatorOneDistance == 0 || elevatorOneDistance < elevatorTwoDistance)
        {
            elevators[0].SetCurrentLevel(level);
            lastMovedElevator = elevators[0];
            std::cout << "A folyoson lett megnyomva a gomb" << std::endl;
            std::cout << "Emelet szama" << level << std::endl;
            std::cout << "Uj szint" << level << std::endl;
        }
        else
        {
            elevators[1].SetCurrentLevel(level);
            lastMovedElevator = elevators[1];
            std::cout << "A folyoson lett megnyomva a gomb" << std::endl;
            std::cout << "Emelet szama" << level << std::endl;
            std::cout << "Uj szint" << level << std::endl;
        }
        return;
    }

    elevatorOneDistance = std::abs(elevatorOneDistance);
    elevatorTwoDistance = std::abs(elevatorTwoDistance);

    if (elevatorTwoDistance < elevatorOneDistance)
    {
        elevators[1].SetCurrentLevel(level);
        lastMovedElevator = elevators[1];
        std::cout << "A folyoson lett megnyomva a gomb" << std::endl;
        std::cout << "Emelet szama" << level << std::endl;
        std::cout << "A lift szama" << lastMovedElevator.GetId() << std::endl;
        std::cout << "Uj szint" << level << std::endl;
    }
    else
    {
        elevators[0].SetCurrentLevel(level);
        lastMovedElevator = elevators[0];
        std::cout << "A folyoson lett megnyomva a gomb" << std::endl;
        std::cout << "Emelet szama" << level << std::endl;
        std::cout << "A lift szama" << lastMovedElevator.GetId() << std::endl;
        std::cout << "Uj szint" << level << std::endl;
    }
}

void ElevatorHandler::HandleInputTypeTwo(int level)
{
    std::cout << "A liftbol lett megnyomva a gomb" << std::endl;
    std::cout << "A lift szama" << lastMovedElevator.GetId() << std::endl;
    std::cout << "Uj szint" << level << std::endl;
    lastMovedElevator.SetCurrentLevel(level);
}

void ElevatorHandler::GetInput()
{
    while (true)
    {
        int level;
        std::cin >> level;
        (level < 7) ? HandleInputTypeOne(level) : HandleInputTypeTwo(level - 10);
    }
}

void ElevatorHandler::Start()
{
    GetInput();
}