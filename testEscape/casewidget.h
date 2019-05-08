#ifndef CASEWIDGET_H
#define CASEWIDGET_H

#include <QGraphicsView>
#include <QColor>
#include <QBrush>

class CaseWidget : public QGraphicsView
{
    Q_OBJECT
private:

    QGraphicsScene * scene_;
    QColor color_;
    bool revealed_=false;
public:
    explicit CaseWidget(QWidget *parent = nullptr);
    void clear();
    void revealColor();
    void attributeColor(QColor color);
    bool isRevealed(){return revealed_;}

signals:

public slots:
};

#endif // CASEWIDGET_H

