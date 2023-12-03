
#include "lvgl.h"

void example_lvgl_demo_ui(lv_disp_t *disp)
{
    lv_obj_t *scr = lv_disp_get_scr_act(disp);
    lv_obj_t *label = lv_label_create(scr);
    lv_obj_set_width(label, 150);
    lv_obj_align(label, LV_ALIGN_CENTER, 100, -30);
    lv_label_set_text(label, "Hello World!");

}
