#pragma once

#include "controlEntity.h"
#include "../element.h"

#include <QCheckBox>

class BooleanWidget : public QCheckBox, public ControlEntity
{
	Q_OBJECT
	public:
		BooleanWidget(Element *element, const QString &propertyName, QWidget *parent = 0);
		BooleanWidget* castToWidget() const;
	private:
		Element *element;
	private slots:
		void setNewValue(const bool value) const;
};