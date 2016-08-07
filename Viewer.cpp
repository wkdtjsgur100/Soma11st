#include "Viewer.h"

void Button::onPressCallback()
{
	//버튼을 누르고 있을때의 callback 함수
}

void Button::onUpCallback()
{
	//버튼을 땠을 때의 callback 함수
}

void Button::onDownCallback()
{
	//버튼을 누를 때의 callback 함수
}

void ListViewer::setAdapter(const ListViewerAdapter * adapter)
{
}

void ImageViewer::setImage(const Image * img)
{
}

void Image::loadImage(std::string path)
{
}

void TopDownMenuViewer::addButton(Button * button)
{
}

void TopDownMenuViewer::removeButton(Button * target)
{
}

void TopDownMenuViewer::buttonOnPressCallback(Button * target, int button_index)
{
}

void TopDownMenuViewer::buttonOnUpCallback(Button * target, int button_index)
{
}

void TopDownMenuViewer::buttonOnDownCallback(Button * target, int button_index)
{
}
