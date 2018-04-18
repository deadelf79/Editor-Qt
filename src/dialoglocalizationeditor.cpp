#include "dialoglocalizationeditor.h"
#include "ui_dialoglocalizationeditor.h"

DialogLocalizationEditor::DialogLocalizationEditor(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogLocalizationEditor)
{
    ui->setupUi(this);
}

DialogLocalizationEditor::~DialogLocalizationEditor()
{
    delete ui;
}

void DialogLocalizationEditor::on_pushButton_clicked()
{
    // if no selection then return
    // if has selection then add
}

void DialogLocalizationEditor::on_tableWidget_itemSelectionChanged()
{
    ui->buttonEditRow->setEnabled(true);
    ui->comboSetMark->setEnabled(true);
}
