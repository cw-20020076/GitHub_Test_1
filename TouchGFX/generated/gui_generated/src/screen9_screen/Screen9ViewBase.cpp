/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/screen9_screen/Screen9ViewBase.hpp>
#include <touchgfx/Color.hpp>
#include <BitmapDatabase.hpp>

Screen9ViewBase::Screen9ViewBase() :
    flexButtonCallback(this, &Screen9ViewBase::flexButtonCallbackHandler)
{

    __background.setPosition(0, 0, 480, 272);
    __background.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));

    image1.setXY(0, 0);
    image1.setBitmap(touchgfx::Bitmap(BITMAP_TWINCOOKER09_ID));

    flexButton1.setBoxWithBorderPosition(0, 0, 72, 38);
    flexButton1.setBorderSize(5);
    flexButton1.setBoxWithBorderColors(touchgfx::Color::getColorFromRGB(0, 102, 153), touchgfx::Color::getColorFromRGB(0, 153, 204), touchgfx::Color::getColorFromRGB(0, 51, 102), touchgfx::Color::getColorFromRGB(51, 102, 153));
    flexButton1.setPosition(271, 17, 72, 38);
    flexButton1.setAlpha(0);
    flexButton1.setAction(flexButtonCallback);

    flexButton2.setBoxWithBorderPosition(0, 0, 62, 32);
    flexButton2.setBorderSize(5);
    flexButton2.setBoxWithBorderColors(touchgfx::Color::getColorFromRGB(0, 102, 153), touchgfx::Color::getColorFromRGB(0, 153, 204), touchgfx::Color::getColorFromRGB(0, 51, 102), touchgfx::Color::getColorFromRGB(51, 102, 153));
    flexButton2.setPosition(140, 20, 62, 32);
    flexButton2.setAlpha(0);
    flexButton2.setAction(flexButtonCallback);

    add(__background);
    add(image1);
    add(flexButton1);
    add(flexButton2);
}

void Screen9ViewBase::setupScreen()
{

}

void Screen9ViewBase::flexButtonCallbackHandler(const touchgfx::AbstractButtonContainer& src)
{
    if (&src == &flexButton1)
    {
        //Interaction1
        //When flexButton1 clicked change screen to Screen10
        //Go to Screen10 with no screen transition
        application().gotoScreen10ScreenNoTransition();
    }
    else if (&src == &flexButton2)
    {
        //Interaction2
        //When flexButton2 clicked change screen to Screen8
        //Go to Screen8 with no screen transition
        application().gotoScreen8ScreenNoTransition();
    }
}
