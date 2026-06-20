#include "mylabelfilter.h"
#include "mainwindow.h"
#include <QLabel>

MyLabelFilter::MyLabelFilter(QObject* parent) : QObject(parent) {}

bool MyLabelFilter::eventFilter(QObject* watched, QEvent* event)  {

    MainWindow* mainWindow = qobject_cast<MainWindow*>(this->parent());

    if (event->type() == QEvent::MouseButtonPress) {

        QMouseEvent* mouseEvent = static_cast<QMouseEvent*>(event);
        if (mouseEvent->button() == Qt::LeftButton) {

            if (mainWindow->getAkcjaProbnik()->isChecked()) {

                mainWindow->onProbnikAktywacja();
            }
        }
    }

    return QObject::eventFilter(watched, event);
}