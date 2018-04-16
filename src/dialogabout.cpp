#include "dialogabout.h"
#include "ui_dialogabout.h"
#include <QStyle>

DialogAbout::DialogAbout(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogAbout)
{
    setModal(true);
    ui->setupUi(this);
}

DialogAbout::~DialogAbout()
{
    delete ui;
}
