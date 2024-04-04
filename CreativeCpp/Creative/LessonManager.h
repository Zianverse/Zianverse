#pragma once
#include <vector>
#include <memory>

#include "CreativeLesson.h"

class LessonManager
{
public:
	LessonManager();
	~LessonManager();

public:
	void Start();

private:
	void PrintLessons();
	int GetLessonIndexToStart();
	void StartLesson(int lessonIndex);

private:
	std::vector<std::unique_ptr<CreativeLesson>> _lessons;
};

