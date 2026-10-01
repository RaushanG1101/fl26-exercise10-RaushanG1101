// widget_events.cpp

#include "widget_events.hpp"

#include <QEvent>
#include <iostream>

WidgetEvent::WidgetEvent(QWidget *parent)
    : QWidget(parent)
{
    setWindowTitle("Exercise 10 - Events");
    resize(400, 300);
}

bool WidgetEvent::event(QEvent *event)
{
    std::cout << "Event type: "
              << static_cast<int>(event->type())
              << std::endl;

    return true;
}