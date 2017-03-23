#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QWidget>
#include "savingsaccount.h"
#include "checkingaccount.h"

class MainWindow : public QWidget
{
    Q_OBJECT

private:

public slots: //will be needed to give buttons functionality.
    void savingsButtonClicked(SavingsAccount savAcct);
    //void checkingButtonClicked();
    //void transferFundsButtonClicked();
    //void transHistoryButtonClicked();

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();
};

#endif // MAINWINDOW_H
