#pragma once
#include <iostream>
#include <vector>
#include <map>
#include"speaker.h"
#include<algorithm>
#include <deque>
#include <functional>
#include <numeric>
#include <string>
#include <fstream>
#include<ctime>

using namespace std;

//����ݽ�������
class SpeechManager
{
public:
	//���캯��
	SpeechManager();

	//��������
	~SpeechManager();

	//�˵�����
	void show_Menu();

	//�˳�ϵͳ
	void exitSystem();

	//��ʼ������
	void initSpeech();

	//����12��ѡ��
	void createSpeaker();

/*------------------��ʼ����-------------*/
// �����������̿��ƺ���
	void startSpeech();

	//��ǩ
	void speechDraw();

	//����
	void speechContest();

	//��ʾ�÷�
	void showScore();

	//�����¼
	void saveRecord();

	//���ؼ�¼
	void loadRecord();
/*-----------------------------------------*/

	//��ʾ�����¼
	void showRecord();

	//����ļ�
	void clearRecord();


/*------------------����-------------------*/
    //��Ա����
	//�����һ�ֱ���ѡ�ֱ�ŵ�����
	vector<int>v1;

	//��һ�ֽ���ѡ�ֱ��
	vector<int>v2;

	//ʤ��ǰ��λѡ�ֱ������
	vector<int>vVictory;

	//��ű���Լ���Ӧ����ѡ������
	map<int, Speaker>m_Speaker;

	//��������¼������
	map<int, vector<string>>m_Record;

	//��ű�������
	int m_Index;

	//�ж��ļ��Ƿ�Ϊ��
	bool fileIsEmpty;
/*-----------------------------------------*/

};