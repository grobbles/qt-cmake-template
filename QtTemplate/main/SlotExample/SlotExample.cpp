#include "SlotExample.hpp"

SlotExample::SlotExample(){
     this->m_value = 0;
}


void SlotExample::setValue(int value)
{
    if (value != m_value) {
        m_value = value;
        emit valueChanged(value);
    }
}

 int SlotExample::value()  {
     return m_value;
 }
