#include "Viewer.h"

void Button::onPressCallback()
{
	//��ư�� ������ �������� callback �Լ�
}

void Button::onUpCallback()
{
	//��ư�� ���� ���� callback �Լ�
}

void Button::onDownCallback()
{
	//��ư�� ���� ���� callback �Լ�
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
