#ifndef PIN_FACTORY
#define PIN_FACTORY

#include <Arduino.h>

struct segment_pin
{
    int HIGH_PIN;
    int LOW_PIN;
};

segment_pin e_1_pin
{
    D4,
    D5
};

segment_pin f_1_pin
{
    D1,
    D6
};

segment_pin a_2_pin
{
    D2,
    D1
};

segment_pin b_2_pin
{
    D5,
    D1
};

segment_pin c_2_pin
{
    D6,
    D1
};

segment_pin d_2_pin
{
    D7,
    D1
};

segment_pin e_2_pin
{
    D4,
    D1
};

segment_pin f_2_pin
{
    D1,
    D2
};

segment_pin g_2_pin
{
    D5,
    D2
};

segment_pin a_3_pin
{
    D6,
    D2
};

segment_pin b_3_pin
{
    D7,
    D2
};

segment_pin c_3_pin
{
    D4,
    D2
};

segment_pin d_3_pin
{
    D1,
    D5
};

segment_pin e_3_pin
{
    D2,
    D5
};

segment_pin f_3_pin
{
    D6,
    D5
};

segment_pin g_3_pin
{
    D7,
    D5
};

segment_pin power_percentage_pin
{
    D2,
    D6
};

segment_pin drop_percentage_pin
{
    D7,
    D6
};

segment_pin power_icon_pin
{
    D5,
    D6
};

segment_pin drop_icon_pin
{
    D4,
    D6
};



#endif