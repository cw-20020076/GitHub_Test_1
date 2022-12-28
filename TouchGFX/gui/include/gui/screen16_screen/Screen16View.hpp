#ifndef SCREEN16VIEW_HPP
#define SCREEN16VIEW_HPP

#include <gui_generated/screen16_screen/Screen16ViewBase.hpp>
#include <gui/screen16_screen/Screen16Presenter.hpp>

class Screen16View : public Screen16ViewBase
{
public:
    Screen16View();
    virtual ~Screen16View() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // SCREEN16VIEW_HPP
