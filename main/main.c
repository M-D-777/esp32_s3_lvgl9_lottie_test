#include <stdio.h>

#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_log.h"

#include "bsp/esp-bsp.h"

#include "lv_example_lottie.h"

static char *TAG = "app_main";
static void event_handler(lv_event_t * e)
{
    lv_event_code_t code = lv_event_get_code(e);

    if(code == LV_EVENT_CLICKED) {
        LV_LOG_USER("Clicked");
    }
    else if(code == LV_EVENT_VALUE_CHANGED) {
        LV_LOG_USER("Toggled");
    }
}

void app_main(void)
{
    /* Initialize I2C (for touch and audio) */
    bsp_i2c_init();

    /* Initialize display and LVGL */
    bsp_display_start();

    /* Set display brightness to 100% */
    bsp_display_backlight_on();
    // lottile_buf = heap_caps_malloc(60 * 60 * 4, MALLOC_CAP_SPIRAM | MALLOC_CAP_32BIT);
    ESP_LOGI(TAG, "Display LVGL demo");
    bsp_display_lock(0);
    // lv_obj_t * label = lv_label_create(lv_screen_active());
    // lv_label_set_text(label, "red");
    // static lv_style_t style_shadow;
    // lv_style_init(&style_shadow);
    // lv_style_set_text_opa(&style_shadow, LV_OPA_30);
    // lv_style_set_text_color(&style_shadow, lv_color_make(0xFF, 0x00, 0x00));
    // lv_obj_add_style(label, &style_shadow, 0);

    // lv_obj_t * label_g = lv_label_create(lv_screen_active());
    // lv_label_set_text(label_g, "green");
    // static lv_style_t style_shadow_g;
    // lv_style_init(&style_shadow_g);
    // lv_style_set_text_opa(&style_shadow_g, LV_OPA_30);
    // lv_style_set_text_color(&style_shadow_g, lv_color_make(0x00, 0xFF, 0x00));
    // lv_obj_add_style(label_g, &style_shadow_g, 0);
    // lv_obj_align_to(label_g, label, LV_ALIGN_TOP_LEFT, 40, 40);

    // lv_obj_t * label_b = lv_label_create(lv_screen_active());
    // lv_label_set_text(label_b, "Blue");
    // static lv_style_t style_shadow_b;
    // lv_style_init(&style_shadow_b);
    // lv_style_set_text_opa(&style_shadow_b, LV_OPA_30);
    // lv_style_set_text_color(&style_shadow_b, lv_color_make(0x00, 0x00, 0xFF));
    // lv_obj_add_style(label_b, &style_shadow_b, 0);
    // lv_obj_align_to(label_b, label_g, LV_ALIGN_TOP_LEFT, 40, 40);

    // lv_obj_t * label;

    // lv_obj_t * btn1 = lv_button_create(lv_screen_active());
    // lv_obj_add_event_cb(btn1, event_handler, LV_EVENT_ALL, NULL);
    // lv_obj_align(btn1, LV_ALIGN_CENTER, 0, -40);
    // lv_obj_remove_flag(btn1, LV_OBJ_FLAG_PRESS_LOCK);

    // label = lv_label_create(btn1);
    // lv_label_set_text(label, "Button");
    // lv_obj_center(label);

    // lv_obj_t * btn2 = lv_button_create(lv_screen_active());
    // lv_obj_add_event_cb(btn2, event_handler, LV_EVENT_ALL, NULL);
    // lv_obj_align(btn2, LV_ALIGN_CENTER, 0, 40);
    // lv_obj_add_flag(btn2, LV_OBJ_FLAG_CHECKABLE);
    // lv_obj_set_height(btn2, LV_SIZE_CONTENT);

    // label = lv_label_create(btn2);
    // lv_label_set_text(label, "Toggle");
    // lv_obj_center(label);
    lv_example_lottie_1();
    bsp_display_unlock();
}
