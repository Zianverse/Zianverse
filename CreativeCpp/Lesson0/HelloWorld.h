#pragma once
#include "Creative/CreativeLesson.h"

class HelloWorld : public CreativeLesson
{
public:
	// Inherited via LessonBase
	std::string LessonName() override;
	void Start() override;
};

