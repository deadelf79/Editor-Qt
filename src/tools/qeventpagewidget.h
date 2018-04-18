#ifndef QEVENTPAGEWIDGET_H
#define QEVENTPAGEWIDGET_H

#include <QWidget>
#include "../liblcf/src/generated/rpg_eventpage.h"
#include <QGraphicsPixmapItem>
#include <QGraphicsOpacityEffect>
#include <QGraphicsScene>
#include "../liblcf/src/generated/rpg_eventcommand.h"
#include "../liblcf/src/command_codes.h"
#include "qgraphicscharaitem.h"
#include "../dialogsplash.h"
#include <QProgressBar>
#include <QLabel>

namespace Ui {
class QEventWidget;
}

class QEventPageWidget : public QWidget
{
    Q_OBJECT

public:
    explicit QEventPageWidget(QWidget *parent = 0);
    ~QEventPageWidget();

    RPG::EventPage *eventPage() const;
    void setEventPage(RPG::EventPage *eventPage);

private slots:
    void on_comboMoveType_currentIndexChanged(int index);

    void on_checkSwitchA_toggled(bool checked);

    void on_checkSwitchB_toggled(bool checked);

    void on_checkVar_toggled(bool checked);

    void on_checkItem_toggled(bool checked);

    void on_comboVarOperation_currentIndexChanged(int index);

    void on_spinVarValue_valueChanged(int arg1);

    void on_comboItem_currentIndexChanged(int index);

    void on_comboHero_currentIndexChanged(int index);

    void on_checkHero_toggled(bool checked);

    void on_checkTimerA_toggled(bool checked);

    void on_spinTimerAMin_valueChanged(int arg1);

    void on_spinTimerASec_valueChanged(int arg1);

    void on_checkTimerB_toggled(bool checked);

    void on_spinTimerBMin_valueChanged(int arg1);

    void on_spinTimerBSec_valueChanged(int arg1);

    void on_checkTransparent_toggled(bool checked);

    void on_comboMoveSpeed_currentIndexChanged(int index);

    void on_comboCondition_currentIndexChanged(int index);

    void on_comboLayer_currentIndexChanged(int index);

    void on_checkOverlapForbidden_toggled(bool checked);

    void on_comboAnimationType_currentIndexChanged(int index);

    void on_comboMoveFrequency_currentIndexChanged(int index);

    void on_pushSetSprite_clicked();

    void on_treeCommands_doubleClicked(const QModelIndex &index);

private:

    void updateGraphic();

    Ui::QEventWidget *ui;
    RPG::EventPage *m_eventPage;
    QGraphicsPixmapItem *m_tileItem;
    QGraphicsCharaItem *m_charaItem;
    QGraphicsScene *m_scene;
    QGraphicsOpacityEffect *m_effect;
    int m_codeGen;
};

#endif // QEVENTPAGEWIDGET_H
