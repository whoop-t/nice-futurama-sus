#include <stdlib.h>
#include <zephyr/kernel.h>
#include "draw_fry.h"

LV_IMG_DECLARE(fry);

void draw_fry(lv_obj_t *canvas) {
    lv_obj_t *art = lv_img_create(canvas);

    lv_img_set_src(art, &fry);

    lv_obj_align(art, LV_ALIGN_TOP_LEFT, 36, 0);
}

