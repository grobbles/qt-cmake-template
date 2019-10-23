
#pragma once

#include <QObject>

using namespace std;

class SlotExample : public QObject {
    Q_OBJECT

  public:
    SlotExample();

    int value();

  public slots:
    void setValue(int value);

  signals:
    void valueChanged(int newValue);

  private:
    int m_value;
};
