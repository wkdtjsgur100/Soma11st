#pragma once

/*
	어떤 특정한 데이터들을 보여주는 Viewer들을 정의합니다.
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

	//버튼 콜백함수
	virtual void buttonOnPressCallback(Button* target, int button_index);
	virtual void buttonOnUpCallback(Button* target, int button_index);
	virtual void buttonOnDownCallback(Button* target, int button_index);
};

class ListViewerAdapter
{
	//Adapter패턴으로 설계
};

class ListViewer : public Viewer
{
public:
	//java의 ListView와 동일한 방식으로 설계
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