/*********************************************************************
**  KaJe 2012                                                       **
**                                                                  **
**  Vytvořen: po 31.12.2012 08:28:05                                **
**                                                                  **
**  Posledni upravy: Út 05.úno.2013 08:29:35                        **
*********************************************************************/

#ifndef MAINFORM_H
#define MAINFORM_H

#include <QMainWindow>
	
#include "obj/ui_mainform.h"
	
class QAction;
class QLabel;
	
class MainForm : public QMainWindow, private Ui_MainWindow {
	Q_OBJECT
private:
	QString m_rootDir;
	
public:
	MainForm();
	~MainForm();
	
};
	
#endif
	
