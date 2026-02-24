#include QMK_KEYBOARD_H

enum layer_number {
  _QWERTY = 0,
  _LOWER = 1,
  _RAISE = 2,
  _ADJUST = 3,
};

layer_state_t layer_state_set_user(layer_state_t state) {
  return update_tri_layer_state(state, _LOWER, _RAISE, _ADJUST);
}

report_mouse_t pointing_device_task_user(report_mouse_t mouse_report) {
  mouse_report.h = -mouse_report.h;
  return mouse_report;
}
