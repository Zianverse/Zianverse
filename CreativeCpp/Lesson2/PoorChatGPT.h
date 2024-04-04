#pragma once
#include "Creative/CreativeLesson.h"

class PoorChatGPT : public CreativeLesson
{
public:
	// Inherited via LessonBase
	std::string LessonName() override;
	void Start() override;
};

