#ifndef DIALOGLOCALIZATIONEDITOR_H
#define DIALOGLOCALIZATIONEDITOR_H

#include <QDialog>

namespace Ui {
class DialogLocalizationEditor;
}

class DialogLocalizationEditor : public QDialog
{
    Q_OBJECT

public:
    explicit DialogLocalizationEditor(QWidget *parent = 0);
    ~DialogLocalizationEditor();

private slots:
    void on_pushButton_clicked();

    void on_tableWidget_itemSelectionChanged();

private:
    Ui::DialogLocalizationEditor *ui;
};

#endif // DIALOGLOCALIZATIONEDITOR_H
