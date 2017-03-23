#include "mainwindow.h"
#include "checkingaccount.h"
#include "savingsaccount.h"
#include <QApplication>
#include <QLineEdit>
#include <QPushButton>
#include <QWidget>
#include <QVBoxLayout>
#include <QLabel>

MainWindow::MainWindow(QWidget *parent) : QWidget(parent)
{
    //QWidget window;           //Created a Widget called window. Not need when outside of main.
    SavingsAccount savAcct(1555.42, "Savings", 123456, 3);


    QPushButton *button1 = new QPushButton("Checking");                          //Button One
    QPushButton *button2 = new QPushButton("Savings");                          //Button Two
    QPushButton *button3 = new QPushButton("Transfer Funds");                 //Button Three
    QPushButton *button4 = new QPushButton("Transaction History");          //Button Four

    QObject::connect(button1, SIGNAL(clicked()), SLOT(savingsButtonClicked(savAcct)));


    //QLineEdit *line1 = new QLineEdit();
    //QLineEdit *line2 = new QLineEdit();
    //QLineEdit *line3 = new QLineEdit();
    //QLineEdit *line4 = new QLineEdit();

    QLabel *savingsTotal = new QLabel("Savings Total: ");
    QLabel *checkingTotal = new QLabel("Checking Total: ");

    QVBoxLayout *layout = new QVBoxLayout;              //Created a Vertical Box Layout called layout

    layout->addWidget(button1);                         //Then I dropped all four buttons
    layout->addWidget(button2);                         //onto the vertical layout box.
    layout->addWidget(button3);
    layout->addWidget(button4);

    //layout->addWidget(line1);
    //layout->addWidget(line2);
    //layout->addWidget(line3);
    //layout->addWidget(line4);

    layout->addWidget(savingsTotal);
    layout->addWidget(checkingTotal);

    setLayout(layout);
    //window.setLayout(layout);                            //Finally, pass layout through
    //window.show();
}

MainWindow::~MainWindow()
{
}

void MainWindow::savingsButtonClicked(SavingsAccount savAcct)
{
    QWidget savingsWindow;
    QLabel *showName = new QLabel();
    showName->setText(savAcct.getAccountName());
    QLabel *showAcctNumber = new QLabel();
    showAcctNumber->setNum(savAcct.getAccountNumber());
    QLabel *showTotal = new QLabel();
    showTotal->setNum(savAcct.getTotal());

    QVBoxLayout *layout = new QVBoxLayout;
    layout->addWidget(showName);
    layout->addWidget(showAcctNumber);
    layout->addWidget(showTotal);

    savingsWindow.setLayout(layout);
    savingsWindow.show();
}

//void MainWindow::checkingButtonClicked()
//{
//
//}
//
//void MainWindow::transferFundsButtonClicked()
//{
//
//}
//
//void MainWindow::transHistoryButtonClicked()
//{
//
//}
