#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "casewidget.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_actionRecommencer_triggered();

    void on_actionOuvrir_image_triggered();

private:
    Ui::MainWindow *ui;
    std::vector<CaseWidget*> code;
};

#endif // MAINWINDOW_H
