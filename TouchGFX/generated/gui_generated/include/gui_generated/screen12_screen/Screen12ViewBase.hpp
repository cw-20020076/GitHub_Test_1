/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef SCREEN12VIEWBASE_HPP
#define SCREEN12VIEWBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/screen12_screen/Screen12Presenter.hpp>
#include <touchgfx/widgets/Box.hpp>
#include <touchgfx/widgets/Image.hpp>
#include <touchgfx/containers/buttons/Buttons.hpp>

class Screen12ViewBase : public touchgfx::View<Screen12Presenter>
{
public:
    Screen12ViewBase();
    virtual ~Screen12ViewBase() {}
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
    touchgfx::BoxWithBorderButtonStyle< touchgfx::ClickButtonTrigger >  flexButton3;

private:

    /*
     * Callback Declarations
     */
    touchgfx::Callback<Screen12ViewBase, const touchgfx::AbstractButtonContainer&> flexButtonCallback;

    /*
     * Callback Handler Declarations
     */
    void flexButtonCallbackHandler(const touchgfx::AbstractButtonContainer& src);

};

#endif // SCREEN12VIEWBASE_HPP