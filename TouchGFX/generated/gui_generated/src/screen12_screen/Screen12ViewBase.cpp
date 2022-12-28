/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/screen12_screen/Screen12ViewBase.hpp>
#include <touchgfx/Color.hpp>
#include <BitmapDatabase.hpp>

Screen12ViewBase::Screen12ViewBase() :
    flexButtonCallback(this, &Screen12ViewBase::flexButtonCallbackHandler)
{

    __background.setPosition(0, 0, 480, 272);
    __background.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));

    image1.setXY(0, 0);
    image1.setBitmap(touchgfx::Bitmap(BITMAP_TWINCOOKER12_ID));

    flexButton1.setBoxWithBorderPosition(0, 0, 67, 38);
    flexButton1.setBorderSize(5);
    flexButton1.setBoxWithBorderColors(touchgfx::Color::getColorFromRGB(0, 102, 153), touchgfx::Color::getColorFromRGB(0, 153, 204), touchgfx::Color::getColorFromRGB(0, 51, 102), touchgfx::Color::getColorFromRGB(51, 102, 153));
    flexButton1.setPosition(272, 16, 67, 38);
    flexButton1.setAlpha(0);
    flexButton1.setAction(flexButtonCallback);

    flexButton2.setBoxWithBorderPosition(0, 0, 62, 32);
    flexButton2.setBorderSize(5);
    flexButton2.setBoxWithBorderColors(touchgfx::Color::getColorFromRGB(0, 102, 153), touchgfx::Color::getColorFromRGB(0, 153, 204), touchgfx::Color::getColorFromRGB(0, 51, 102), touchgfx::Color::getColorFromRGB(51, 102, 153));
    flexButton2.setPosition(140, 20, 62, 32);
    flexButton2.setAlpha(0);
    flexButton2.setAction(flexButtonCallback);

    flexButton3.setBoxWithBorderPosition(0, 0, 80, 35);
    flexButton3.setBorderSize(5);
    flexButton3.setBoxWithBorderColors(touchgfx::Color::getColorFromRGB(0, 102, 153), touchgfx::Color::getColorFromRGB(0, 153, 204), touchgfx::Color::getColorFromRGB(0, 51, 102), touchgfx::Color::getColorFromRGB(51, 102, 153));
    flexButton3.setPosition(380, 21, 80, 35);
    flexButton3.setAlpha(0);
    flexButton3.setAction(flexButtonCallback);

    add(__background);
    add(image1);
    add(flexButton1);
    add(flexButton2);
    add(flexButton3);
}

void Screen12ViewBase::setupScreen()
{

}

void Screen12ViewBase::flexButtonCallbackHandler(const touchgfx::AbstractButtonContainer& src)
{
    if (&src == &flexButton1)
    {
        //Interaction1
        //When flexButton1 clicked change screen to Screen13
        //Go to Screen13 with no screen transition
        application().gotoScreen13ScreenNoTransition();
    }
    else if (&src == &flexButton2)
    {
        //Interaction2
        //When flexButton2 clicked change screen to Screen11
        //Go to Screen11 with no screen transition
        application().gotoScreen11ScreenNoTransition();
    }
    else if (&src == &flexButton3)
    {
        //Interaction3
        //When flexButton3 clicked change screen to Screen11
        //Go to Screen11 with no screen transition
        application().gotoScreen11ScreenNoTransition();
    }
}
