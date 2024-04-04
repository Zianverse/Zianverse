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
	cout << "我是 蹩脚 的ChatGPT,你有问题需要解答吗？" << endl;
	cin >> question;
	cout << "都说了我是蹩脚的ChatGPT，所以我不知道[" + question + "]的答案。";
}