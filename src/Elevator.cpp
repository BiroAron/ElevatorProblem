#include "include/Elevator.h"

int Elevator::count = 0;

Elevator::Elevator(int startingLevel)
{
    currentLevel = startingLevel;
    id = ++count;
}

void Elevator::SetCurrentLevel(int level)
{
    currentLevel = level;
}

int Elevator::GetDistance(int level)
{
    return currentLevel - level;
}

int Elevator::GetCurrentLevel()
{
    return currentLevel;
}

int Elevator::GetId()
{
    return id;
}