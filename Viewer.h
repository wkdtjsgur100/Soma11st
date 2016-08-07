#pragma once

/*
	� Ư���� �����͵��� �����ִ� Viewer���� �����մϴ�.
*/
#include<vector>

struct GraphicInstance
{
};

class Button
{
public:
	void onPressCallback();
	void onUpCallback();
	void onDownCallback();
};
class Viewer
{
	GraphicInstance graphic_instance;
	int width;
	int height;
public:

};

class TopDownMenuViewer : public Viewer
{
	std::vector<Button*> buttons;
public:
	void addButton(Button* button);
	void removeButton(Button* target);

	//��ư �ݹ��Լ�
	virtual void buttonOnPressCallback(Button* target, int button_index);
	virtual void buttonOnUpCallback(Button* target, int button_index);
	virtual void buttonOnDownCallback(Button* target, int button_index);
};

class ListViewerAdapter
{
	//Adapter�������� ����
};

class ListViewer : public Viewer
{
public:
	//java�� ListView�� ������ ������� ����
	void setAdapter(const ListViewerAdapter* adapter);
};

class Image
{
	int width, height;
	std::string path;
	float size;
public:
	void loadImage(std::string path);
};

class ImageViewer : public Viewer
{
	Image* img;
public:
	void setImage(const Image* img);
};