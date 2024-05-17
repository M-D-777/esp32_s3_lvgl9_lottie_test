#include "lvgl.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#if 1
#if 1

/**
 * Load an lottie animation from data
 */
uint8_t *buf_toast = NULL;
uint8_t *buf_rocket = NULL;
uint8_t *buf_train = NULL;
uint8_t *buf_robot = NULL;
uint8_t *buf_cuppa = NULL;
void lv_example_lottie_1(void)
{
    /*Add LV_DRAW_BUF_ALIGN to be sure the buffer is large enough to fulfill the alignment requirements.
     *It's not required in not of the cases.
     * x4 because the Lottie is rendered in ARGB8888 format*/
    // static uint8_t buf[40 * 40 * 4 + LV_DRAW_BUF_ALIGN];

    buf_toast = heap_caps_malloc(120 * 120 * 4 + LV_DRAW_BUF_ALIGN, MALLOC_CAP_SPIRAM | MALLOC_CAP_32BIT);
    lv_obj_t * lottie_toast = lv_lottie_create(lv_screen_active());
    lv_lottie_set_buffer(lottie_toast, 120, 120, buf_toast);
    extern const unsigned char toast[];
    extern const size_t toast_size;
    lv_lottie_set_src_data(lottie_toast, toast, toast_size);
    // lv_obj_center(lottie_toast);
    lv_obj_align(lottie_toast, LV_ALIGN_TOP_LEFT, 10, 0);


    buf_rocket = heap_caps_malloc(120 * 120 * 4, MALLOC_CAP_SPIRAM | MALLOC_CAP_32BIT);
    lv_obj_t * lottie_rocket = lv_lottie_create(lv_screen_active());
    lv_lottie_set_buffer(lottie_rocket, 120, 120, buf_rocket);
    extern const unsigned char rocket2[];
    extern const size_t rocket2_size;
    lv_lottie_set_src_data(lottie_rocket, rocket2, rocket2_size);
    // lv_obj_center(lottie_rocket);
    lv_obj_align(lottie_rocket, LV_ALIGN_TOP_RIGHT, -10, 0);


    buf_robot = heap_caps_malloc(120 * 120 * 4, MALLOC_CAP_SPIRAM | MALLOC_CAP_32BIT);
    lv_obj_t * lottie_robot = lv_lottie_create(lv_screen_active());
    lv_lottie_set_buffer(lottie_robot, 120, 120, buf_robot);
    extern const unsigned char robot[];
    extern const size_t robot_size;
    lv_lottie_set_src_data(lottie_robot, robot, robot_size);
    // lv_obj_center(lottie_robot);
    lv_obj_align(lottie_robot, LV_ALIGN_BOTTOM_LEFT, 10, 0);

    buf_cuppa = heap_caps_malloc(120 * 120 * 4, MALLOC_CAP_SPIRAM | MALLOC_CAP_32BIT);
    lv_obj_t * lottie_cuppa = lv_lottie_create(lv_screen_active());
    lv_lottie_set_buffer(lottie_cuppa, 120, 120, buf_cuppa);
    extern const unsigned char cuppa_commando[];
    extern const size_t cuppa_commando_size;
    lv_lottie_set_src_data(lottie_cuppa, cuppa_commando, cuppa_commando_size);
    // lv_obj_center(lottie_cuppa);
    lv_obj_align(lottie_cuppa, LV_ALIGN_BOTTOM_RIGHT, -10, 0);
}

#else

void lv_example_lottie_1(void)
{
    /*fallback for online examples*/

    lv_obj_t * label = lv_label_create(lv_screen_active());
    lv_label_set_text(label, "Lottie cannot be previewed online");
    lv_obj_center(label);
}

#endif /*LV_USE_LOTTIE*/

#endif /*LV_BUILD_EXAMPLES*/
