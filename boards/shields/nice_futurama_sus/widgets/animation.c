#include <stdlib.h>
#include <zephyr/kernel.h>
#include "animation.h"

LV_IMG_DECLARE(fry);
LV_IMG_DECLARE(fry_2);
LV_IMG_DECLARE(fry_3);

const lv_img_dsc_t *anim_imgs[] = {
    &fry, &fry, &fry_2, &fry_2, &fry_3, &fry_3, &fry_3, &fry_3, &fry_3, &fry_3, &fry_3, &fry_3, &fry_3, &fry_3, &fry_3, &fry_3,
};

void draw_animation(lv_obj_t *canvas) {
#if IS_ENABLED(CONFIG_NICE_FUTURAMA_SUS_ANIMATION)
    lv_obj_t *art = lv_animimg_create(canvas);
    lv_obj_center(art);

    lv_animimg_set_src(art, (const void **)anim_imgs, 16);
    lv_animimg_set_duration(art, CONFIG_NICE_FUTURAMA_SUS_ANIMATION_MS);
    lv_animimg_set_repeat_count(art, LV_ANIM_REPEAT_INFINITE);
    lv_animimg_start(art);
#else
    lv_obj_t *art = lv_img_create(canvas);

    lv_img_set_src(art, &fry_3);
#endif

    lv_obj_align(art, LV_ALIGN_TOP_LEFT, 36, 0);
}
