/*********************************************************************
**  KaJe 2012                                                       **
**                                                                  **
**  Vytvořen: po 31.12.2012 08:28:05                                **
**                                                                  **
**  Posledni upravy: St 06.úno.2013 09:01:26                        **
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

	QString ver = QString("$build v1.1.1$");
	ver.replace("$"," ").replace("build"," ");
	setWindowTitle(QString("%1 %2 ").arg().arg(ver.trimmed()));
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
 
