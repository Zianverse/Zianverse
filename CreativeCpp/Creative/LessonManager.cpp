#include "LessonManager.h"

#include "Lesson0/HelloWorld.h"
#include "Lesson2/PoorChatGPT.h"

#include <iostream>

using namespace std;

LessonManager::LessonManager()
{
	_lessons.push_back(std::unique_ptr<HelloWorld>(new HelloWorld()));
	_lessons.push_back(std::unique_ptr<PoorChatGPT>(new PoorChatGPT()));
}

LessonManager::~LessonManager()
{
}

void LessonManager::Start()
{
	while (true)
	{
		PrintLessons();
		int lessonIndex = GetLessonIndexToStart();
		if (lessonIndex < 0)
		{
			cout << "�γ̽������ټ���" << endl;
			break;
		}
		StartLesson(lessonIndex);
	}
	int c = getchar();
}

void LessonManager::PrintLessons()
{
	cout << "\r\n\r\n�������пγ��б�" << endl;
	for (size_t i = 0; i < _lessons.size(); i++)
	{
		CreativeLesson& lesson = *_lessons[i];
		cout << i << ": " << lesson.LessonName() << endl;
	}
}

int LessonManager::GetLessonIndexToStart()
{
	cout << "\r\n����������Ҫ���еĿγ����: " << endl;
	int lessonIndex;
	cin >> lessonIndex;
	return lessonIndex;
}

void LessonManager::StartLesson(int lessonIndex)
{
	if (lessonIndex < 0 || lessonIndex >= _lessons.size())
		return;

	CreativeLesson& lesson = *_lessons[lessonIndex];
	cout << "\r\n\r\n�γ�" << lessonIndex << ": ��" << lesson.LessonName() << "����ʼ���У�" << endl;
	lesson.Start();
}
