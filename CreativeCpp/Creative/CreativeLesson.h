#pragma once
#include <string>

class CreativeLesson
{
public:
	virtual std::string LessonName() = 0;
	virtual void Start() = 0;
};

