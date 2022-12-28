/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/screen14_screen/Screen14ViewBase.hpp>
#include <touchgfx/Color.hpp>
#include <BitmapDatabase.hpp>

Screen14ViewBase::Screen14ViewBase() :
    flexButtonCallback(this, &Screen14ViewBase::flexButtonCallbackHandler)
{

    __background.setPosition(0, 0, 480, 272);
    __background.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));

    image1.setXY(0, 0);
    image1.setBitmap(touchgfx::Bitmap(BITMAP_TWINCOOKER14_ID));

    flexButton1.setBoxWithBorderPosition(0, 0, 480, 272);
    flexButton1.setBorderSize(5);
    flexButton1.setBoxWithBorderColors(touchgfx::Color::getColorFromRGB(0, 102, 153), touchgfx::Color::getColorFromRGB(0, 153, 204), touchgfx::Color::getColorFromRGB(0, 51, 102), touchgfx::Color::getColorFromRGB(51, 102, 153));
    flexButton1.setPosition(0, 0, 480, 272);
    flexButton1.setAlpha(0);
    flexButton1.setAction(flexButtonCallback);

    add(__background);
    add(image1);
    add(flexButton1);
}

void Screen14ViewBase::setupScreen()
{

}

void Screen14ViewBase::flexButtonCallbackHandler(const touchgfx::AbstractButtonContainer& src)
{
    if (&src == &flexButton1)
    {
        //Interaction1
        //When flexButton1 clicked change screen to Screen15
        //Go to Screen15 with no screen transition
        application().gotoScreen15ScreenNoTransition();
    }
}