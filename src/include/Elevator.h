#ifndef _ELEVATOR_H
#define _ELEVATOR_H

class Elevator
{
public:
    Elevator(int startingLevel);
    void SetCurrentLevel(int level);
    int GetDistance(int level);
    int GetCurrentLevel();
    int GetId();

private:
    char currentLevel;
    int id;
    static int count;
};

#endif