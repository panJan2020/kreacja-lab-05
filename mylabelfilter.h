#ifndef MYLABELFILTER_H
#define MYLABELFILTER_H

#include <QObject>
#include <QEvent>
#include <QMouseEvent>

class MyLabelFilter : public QObject {

    Q_OBJECT

protected:

    bool eventFilter(QObject* watched, QEvent* event) override;

public:

    explicit MyLabelFilter(QObject* parent = nullptr);
};

#endif // MYLABELFILTER_H
