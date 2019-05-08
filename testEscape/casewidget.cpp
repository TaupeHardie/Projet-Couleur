#include "casewidget.h"

CaseWidget::CaseWidget(QWidget *parent) : QGraphicsView(parent)
{
    scene_ = new QGraphicsScene;
    scene_->setSceneRect(0,0,168,168);
    setScene(scene_);
    clear();
}

void CaseWidget::clear()
{
    scene_->clear();
    scene_->setBackgroundBrush(Qt::white);
    revealed_=false;
}

void CaseWidget::revealColor()
{
    scene_->setBackgroundBrush(color_);
    revealed_=true;
}

void CaseWidget::attributeColor(QColor color)
{
    color_=color;
}


