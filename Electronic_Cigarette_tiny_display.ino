#include "pin_Factory.h"

#define DISPLAY_DURTION 1000
// #define DEBUG 1

int pins[6] = {D1, D2, D5, D6, D7, D4};

int loop_delay = 1000;

void turnOn_segment(int PIN_HIGH, int PIN_LOW)
{
    for (int i = 0; i < 6; i++)
    {
        if (pins[i] != PIN_HIGH || pins[i] != PIN_LOW)
        {
            pinMode(pins[i], INPUT);
        }
        if (pins[i] == PIN_LOW)
        {
            pinMode(PIN_LOW, OUTPUT);
            digitalWrite(PIN_LOW, LOW);
        }

        if (pins[i] == PIN_HIGH)
        {
            pinMode(PIN_HIGH, OUTPUT);
            digitalWrite(PIN_HIGH, HIGH);
        }
    }
}

void Random_effect(int time)
{
    unsigned long t = millis();
    int old_segment_number = -1;
    while (millis() - t < time / 2)
    {
        int segment_number = random(0, 20);
        while (segment_number == old_segment_number)
        {
            segment_number = random(0, 20);
        }
        segment_pin PIN = Random_segment_pin(segment_number);
        for (int p = 0; p < 6; p++)
        {
            if (PIN.HIGH_PIN != pins[p] || PIN.LOW_PIN != pins[p])
            {
                pinMode(pins[p], INPUT);
            }
        }
        pinMode(PIN.LOW_PIN, OUTPUT);
        pinMode(PIN.HIGH_PIN, OUTPUT);
        digitalWrite(PIN.LOW_PIN, LOW);
        t = millis();
        while (millis() - t < time / 2)
        {
            for (int i = 0; i < 255; i++)
            {
                analogWrite(PIN.HIGH_PIN, i);
                delay(1);
            }
            for (int i = 255; i > 0; i--)
            {
                analogWrite(PIN.HIGH_PIN, i);
                delay(1);
            }
        }
    }
}

segment_pin Random_segment_pin(int choice)
{
    segment_pin pin;

    switch (choice)
    {
    case 1:
        pin.HIGH_PIN = e_1_pin.HIGH_PIN;
        pin.LOW_PIN = e_1_pin.LOW_PIN;
        return pin;
    case 2:
        pin.HIGH_PIN = f_1_pin.HIGH_PIN;
        pin.LOW_PIN = f_1_pin.LOW_PIN;
        return pin;
    case 3:
        pin.HIGH_PIN = a_2_pin.HIGH_PIN;
        pin.LOW_PIN = a_2_pin.LOW_PIN;
        return pin;
    case 4:
        pin.HIGH_PIN = b_2_pin.HIGH_PIN;
        pin.LOW_PIN = b_2_pin.LOW_PIN;
        return pin;
    case 5:
        pin.HIGH_PIN = c_2_pin.HIGH_PIN;
        pin.LOW_PIN = c_2_pin.LOW_PIN;
        return pin;
    case 6:
        pin.HIGH_PIN = d_2_pin.HIGH_PIN;
        pin.LOW_PIN = d_2_pin.LOW_PIN;
        return pin;
    case 7:
        pin.HIGH_PIN = e_2_pin.HIGH_PIN;
        pin.LOW_PIN = e_2_pin.LOW_PIN;
        return pin;
    case 8:
        pin.HIGH_PIN = f_2_pin.HIGH_PIN;
        pin.LOW_PIN = f_2_pin.LOW_PIN;
        return pin;
    case 9:
        pin.HIGH_PIN = g_2_pin.HIGH_PIN;
        pin.LOW_PIN = g_2_pin.LOW_PIN;
        return pin;
    case 10:
        pin.HIGH_PIN = a_3_pin.HIGH_PIN;
        pin.LOW_PIN = a_3_pin.LOW_PIN;
        return pin;
    case 11:
        pin.HIGH_PIN = b_3_pin.HIGH_PIN;
        pin.LOW_PIN = b_3_pin.LOW_PIN;
        return pin;
    case 12:
        pin.HIGH_PIN = c_3_pin.HIGH_PIN;
        pin.LOW_PIN = c_3_pin.LOW_PIN;
        return pin;
    case 13:
        pin.HIGH_PIN = d_3_pin.HIGH_PIN;
        pin.LOW_PIN = d_3_pin.LOW_PIN;
        return pin;
    case 14:
        pin.HIGH_PIN = e_3_pin.HIGH_PIN;
        pin.LOW_PIN = e_3_pin.LOW_PIN;
        return pin;
    case 15:
        pin.HIGH_PIN = f_3_pin.HIGH_PIN;
        pin.LOW_PIN = f_3_pin.LOW_PIN;
        return pin;
    case 16:
        pin.HIGH_PIN = g_3_pin.HIGH_PIN;
        pin.LOW_PIN = g_3_pin.LOW_PIN;
        return pin;
    case 17:
        pin.HIGH_PIN = power_percentage_pin.HIGH_PIN;
        pin.LOW_PIN = power_percentage_pin.LOW_PIN;
        return pin;
    case 18:
        pin.HIGH_PIN = power_icon_pin.HIGH_PIN;
        pin.LOW_PIN = power_icon_pin.LOW_PIN;
        return pin;
    case 19:
        pin.HIGH_PIN = drop_icon_pin.HIGH_PIN;
        pin.LOW_PIN = drop_icon_pin.LOW_PIN;
        return pin;
    case 20:
        pin.HIGH_PIN = drop_percentage_pin.HIGH_PIN;
        pin.LOW_PIN = drop_percentage_pin.LOW_PIN;
        return pin;
    }
    pin.HIGH_PIN = -1;
    pin.LOW_PIN = -1;
    return pin;
}

void Power_percentage()
{
    // 2 HIGH
    // 4 LOW
    turnOn_segment(power_percentage_pin.HIGH_PIN, power_percentage_pin.LOW_PIN);
}

void drop_percentage()
{
    // 4 LOW
    // 5 HIGH
    turnOn_segment(drop_percentage_pin.HIGH_PIN, drop_percentage_pin.LOW_PIN);
}

void power_icon()
{
    // 4 LOW
    // 3 HIGH
    turnOn_segment(power_icon_pin.HIGH_PIN, power_icon_pin.LOW_PIN);
}

void drop_icon()
{
    // 4 LOW
    // 6 HIGH
    turnOn_segment(drop_percentage_pin.HIGH_PIN, drop_percentage_pin.LOW_PIN);
}

void off()
{
    pinMode(D1, INPUT);
    pinMode(D2, INPUT);
    pinMode(D5, INPUT);
    pinMode(D6, INPUT);
    pinMode(D7, INPUT);
    pinMode(D4, INPUT);
}

void display_number(int number)
{
    int hundreds = number / 100;
    int tens = (number % 100) / 10;
    int ones = number % 10;

    // Display hundreds digit
    if (hundreds == 1)
    {
        segment_digits(hundreds, 1);
    }
    // Display tens digit
    if (tens > 0 || hundreds > 0)
    {
        segment_digits(tens, 2);
    }
    // Display ones digit
    segment_digits(ones, 3);
}

/**
 * @details -> this function is used to display numbers on display
 *
 * @arg x -> a digit which will be display on segment
 * @arg seg -> id of segment which have to send command to display number
 *
 * example : if i pass 3 as x and seg as 2 it will display 3 on segment 2
 *
 */

void segment_digits(int x, int seg)
{
#ifdef DEBUG
    Serial.println("F :" + String(__FUNCTION__));
    Serial.println("number : " + String(x));
    Serial.println("seg : " + String(seg));
#endif
    switch (x)
    {
    case 95: // _ special characters
        pixel_seg('d', seg);
        delay(1);
        break;
    case 45: // - special characters
        pixel_seg('g', seg);
        delay(1);
        break;
    case 0:
        pixel_seg('a', seg);
        delay(1);
        pixel_seg('b', seg);
        delay(1);
        pixel_seg('c', seg);
        delay(1);
        pixel_seg('d', seg);
        delay(1);
        pixel_seg('e', seg);
        delay(1);
        pixel_seg('f', seg);
        delay(1);
        break;
    case 1:
        if (seg == 1)
        {
            pixel_seg('e', seg);
            delay(1);
            pixel_seg('f', seg);
            delay(1);
        }
        else
        {
            pixel_seg('b', seg);
            delay(1);
            pixel_seg('c', seg);
            delay(1);
        }
        break;
    case 2:
        pixel_seg('a', seg);
        delay(1);
        pixel_seg('b', seg);
        delay(1);
        pixel_seg('g', seg);
        delay(1);
        pixel_seg('e', seg);
        delay(1);
        pixel_seg('d', seg);
        delay(1);
        break;
    case 3:
        pixel_seg('a', seg);
        delay(1);
        pixel_seg('b', seg);
        delay(1);
        pixel_seg('c', seg);
        delay(1);
        pixel_seg('d', seg);
        delay(1);
        pixel_seg('g', seg);
        delay(1);
        break;
    case 4:
        pixel_seg('f', seg);
        delay(1);
        pixel_seg('g', seg);
        delay(1);
        pixel_seg('b', seg);
        delay(1);
        pixel_seg('c', seg);
        delay(1);
        break;
    case 5:
        pixel_seg('a', seg);
        delay(1);
        pixel_seg('f', seg);
        delay(1);
        pixel_seg('g', seg);
        delay(1);
        pixel_seg('c', seg);
        delay(1);
        pixel_seg('d', seg);
        delay(1);
        break;
    case 6:
        pixel_seg('a', seg);
        delay(1);
        pixel_seg('f', seg);
        delay(1);
        pixel_seg('g', seg);
        delay(1);
        pixel_seg('c', seg);
        delay(1);
        pixel_seg('d', seg);
        delay(1);
        pixel_seg('e', seg);
        delay(1);
        break;
    case 7:
        pixel_seg('a', seg);
        delay(1);
        pixel_seg('b', seg);
        delay(1);
        pixel_seg('c', seg);
        delay(1);
        break;
    case 8:
        pixel_seg('a', seg);
        delay(1);
        pixel_seg('b', seg);
        delay(1);
        pixel_seg('c', seg);
        delay(1);
        pixel_seg('d', seg);
        delay(1);
        pixel_seg('e', seg);
        delay(1);
        pixel_seg('f', seg);
        delay(1);
        pixel_seg('g', seg);
        delay(1);
        break;
    case 9:
        pixel_seg('a', seg);
        delay(1);
        pixel_seg('b', seg);
        delay(1);
        pixel_seg('c', seg);
        delay(1);
        pixel_seg('d', seg);
        delay(1);
        pixel_seg('f', seg);
        delay(1);
        pixel_seg('g', seg);
        delay(1);
        break;
    }
}

/**
 * @details -> this function is used to call appropriate function for each segments pixel based on segment argument
 * i have not add more pixel for segment 1 because it have only e and f pixel else this can be change the behaviour of display
 * @arg a -> this is the pixel which will used to called function of
 * @arg seg -> this is the segment which have to call that pixel function
 *
 * @example : if i pass a as char and seg as 3 it will call function a_3()
 * that hence pixel A from segment 3 will be light up
 */

void pixel_seg(char a, int seg)
{
#ifdef DEBUG
    Serial.println("\t\tF :" + String(__FUNCTION__));
    Serial.println("\t\tchar : " + String(a));
    Serial.println("\t\tseg : " + String(seg));
#endif

    switch (a)
    {
    case 'a':
        if (seg == 2)
        {
            // a_2();
            turnOn_segment(a_2_pin.HIGH_PIN, a_2_pin.LOW_PIN);
        }
        else if (seg == 3)
        {
            // a_3();
            turnOn_segment(a_3_pin.HIGH_PIN, a_3_pin.LOW_PIN);
        }
        break;
    case 'b':
        if (seg == 2)
        {
            // b_2();
            turnOn_segment(b_2_pin.HIGH_PIN, b_2_pin.LOW_PIN);
        }
        else if (seg == 3)
        {
            // b_3();
            turnOn_segment(b_3_pin.HIGH_PIN, b_3_pin.LOW_PIN);
        }
        break;
    case 'c':
        if (seg == 2)
        {
            // c_2();
            turnOn_segment(c_2_pin.HIGH_PIN, c_2_pin.LOW_PIN);
        }
        else if (seg == 3)
        {
            // c_3();
            turnOn_segment(c_3_pin.HIGH_PIN, c_3_pin.LOW_PIN);
        }
        break;
    case 'd':
        if (seg == 2)
        {
            // d_2();
            turnOn_segment(d_2_pin.HIGH_PIN, d_2_pin.LOW_PIN);
        }
        else if (seg == 3)
        {
            // d_3();
            turnOn_segment(d_3_pin.HIGH_PIN, d_3_pin.LOW_PIN);
        }
        break;
    case 'e':
        if (seg == 1)
        {
            // e_1();
            turnOn_segment(e_1_pin.HIGH_PIN, e_1_pin.LOW_PIN);
        }
        else if (seg == 2)
        {
            // e_2();
            turnOn_segment(e_2_pin.HIGH_PIN, e_2_pin.LOW_PIN);
        }
        else if (seg == 3)
        {
            // e_3();
            turnOn_segment(e_3_pin.HIGH_PIN, e_3_pin.LOW_PIN);
        }
        break;
    case 'f':
        if (seg == 1)
        {
            // f_1();
            turnOn_segment(f_1_pin.HIGH_PIN, f_1_pin.LOW_PIN);
        }
        else if (seg == 2)
        {
            // f_2();
            turnOn_segment(f_2_pin.HIGH_PIN, f_2_pin.LOW_PIN);
        }
        else if (seg == 3)
        {
            // f_3();
            turnOn_segment(f_3_pin.HIGH_PIN, f_3_pin.LOW_PIN);
        }
        break;
    case 'g':
        if (seg == 2)
        {
            // g_2();
            turnOn_segment(g_2_pin.HIGH_PIN, g_2_pin.LOW_PIN);
        }
        else if (seg == 3)
        {
            // g_3();
            turnOn_segment(g_2_pin.HIGH_PIN, g_2_pin.LOW_PIN);
        }
        break;
    }
}

/**
 * @details -> this function is used to display a character for each segments pixel based on segment argument
 * @arg ch -> this is the character which will be displayed on requested segment
 * @arg seg -> this is the segment which have to display character
 *
 * @example : if i pass A as char and seg as 3 it will display that character on that segment
 * that hence character A on segment 3 will be light up
 */

void display_char(char ch, int seg)
{

#ifdef DEBUG
    Serial.println("Charater is : " + String(ch));
    Serial.println("Segment is : " + String(seg));
#endif
    switch (ch)
    {
    case ' ':
        yield();
        off();
        break;
    case '_':
        pixel_seg('d', seg);
        delay(1);
        break;
    case '-':
        pixel_seg('g', seg);
        delay(1);
        break;
    case 'A':
        pixel_seg('a', seg);
        delay(1);
        pixel_seg('b', seg);
        delay(1);
        pixel_seg('c', seg);
        delay(1);
        pixel_seg('e', seg);
        delay(1);
        pixel_seg('f', seg);
        delay(1);
        pixel_seg('g', seg);
        delay(1);
        break;
    case 'B':
        pixel_seg('c', seg);
        delay(1);
        pixel_seg('d', seg);
        delay(1);
        pixel_seg('e', seg);
        delay(1);
        pixel_seg('f', seg);
        delay(1);
        pixel_seg('g', seg);
        delay(1);
        break;
    case 'C':
        pixel_seg('a', seg);
        delay(1);
        pixel_seg('d', seg);
        delay(1);
        pixel_seg('e', seg);
        delay(1);
        pixel_seg('f', seg);
        delay(1);
        break;
    case 'D':
        pixel_seg('b', seg);
        delay(1);
        pixel_seg('c', seg);
        delay(1);
        pixel_seg('d', seg);
        delay(1);
        pixel_seg('e', seg);
        delay(1);
        pixel_seg('g', seg);
        delay(1);
        break;
    case 'E':
        pixel_seg('a', seg);
        delay(1);
        pixel_seg('d', seg);
        delay(1);
        pixel_seg('e', seg);
        delay(1);
        pixel_seg('f', seg);
        delay(1);
        pixel_seg('g', seg);
        delay(1);
        break;
    case 'F':
        pixel_seg('a', seg);
        delay(1);
        pixel_seg('e', seg);
        delay(1);
        pixel_seg('f', seg);
        delay(1);
        pixel_seg('g', seg);
        delay(1);
        break;
    case 'G':
        pixel_seg('a', seg);
        delay(1);
        pixel_seg('c', seg);
        delay(1);
        pixel_seg('d', seg);
        delay(1);
        pixel_seg('e', seg);
        delay(1);
        pixel_seg('f', seg);
        delay(1);
        break;
    case 'H':
        pixel_seg('b', seg);
        delay(1);
        pixel_seg('c', seg);
        delay(1);
        pixel_seg('e', seg);
        delay(1);
        pixel_seg('f', seg);
        delay(1);
        pixel_seg('g', seg);
        delay(1);
        break;
    case 'I':
        pixel_seg('b', seg);
        delay(1);
        pixel_seg('c', seg);
        delay(1);
        break;
    case 'J':
        pixel_seg('b', seg);
        delay(1);
        pixel_seg('c', seg);
        delay(1);
        pixel_seg('d', seg);
        delay(1);
        break;
    case 'K':
        yield();
        off();
        break;
    case 'L':
        pixel_seg('d', seg);
        delay(1);
        pixel_seg('e', seg);
        delay(1);
        pixel_seg('f', seg);
        delay(1);
        break;
    case 'M':
        yield();
        off();
        break;
    case 'N':
        pixel_seg('a', seg);
        delay(1);
        pixel_seg('b', seg);
        delay(1);
        pixel_seg('c', seg);
        delay(1);
        pixel_seg('e', seg);
        delay(1);
        pixel_seg('f', seg);
        delay(1);
        break;
    case 'O':
        pixel_seg('a', seg);
        delay(1);
        pixel_seg('b', seg);
        delay(1);
        pixel_seg('c', seg);
        delay(1);
        pixel_seg('d', seg);
        delay(1);
        pixel_seg('e', seg);
        delay(1);
        pixel_seg('f', seg);
        delay(1);
        break;
    case 'P':
        pixel_seg('a', seg);
        delay(1);
        pixel_seg('b', seg);
        delay(1);
        pixel_seg('e', seg);
        delay(1);
        pixel_seg('f', seg);
        delay(1);
        pixel_seg('g', seg);
        delay(1);
        break;
    case 'Q':
        pixel_seg('a', seg);
        delay(1);
        pixel_seg('b', seg);
        delay(1);
        pixel_seg('c', seg);
        delay(1);
        pixel_seg('f', seg);
        delay(1);
        pixel_seg('g', seg);
        delay(1);
        break;
    case 'R':
        pixel_seg('e', seg);
        delay(1);
        pixel_seg('g', seg);
        delay(1);
        break;
    case 'S':
        pixel_seg('a', seg);
        delay(1);
        pixel_seg('c', seg);
        delay(1);
        pixel_seg('d', seg);
        delay(1);
        pixel_seg('f', seg);
        delay(1);
        pixel_seg('g', seg);
        delay(1);
        break;
    case 'T':
        pixel_seg('d', seg);
        delay(1);
        pixel_seg('e', seg);
        delay(1);
        pixel_seg('f', seg);
        delay(1);
        pixel_seg('g', seg);
        delay(1);
        break;
    case 'U':
        pixel_seg('b', seg);
        delay(1);
        pixel_seg('c', seg);
        delay(1);
        pixel_seg('d', seg);
        delay(1);
        pixel_seg('e', seg);
        delay(1);
        pixel_seg('f', seg);
        delay(1);
        break;
    case 'V':
        yield();
        off();
        break;
    case 'W':
        yield();
        off();
        break;
    case 'X':
        yield();
        off();
        break;
    case 'Y':
        pixel_seg('b', seg);
        delay(1);
        pixel_seg('c', seg);
        delay(1);
        pixel_seg('f', seg);
        delay(1);
        pixel_seg('g', seg);
        delay(1);
    case 'Z':
        yield();
        off();
        break;
    }
}

void setup()
{
#ifdef DEBUG
    Serial.begin(74880);
#endif
}

void charAndIntDecider(char ch, int seg)
{

    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        display_char(ch, seg);
    }
    else
    {
        if (ch >= '0' && ch <= '9')
        {
            int n = ch - '0';
            segment_digits(n, seg);
            return;
        }
        segment_digits(int(ch), seg);
    }
}

void display_string(String str)
{
    str.trim();
    int str_len = str.length();
    char shift_char;
    for (int idx = 0; idx < str_len; idx++)
    {
        unsigned long startTime = millis();
        while (millis() - startTime < DISPLAY_DURTION)
        {
            charAndIntDecider(str[idx], 3);
            delay(1);
            if (shift_char > 0)
            {
                charAndIntDecider(shift_char, 2);
            }
        }
        shift_char = str[idx];
#ifdef DEBUG
        Serial.println("seg 3 " + String(str[idx]));
        Serial.println("seg 2 " + String(shift_char));
#endif
    }
    off();
}

void loop()
{
    // display_string("HELLO_WORLD");
    Random_effect(5000);
}