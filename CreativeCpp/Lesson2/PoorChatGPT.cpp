#include "PoorChatGPT.h"
#include <iostream>
#include <string>

using namespace std;


string PoorChatGPT::LessonName()
{
	return "PoorChatGPT";
}

void PoorChatGPT::Start()
{
	string question;
	cout << "���� ���� ��ChatGPT,����������Ҫ�����" << endl;
	cin >> question;
	cout << "��˵���������ŵ�ChatGPT�������Ҳ�֪��[" + question + "]�Ĵ𰸡�";
}