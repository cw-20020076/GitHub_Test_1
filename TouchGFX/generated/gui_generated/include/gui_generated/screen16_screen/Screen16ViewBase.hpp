/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef SCREEN16VIEWBASE_HPP
#define SCREEN16VIEWBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/screen16_screen/Screen16Presenter.hpp>
#include <touchgfx/widgets/Box.hpp>
#include <touchgfx/widgets/Image.hpp>
#include <touchgfx/containers/buttons/Buttons.hpp>

class Screen16ViewBase : public touchgfx::View<Screen16Presenter>
{
public:
    Screen16ViewBase();
    virtual ~Screen16ViewBase() {}
    virtual void setupScreen();

protected:
    FrontendApplication& application() {
        return *static_cast<FrontendApplication*>(touchgfx::Application::getInstance());
    }

    /*
     * Member Declarations
     */
    touchgfx::Box __background;
    touchgfx::Image image1;
    touchgfx::BoxWithBorderButtonStyle< touchgfx::ClickButtonTrigger >  flexButton1;
    touchgfx::BoxWithBorderButtonStyle< touchgfx::ClickButtonTrigger >  flexButton2;

private:

    /*
     * Callback Declarations
     */
    touchgfx::Callback<Screen16ViewBase, const touchgfx::AbstractButtonContainer&> flexButtonCallback;

    /*
     * Callback Handler Declarations
     */
    void flexButtonCallbackHandler(const touchgfx::AbstractButtonContainer& src);

};

#endif // SCREEN16VIEWBASE_HPP
