#ifndef SCREEN5_2VIEW_HPP
#define SCREEN5_2VIEW_HPP

#include <gui_generated/screen5_2_screen/Screen5_2ViewBase.hpp>
#include <gui/screen5_2_screen/Screen5_2Presenter.hpp>

class Screen5_2View : public Screen5_2ViewBase
{
public:
    Screen5_2View();
    virtual ~Screen5_2View() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // SCREEN5_2VIEW_HPP
