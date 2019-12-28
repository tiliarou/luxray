#pragma once

#include <switch.h>
#include "../debug.hpp"
#include "../lvgl/lvgl.h"

class Screen {
   private:
    lv_obj_t* mp_prevScreen;

   protected:
    lv_obj_t* mp_thisScreen;
    virtual bool procFrame_();

   public:
    Screen(lv_obj_t* prevScreen);
    virtual ~Screen();

    void show();
};
