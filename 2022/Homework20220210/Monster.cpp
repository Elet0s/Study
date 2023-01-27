#include "Monster.h"

Monster::Monster()
	: ConsoleObject(nullptr, nullptr, { 0,0 }, { 0,0 })
{

}

Monster::Monster(TextScreen* _Screen, const char* _Text, const ConsoleVector& _Vector, const ConsoleVector& _Lange)
	: ConsoleObject(_Screen, _Text, _Vector, _Lange)
{
}

Monster::~Monster()
{
}


void Monster::Update()
{
}
