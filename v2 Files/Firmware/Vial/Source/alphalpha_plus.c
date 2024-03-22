#include "alphalpha_plus.h"

#ifdef RGB_MATRIX_ENABLE
led_config_t g_led_config = {
    {
        // Key Matrix to LED Index
        {NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED},
        {NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED},
        {NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED},
        {NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED}
    }, {
        // LED Index to Physical Position
        {188, 44}, {168, 44}, {148, 44}, { 126, 44}, { 104, 44}, {82, 44}, {60, 44}, {38, 44}, // UNDERGLOW
        {38, 22}, {60, 22}, {82, 22}, { 104, 22}, { 126, 22}, {148, 22}, {168, 22}, {188, 22} // UNDERGLOW
    }, {
        // LED Index to Flag
        2, 2, 2, 2, 2, 2, 2, 2, // UNDERGLOW
        2, 2, 2, 2, 2, 2, 2, 2 // UNDERGLOW
    }
};
#endif