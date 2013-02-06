/*********************************************************************
**  KaJe 2012                                                       **
**                                                                  **
**  Vytvořen: po 31.12.2012 08:28:05                                **
**                                                                  **
**  Posledni upravy: Út 05.úno.2013 08:39:09                        **
*********************************************************************/

#include <QtGui>

#include "monatform.h"
#include "kjsyslog.h"
#include "sqlengine.h"

#include "mainform.h"

SqlEngine *sqle;

KjSysLog syslog;

MainForm::MainForm() : QMainWindow() {
	setupUi(this);

	QString ver = QString("$build v1.0.8$");
	ver.replace("$"," ").replace("build"," ");
	setWindowTitle(QString("%1 %2 ").arg("Kalendář").arg(ver.trimmed()));
	setWindowIcon(QIcon(":img/kalendar.jpg"));

	m_rootDir = QCoreApplication::applicationDirPath()+"/";
	syslog.open(m_rootDir + "kalendar.log");		
	sqle = new SqlEngine("KalODBC","servercon","QODBC");
	if (sqle->isOpen()) {
		MonatForm* mf = new MonatForm(this);
		mf->updateTable();
		setCentralWidget(mf);
	};//if
}

//------------------------------------------------------------------------------------------------- 

MainForm::~MainForm() {
}

//------------------------------------------------------------------------------------------------- 
 
