#include <stdlib.h>
#include <zephyr/kernel.h>
#include "draw_bender.h"

LV_IMG_DECLARE(bender);

void draw_bender(lv_obj_t *canvas) {
    lv_obj_t *art = lv_img_create(canvas);

    lv_img_set_src(art, &bender);

    lv_obj_align(art, LV_ALIGN_TOP_LEFT, 36, 0);
}
