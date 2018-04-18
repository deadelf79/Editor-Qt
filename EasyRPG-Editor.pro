lessThan(QT_MAJOR_VERSION, 5): error("Qt 5 required")

QT       += core gui multimedia concurrent widgets
win32:QT += winextras

win32:TARGET = EasyRPG-Editor
TEMPLATE = app

SOURCES += src/mainwindow.cpp \
    src/main.cpp \
    src/dialogresourcemanager.cpp \
    src/dialogdatabase.cpp \
    src/dialogimportimage.cpp \
    src/dialognewproject.cpp \
    src/gamecharacter.cpp \
    src/dialogopenproject.cpp \
    src/musicplayer.cpp \
    src/volumebutton.cpp \
    src/core.cpp \
    src/dialogimportproject.cpp \
    src/dialogrtppath.cpp \
    src/dialogrungame.cpp \
    src/tools/qundodraw.cpp \
    src/dialogevent.cpp \
    src/dialogsearch.cpp \
    src/dialogmapproperties.cpp \
    src/tools/qundoevent.cpp \
    src/dialogcharapicker.cpp \
    src/dialogsplash.cpp \
    src/tools/qeventpagewidget.cpp \
    src/tools/qgraphicscharaitem.cpp \
    src/tools/qgraphicsimportitem.cpp \
    src/tools/qgraphicsmapscene.cpp \
    src/tools/qgraphicspaletescene.cpp \
    src/tools/qgraphicspickerscene.cpp \
    src/tools/qdbpageactors.cpp \
    src/tools/qgraphicsfaceitem.cpp \
    src/dialogfacepicker.cpp \
    src/tools/qgraphicsbattleanimationitem.cpp \
    src/tools/qdbpageclasses.cpp \
    src/tools/qdbpageskills.cpp \
    src/tools/qdbpageitems.cpp \
    src/tools/qdbpageenemies.cpp \
    src/tools/qdbpageenemygroups.cpp \
    src/tools/qdbpageherostatus.cpp \
    src/tools/qdbpagebattleanimations.cpp \
    src/tools/qdbpagebattleanimations2.cpp \
    src/tools/qdbpagebattlescreen.cpp \
    src/tools/qdbpageterrain.cpp \
    src/tools/qdbpagechipset.cpp \
    src/tools/qdbpagevocabulary.cpp \
    src/tools/qdbpagesystem.cpp \
    src/tools/qdbpagesystem2.cpp \
    src/tools/qdbpagecommonevents.cpp \
    src/tools/qdbpageattributes.cpp \
    src/tools/qgraphicscurveitem.cpp \
    src/tools/qactordelegate.cpp \
    src/tools/qencounterdelegate.cpp \
    src/stringizer.cpp \
    src/dialogedit.cpp \
    src/commands/changemoney.cpp \
    src/commands/changeparty.cpp \
    src/commands/changeitem.cpp \
    src/commands/changeexperience.cpp \
    src/commands/messageoptions.cpp \
    src/commands/showmessage.cpp \
    src/commands/facegraphics.cpp \
    src/commands/inputnumber.cpp \
    src/commands/showchoices.cpp \
    src/commands/switchoperations.cpp \
    src/commands/variableoperations.cpp \
    src/dialogabout.cpp \
    src/dialoglocalizationeditor.cpp \
    src/commands/changeexperience.cpp \
    src/commands/changeitem.cpp \
    src/commands/changemoney.cpp \
    src/commands/changeparty.cpp \
    src/commands/facegraphics.cpp \
    src/commands/inputnumber.cpp \
    src/commands/messageoptions.cpp \
    src/commands/showchoices.cpp \
    src/commands/showmessage.cpp \
    src/commands/switchoperations.cpp \
    src/commands/variableoperations.cpp \
    src/liblcf/src/generated/ldb_actor.cpp \
    src/liblcf/src/generated/ldb_animation.cpp \
    src/liblcf/src/generated/ldb_animationcelldata.cpp \
    src/liblcf/src/generated/ldb_animationframe.cpp \
    src/liblcf/src/generated/ldb_animationtiming.cpp \
    src/liblcf/src/generated/ldb_attribute.cpp \
    src/liblcf/src/generated/ldb_battlecommand.cpp \
    src/liblcf/src/generated/ldb_battlecommands.cpp \
    src/liblcf/src/generated/ldb_battleranimation.cpp \
    src/liblcf/src/generated/ldb_battleranimationdata.cpp \
    src/liblcf/src/generated/ldb_battleranimationextension.cpp \
    src/liblcf/src/generated/ldb_chipset.cpp \
    src/liblcf/src/generated/ldb_class.cpp \
    src/liblcf/src/generated/ldb_commonevent.cpp \
    src/liblcf/src/generated/ldb_database.cpp \
    src/liblcf/src/generated/ldb_enemy.cpp \
    src/liblcf/src/generated/ldb_enemyaction.cpp \
    src/liblcf/src/generated/ldb_item.cpp \
    src/liblcf/src/generated/ldb_itemanimation.cpp \
    src/liblcf/src/generated/ldb_learning.cpp \
    src/liblcf/src/generated/ldb_music.cpp \
    src/liblcf/src/generated/ldb_skill.cpp \
    src/liblcf/src/generated/ldb_sound.cpp \
    src/liblcf/src/generated/ldb_state.cpp \
    src/liblcf/src/generated/ldb_switch.cpp \
    src/liblcf/src/generated/ldb_system.cpp \
    src/liblcf/src/generated/ldb_terms.cpp \
    src/liblcf/src/generated/ldb_terrain.cpp \
    src/liblcf/src/generated/ldb_terrain_flags.cpp \
    src/liblcf/src/generated/ldb_testbattler.cpp \
    src/liblcf/src/generated/ldb_troop.cpp \
    src/liblcf/src/generated/ldb_troopmember.cpp \
    src/liblcf/src/generated/ldb_trooppage.cpp \
    src/liblcf/src/generated/ldb_trooppagecondition.cpp \
    src/liblcf/src/generated/ldb_trooppagecondition_flags.cpp \
    src/liblcf/src/generated/ldb_variable.cpp \
    src/liblcf/src/generated/lmt_encounter.cpp \
    src/liblcf/src/generated/lmt_mapinfo.cpp \
    src/liblcf/src/generated/lmt_start.cpp \
    src/liblcf/src/generated/lmu_event.cpp \
    src/liblcf/src/generated/lmu_eventpage.cpp \
    src/liblcf/src/generated/lmu_eventpagecondition.cpp \
    src/liblcf/src/generated/lmu_eventpagecondition_flags.cpp \
    src/liblcf/src/generated/lmu_map.cpp \
    src/liblcf/src/generated/lmu_moveroute.cpp \
    src/liblcf/src/generated/lsd_save.cpp \
    src/liblcf/src/generated/lsd_saveactor.cpp \
    src/liblcf/src/generated/lsd_savecommonevent.cpp \
    src/liblcf/src/generated/lsd_saveeventcommands.cpp \
    src/liblcf/src/generated/lsd_saveeventdata.cpp \
    src/liblcf/src/generated/lsd_saveinventory.cpp \
    src/liblcf/src/generated/lsd_savemapevent.cpp \
    src/liblcf/src/generated/lsd_savemapinfo.cpp \
    src/liblcf/src/generated/lsd_savepartylocation.cpp \
    src/liblcf/src/generated/lsd_savepicture.cpp \
    src/liblcf/src/generated/lsd_savepicture_flags.cpp \
    src/liblcf/src/generated/lsd_savescreen.cpp \
    src/liblcf/src/generated/lsd_savesystem.cpp \
    src/liblcf/src/generated/lsd_savetarget.cpp \
    src/liblcf/src/generated/lsd_savetitle.cpp \
    src/liblcf/src/generated/lsd_savevehiclelocation.cpp \
    src/liblcf/src/generated/rpg_chipset.cpp \
    src/liblcf/src/generated/rpg_mapinfo.cpp \
    src/liblcf/src/data.cpp \
    src/liblcf/src/ini.cpp \
    src/liblcf/src/inireader.cpp \
    src/liblcf/src/ldb_equipment.cpp \
    src/liblcf/src/ldb_eventcommand.cpp \
    src/liblcf/src/ldb_parameters.cpp \
    src/liblcf/src/ldb_reader.cpp \
    src/liblcf/src/lmt_reader.cpp \
    src/liblcf/src/lmt_rect.cpp \
    src/liblcf/src/lmt_treemap.cpp \
    src/liblcf/src/lmu_movecommand.cpp \
    src/liblcf/src/lmu_reader.cpp \
    src/liblcf/src/lsd_reader.cpp \
    src/liblcf/src/reader_flags.cpp \
    src/liblcf/src/reader_lcf.cpp \
    src/liblcf/src/reader_struct.cpp \
    src/liblcf/src/reader_util.cpp \
    src/liblcf/src/reader_xml.cpp \
    src/liblcf/src/rpg_fixup.cpp \
    src/liblcf/src/rpg_setup.cpp \
    src/liblcf/src/writer_lcf.cpp \
    src/liblcf/src/writer_xml.cpp \
    src/liblcf/tests/test_main.cpp \
    src/liblcf/tests/time_stamp.cpp \
    src/tools/qactordelegate.cpp \
    src/tools/qdbpageactors.cpp \
    src/tools/qdbpageattributes.cpp \
    src/tools/qdbpagebattleanimations.cpp \
    src/tools/qdbpagebattleanimations2.cpp \
    src/tools/qdbpagebattlescreen.cpp \
    src/tools/qdbpagechipset.cpp \
    src/tools/qdbpageclasses.cpp \
    src/tools/qdbpagecommonevents.cpp \
    src/tools/qdbpageenemies.cpp \
    src/tools/qdbpageenemygroups.cpp \
    src/tools/qdbpageherostatus.cpp \
    src/tools/qdbpageitems.cpp \
    src/tools/qdbpageskills.cpp \
    src/tools/qdbpagesystem.cpp \
    src/tools/qdbpagesystem2.cpp \
    src/tools/qdbpageterrain.cpp \
    src/tools/qdbpagevocabulary.cpp \
    src/tools/qencounterdelegate.cpp \
    src/tools/qeventpagewidget.cpp \
    src/tools/qgraphicsbattleanimationitem.cpp \
    src/tools/qgraphicscharaitem.cpp \
    src/tools/qgraphicscurveitem.cpp \
    src/tools/qgraphicsfaceitem.cpp \
    src/tools/qgraphicsimportitem.cpp \
    src/tools/qgraphicsmapscene.cpp \
    src/tools/qgraphicspaletescene.cpp \
    src/tools/qgraphicspickerscene.cpp \
    src/tools/qundodraw.cpp \
    src/tools/qundoevent.cpp \
    src/core.cpp \
    src/dialogabout.cpp \
    src/dialogcharapicker.cpp \
    src/dialogdatabase.cpp \
    src/dialogedit.cpp \
    src/dialogevent.cpp \
    src/dialogfacepicker.cpp \
    src/dialogimportimage.cpp \
    src/dialogimportproject.cpp \
    src/dialoglocalizationeditor.cpp \
    src/dialogmapproperties.cpp \
    src/dialognewproject.cpp \
    src/dialogopenproject.cpp \
    src/dialogresourcemanager.cpp \
    src/dialogrtppath.cpp \
    src/dialogrungame.cpp \
    src/dialogsearch.cpp \
    src/dialogsplash.cpp \
    src/gamecharacter.cpp \
    src/main.cpp \
    src/mainwindow.cpp \
    src/musicplayer.cpp \
    src/stringizer.cpp \
    src/volumebutton.cpp

HEADERS  += src/mainwindow.h \
    src/dialogresourcemanager.h \
    src/dialogdatabase.h \
    src/gamecharacter.h \
    src/dialogimportimage.h \
    src/dialognewproject.h \
    src/dialogopenproject.h \
    src/musicplayer.h \
    src/volumebutton.h \
    src/core.h \
    src/dialogimportproject.h \
    src/dialogrtppath.h \
    src/dialogrungame.h \
    src/tools/qundodraw.h \
    src/dialogmapproperties.h \
    src/dialogevent.h \
    src/tools/qundoevent.h \
    src/dialogcharapicker.h \
    src/dialogsearch.h \
    src/dialogsplash.h \
    src/tools/qeventpagewidget.h \
    src/tools/qgraphicscharaitem.h \
    src/tools/qgraphicsimportitem.h \
    src/tools/qgraphicsmapscene.h \
    src/tools/qgraphicspaletescene.h \
    src/tools/qgraphicspickerscene.h \
    src/tools/qdbpageactors.h \
    src/tools/qgraphicsfaceitem.h \
    src/dialogfacepicker.h \
    src/tools/qgraphicsbattleanimationitem.h \
    src/tools/qdbpageclasses.h \
    src/tools/qdbpageskills.h \
    src/tools/qdbpageitems.h \
    src/tools/qdbpageenemies.h \
    src/tools/qdbpageenemygroups.h \
    src/tools/qdbpageherostatus.h \
    src/tools/qdbpagebattleanimations.h \
    src/tools/qdbpagebattleanimations2.h \
    src/tools/qdbpagebattlescreen.h \
    src/tools/qdbpageterrain.h \
    src/tools/qdbpagechipset.h \
    src/tools/qdbpagevocabulary.h \
    src/tools/qdbpagesystem.h \
    src/tools/qdbpagesystem2.h \
    src/tools/qdbpagecommonevents.h \
    src/tools/qdbpageattributes.h \
    src/tools/qgraphicscurveitem.h \
    src/tools/qactordelegate.h \
    src/tools/qencounterdelegate.h \
    src/stringizer.h \
    src/dialogedit.h \
    src/tools/rpgmodel.h \
    src/tools/rpgcombobox.h \
    src/commands/changemoney.h \
    src/commands/changeparty.h \
    src/commands/changeitem.h \
    src/commands/changeexperience.h \
    src/commands/messageoptions.h \
    src/commands/showmessage.h \
    src/commands/facegraphics.h \
    src/commands/inputnumber.h \
    src/commands/showchoices.h \
    src/commands/switchoperations.h \
    src/commands/variableoperations.h \
    src/commands/allcommands.h \
    src/dialogabout.h \
    src/dialoglocalizationeditor.h \
    src/commands/allcommands.h \
    src/commands/changeexperience.h \
    src/commands/changeitem.h \
    src/commands/changemoney.h \
    src/commands/changeparty.h \
    src/commands/facegraphics.h \
    src/commands/inputnumber.h \
    src/commands/messageoptions.h \
    src/commands/showchoices.h \
    src/commands/showmessage.h \
    src/commands/switchoperations.h \
    src/commands/variableoperations.h \
    src/liblcf/src/boost/preprocessor/config/config.hpp \
    src/liblcf/src/boost/preprocessor/cat.hpp \
    src/liblcf/src/boost/preprocessor/stringize.hpp \
    src/liblcf/src/generated/ldb_chunks.h \
    src/liblcf/src/generated/lmt_chunks.h \
    src/liblcf/src/generated/lmu_chunks.h \
    src/liblcf/src/generated/lsd_chunks.h \
    src/liblcf/src/generated/rpg_actor.h \
    src/liblcf/src/generated/rpg_animation.h \
    src/liblcf/src/generated/rpg_animationcelldata.h \
    src/liblcf/src/generated/rpg_animationframe.h \
    src/liblcf/src/generated/rpg_animationtiming.h \
    src/liblcf/src/generated/rpg_attribute.h \
    src/liblcf/src/generated/rpg_battlecommand.h \
    src/liblcf/src/generated/rpg_battlecommands.h \
    src/liblcf/src/generated/rpg_battleranimation.h \
    src/liblcf/src/generated/rpg_battleranimationdata.h \
    src/liblcf/src/generated/rpg_battleranimationextension.h \
    src/liblcf/src/generated/rpg_chipset.h \
    src/liblcf/src/generated/rpg_class.h \
    src/liblcf/src/generated/rpg_commonevent.h \
    src/liblcf/src/generated/rpg_database.h \
    src/liblcf/src/generated/rpg_encounter.h \
    src/liblcf/src/generated/rpg_enemy.h \
    src/liblcf/src/generated/rpg_enemyaction.h \
    src/liblcf/src/generated/rpg_equipment.h \
    src/liblcf/src/generated/rpg_event.h \
    src/liblcf/src/generated/rpg_eventcommand.h \
    src/liblcf/src/generated/rpg_eventpage.h \
    src/liblcf/src/generated/rpg_eventpagecondition.h \
    src/liblcf/src/generated/rpg_item.h \
    src/liblcf/src/generated/rpg_itemanimation.h \
    src/liblcf/src/generated/rpg_learning.h \
    src/liblcf/src/generated/rpg_map.h \
    src/liblcf/src/generated/rpg_mapinfo.h \
    src/liblcf/src/generated/rpg_movecommand.h \
    src/liblcf/src/generated/rpg_moveroute.h \
    src/liblcf/src/generated/rpg_music.h \
    src/liblcf/src/generated/rpg_parameters.h \
    src/liblcf/src/generated/rpg_rect.h \
    src/liblcf/src/generated/rpg_save.h \
    src/liblcf/src/generated/rpg_saveactor.h \
    src/liblcf/src/generated/rpg_savecommonevent.h \
    src/liblcf/src/generated/rpg_saveeventcommands.h \
    src/liblcf/src/generated/rpg_saveeventdata.h \
    src/liblcf/src/generated/rpg_saveinventory.h \
    src/liblcf/src/generated/rpg_savemapevent.h \
    src/liblcf/src/generated/rpg_savemapinfo.h \
    src/liblcf/src/generated/rpg_savepartylocation.h \
    src/liblcf/src/generated/rpg_savepicture.h \
    src/liblcf/src/generated/rpg_savescreen.h \
    src/liblcf/src/generated/rpg_savesystem.h \
    src/liblcf/src/generated/rpg_savetarget.h \
    src/liblcf/src/generated/rpg_savetitle.h \
    src/liblcf/src/generated/rpg_savevehiclelocation.h \
    src/liblcf/src/generated/rpg_skill.h \
    src/liblcf/src/generated/rpg_sound.h \
    src/liblcf/src/generated/rpg_start.h \
    src/liblcf/src/generated/rpg_state.h \
    src/liblcf/src/generated/rpg_switch.h \
    src/liblcf/src/generated/rpg_system.h \
    src/liblcf/src/generated/rpg_terms.h \
    src/liblcf/src/generated/rpg_terrain.h \
    src/liblcf/src/generated/rpg_testbattler.h \
    src/liblcf/src/generated/rpg_treemap.h \
    src/liblcf/src/generated/rpg_troop.h \
    src/liblcf/src/generated/rpg_troopmember.h \
    src/liblcf/src/generated/rpg_trooppage.h \
    src/liblcf/src/generated/rpg_trooppagecondition.h \
    src/liblcf/src/generated/rpg_variable.h \
    src/liblcf/src/command_codes.h \
    src/liblcf/src/data.h \
    src/liblcf/src/ini.h \
    src/liblcf/src/inireader.h \
    src/liblcf/src/lcf_options.h \
    src/liblcf/src/ldb_reader.h \
    src/liblcf/src/lmt_reader.h \
    src/liblcf/src/lmu_reader.h \
    src/liblcf/src/lsd_reader.h \
    src/liblcf/src/reader_lcf.h \
    src/liblcf/src/reader_struct.h \
    src/liblcf/src/reader_types.h \
    src/liblcf/src/reader_util.h \
    src/liblcf/src/reader_xml.h \
    src/liblcf/src/writer_lcf.h \
    src/liblcf/src/writer_xml.h \
    src/liblcf/tests/doctest.h \
    src/tools/qactordelegate.h \
    src/tools/qdbpageactors.h \
    src/tools/qdbpageattributes.h \
    src/tools/qdbpagebattleanimations.h \
    src/tools/qdbpagebattleanimations2.h \
    src/tools/qdbpagebattlescreen.h \
    src/tools/qdbpagechipset.h \
    src/tools/qdbpageclasses.h \
    src/tools/qdbpagecommonevents.h \
    src/tools/qdbpageenemies.h \
    src/tools/qdbpageenemygroups.h \
    src/tools/qdbpageherostatus.h \
    src/tools/qdbpageitems.h \
    src/tools/qdbpageskills.h \
    src/tools/qdbpagesystem.h \
    src/tools/qdbpagesystem2.h \
    src/tools/qdbpageterrain.h \
    src/tools/qdbpagevocabulary.h \
    src/tools/qencounterdelegate.h \
    src/tools/qeventpagewidget.h \
    src/tools/qgraphicsbattleanimationitem.h \
    src/tools/qgraphicscharaitem.h \
    src/tools/qgraphicscurveitem.h \
    src/tools/qgraphicsfaceitem.h \
    src/tools/qgraphicsimportitem.h \
    src/tools/qgraphicsmapscene.h \
    src/tools/qgraphicspaletescene.h \
    src/tools/qgraphicspickerscene.h \
    src/tools/qundodraw.h \
    src/tools/qundoevent.h \
    src/tools/rpgcombobox.h \
    src/tools/rpgmodel.h \
    src/core.h \
    src/dialogabout.h \
    src/dialogcharapicker.h \
    src/dialogdatabase.h \
    src/dialogedit.h \
    src/dialogevent.h \
    src/dialogfacepicker.h \
    src/dialogimportimage.h \
    src/dialogimportproject.h \
    src/dialoglocalizationeditor.h \
    src/dialogmapproperties.h \
    src/dialognewproject.h \
    src/dialogopenproject.h \
    src/dialogresourcemanager.h \
    src/dialogrtppath.h \
    src/dialogrungame.h \
    src/dialogsearch.h \
    src/dialogsplash.h \
    src/gamecharacter.h \
    src/mainwindow.h \
    src/musicplayer.h \
    src/stringizer.h \
    src/volumebutton.h

FORMS    += src/mainwindow.ui \
    src/dialogresourcemanager.ui \
    src/dialogdatabase.ui \
    src/dialogimportimage.ui \
    src/dialognewproject.ui \
    src/dialogopenproject.ui \
    src/dialogimportproject.ui \
    src/dialogsearch.ui \
    src/dialogrtppath.ui \
    src/dialogrungame.ui \
    src/dialogmapproperties.ui \
    src/dialogevent.ui \
    src/dialogcharapicker.ui \
    src/dialogsplash.ui \
    src/dialogedit.ui \
    src/tools/qeventpagewidget.ui \
    src/tools/qdbpageactors.ui \
    src/tools/qdbpageclasses.ui \
    src/tools/qdbpageskills.ui \
    src/tools/qdbpageitems.ui \
    src/tools/qdbpageenemies.ui \
    src/tools/qdbpageenemygroups.ui \
    src/tools/qdbpageherostatus.ui \
    src/tools/qdbpagebattleanimations.ui \
    src/tools/qdbpagebattleanimations2.ui \
    src/tools/qdbpagebattlescreen.ui \
    src/tools/qdbpageterrain.ui \
    src/tools/qdbpagechipset.ui \
    src/tools/qdbpagevocabulary.ui \
    src/tools/qdbpagesystem.ui \
    src/tools/qdbpagesystem2.ui \
    src/tools/qdbpagecommonevents.ui \
    src/tools/qdbpageattributes.ui \
    src/commands/changemoney.ui \
    src/commands/changeparty.ui \
    src/commands/changeitem.ui \
    src/commands/changeexperience.ui \
    src/commands/messageoptions.ui \
    src/commands/showmessage.ui \
    src/commands/facegraphics.ui \
    src/commands/inputnumber.ui \
    src/commands/switchoperations.ui \
    src/commands/variableoperations.ui \
    src/commands/showchoices.ui \
    src/dialogabout.ui \
    src/dialogaboutqt.ui \
    src/dialoglocalizationeditor.ui \
    src/dialogaboutqt.ui

RESOURCES += \
    src/Resources.qrc

RC_FILE = src/Resources.rc


DESTDIR = bin

CONFIG(debug, debug|release) TARGET = EasyRPG-EditorD

CONFIG += c++11

win32 {
    INCLUDEPATH += $$PWD/libs/liblcf/src
    DEPENDPATH += $$PWD/libs/liblcf/src
    INCLUDEPATH += $$PWD/libs/liblcf/src/generated
    DEPENDPATH += $$PWD/libs/liblcf/src/generated
    INCLUDEPATH += $$(EASYDEV_MSVC)/include
    DEPENDPATH += $$(EASYDEV_MSVC)/include

    LIBS += Advapi32.lib

    CONFIG(debug, debug|release) {
	!contains(QMAKE_HOST.arch, x86_64) {
	    LIBS += -L$$(EASYDEV_MSVC)/lib/x86/Debug -llibexpat
	    LIBS += -lsicudtd -lsicuucd -lsicuind -lliblcf
	} else {
	    LIBS += -L$$(EASYDEV_MSVC)/lib/amd64/Debug -llibexpat
	    LIBS += -lsicudtd -lsicuucd -lsicuind -lliblcf
	}
    }
    CONFIG(release, debug|release) {
	!contains(QMAKE_HOST.arch, x86_64) {
	    LIBS += -L$$(EASYDEV_MSVC)/lib/x86/Release -llibexpat
	    LIBS += -lsicudt -lsicuuc -lsicuin -lliblcf
	} else {
	    LIBS += -L$$(EASYDEV_MSVC)/lib/amd64/Release -llibexpat
	    LIBS += -lsicudt -lsicuuc -lsicuin -lliblcf
	}
    }

    QMAKE_LFLAGS_RELEASE = /LTCG
}

unix {
    TARGET = easyrpg-editor
    QMAKE_CXXFLAGS += -Wall -Wextra -pedantic
    QMAKE_CXXFLAGS_DEBUG += -O0 -g3
    CONFIG += link_pkgconfig silent
    PKGCONFIG += liblcf
}

