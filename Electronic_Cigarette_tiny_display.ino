#include <Arduino.h>

#define DISPLAY_DURTION 1000
// #define DEBUG 1

#define SEG_PIN1 D1
#define SEG_PIN2 D2
#define SEG_PIN3 D5
#define SEG_PIN4 D6
#define SEG_PIN5 D7
#define SEG_PIN6 D4

int loop_delay = 1000;

void e_1()
{
    // 6 HIGHT
    // 3 LOW
    pinMode(SEG_PIN1, INPUT);
    pinMode(SEG_PIN2, INPUT);
    pinMode(SEG_PIN4, INPUT);
    pinMode(SEG_PIN5, INPUT);
    pinMode(SEG_PIN6, OUTPUT);
    pinMode(SEG_PIN3, OUTPUT);
    digitalWrite(SEG_PIN6, HIGH);
    digitalWrite(SEG_PIN3, LOW);
}

void f_1()
{
    // 1 HIGH
    // 4 LOW
    pinMode(SEG_PIN2, INPUT);
    pinMode(SEG_PIN3, INPUT);
    pinMode(SEG_PIN4, INPUT);
    pinMode(SEG_PIN5, INPUT);
    pinMode(SEG_PIN6, INPUT);
    pinMode(SEG_PIN1, OUTPUT);
    pinMode(SEG_PIN4, OUTPUT);
    digitalWrite(SEG_PIN1, HIGH);
    digitalWrite(SEG_PIN4, LOW);
}

void a_2()
{
    // 1 LOW
    // 2 HIGH
    pinMode(SEG_PIN3, INPUT);
    pinMode(SEG_PIN4, INPUT);
    pinMode(SEG_PIN5, INPUT);
    pinMode(SEG_PIN6, INPUT);
    pinMode(SEG_PIN1, OUTPUT);
    pinMode(SEG_PIN2, OUTPUT);
    digitalWrite(SEG_PIN1, LOW);
    digitalWrite(SEG_PIN2, HIGH);
}

void b_2()
{
    // 1 LOW
    // 3 HIGH
    pinMode(SEG_PIN2, INPUT);
    pinMode(SEG_PIN4, INPUT);
    pinMode(SEG_PIN5, INPUT);
    pinMode(SEG_PIN6, INPUT);
    pinMode(SEG_PIN1, OUTPUT);
    pinMode(SEG_PIN3, OUTPUT);
    digitalWrite(SEG_PIN1, LOW);
    digitalWrite(SEG_PIN3, HIGH);
}

void c_2()
{
    // 1 LOW
    // 4 HIGH
    pinMode(SEG_PIN2, INPUT);
    pinMode(SEG_PIN3, INPUT);
    pinMode(SEG_PIN5, INPUT);
    pinMode(SEG_PIN6, INPUT);
    pinMode(SEG_PIN1, OUTPUT);
    pinMode(SEG_PIN4, OUTPUT);
    digitalWrite(SEG_PIN1, LOW);
    digitalWrite(SEG_PIN4, HIGH);
}

void d_2()
{
    // 1 LOW
    // 5 HIGH
    pinMode(SEG_PIN2, INPUT);
    pinMode(SEG_PIN3, INPUT);
    pinMode(SEG_PIN4, INPUT);
    pinMode(SEG_PIN6, INPUT);
    pinMode(SEG_PIN1, OUTPUT);
    pinMode(SEG_PIN5, OUTPUT);
    digitalWrite(SEG_PIN1, LOW);
    digitalWrite(SEG_PIN5, HIGH);
}

void e_2()
{
    // 1 LOW
    // 6 HIGH
    pinMode(SEG_PIN2, INPUT);
    pinMode(SEG_PIN3, INPUT);
    pinMode(SEG_PIN4, INPUT);
    pinMode(SEG_PIN5, INPUT);
    pinMode(SEG_PIN1, OUTPUT);
    pinMode(SEG_PIN6, OUTPUT);
    digitalWrite(SEG_PIN1, LOW);
    digitalWrite(SEG_PIN6, HIGH);
}

void f_2()
{
    // 1 HIGH
    // 2 LOW
    pinMode(SEG_PIN3, INPUT);
    pinMode(SEG_PIN4, INPUT);
    pinMode(SEG_PIN5, INPUT);
    pinMode(SEG_PIN6, INPUT);
    pinMode(SEG_PIN1, OUTPUT);
    pinMode(SEG_PIN2, OUTPUT);
    digitalWrite(SEG_PIN1, HIGH);
    digitalWrite(SEG_PIN2, LOW);
}

void g_2()
{
    // 2 LOW
    // 3 HIGHT
    pinMode(SEG_PIN1, INPUT);
    pinMode(SEG_PIN4, INPUT);
    pinMode(SEG_PIN5, INPUT);
    pinMode(SEG_PIN6, INPUT);
    pinMode(SEG_PIN2, OUTPUT);
    pinMode(SEG_PIN3, OUTPUT);
    digitalWrite(SEG_PIN2, LOW);
    digitalWrite(SEG_PIN3, HIGH);
}

void a_3()
{
    // 2 LOW
    // 4 HIGHT
    pinMode(SEG_PIN1, INPUT);
    pinMode(SEG_PIN3, INPUT);
    pinMode(SEG_PIN5, INPUT);
    pinMode(SEG_PIN6, INPUT);
    pinMode(SEG_PIN2, OUTPUT);
    pinMode(SEG_PIN4, OUTPUT);
    digitalWrite(SEG_PIN2, LOW);
    digitalWrite(SEG_PIN4, HIGH);
}

void b_3()
{
    // 2 LOW
    // 5 HIGH
    pinMode(SEG_PIN1, INPUT);
    pinMode(SEG_PIN3, INPUT);
    pinMode(SEG_PIN4, INPUT);
    pinMode(SEG_PIN6, INPUT);
    pinMode(SEG_PIN2, OUTPUT);
    pinMode(SEG_PIN5, OUTPUT);
    digitalWrite(SEG_PIN2, LOW);
    digitalWrite(SEG_PIN5, HIGH);
}
void c_3()
{
    // 2 LOW
    // 6 HIGH
    pinMode(SEG_PIN1, INPUT);
    pinMode(SEG_PIN3, INPUT);
    pinMode(SEG_PIN4, INPUT);
    pinMode(SEG_PIN5, INPUT);
    pinMode(SEG_PIN2, OUTPUT);
    pinMode(SEG_PIN6, OUTPUT);
    digitalWrite(SEG_PIN2, LOW);
    digitalWrite(SEG_PIN6, HIGH);
}

void d_3()
{
    // 3 LOW
    // 1 HIGH
    pinMode(SEG_PIN2, INPUT);
    pinMode(SEG_PIN4, INPUT);
    pinMode(SEG_PIN5, INPUT);
    pinMode(SEG_PIN6, INPUT);
    pinMode(SEG_PIN3, OUTPUT);
    pinMode(SEG_PIN1, OUTPUT);
    digitalWrite(SEG_PIN3, LOW);
    digitalWrite(SEG_PIN1, HIGH);
}

void e_3()
{
    // 2 HIGH
    // 3 LOW
    pinMode(SEG_PIN1, INPUT);
    pinMode(SEG_PIN4, INPUT);
    pinMode(SEG_PIN5, INPUT);
    pinMode(SEG_PIN6, INPUT);
    pinMode(SEG_PIN2, OUTPUT);
    pinMode(SEG_PIN3, OUTPUT);
    digitalWrite(SEG_PIN2, HIGH);
    digitalWrite(SEG_PIN3, LOW);
}

void f_3()
{
    // 3 LOW
    // 4 HIGH
    pinMode(SEG_PIN1, INPUT);
    pinMode(SEG_PIN2, INPUT);
    pinMode(SEG_PIN5, INPUT);
    pinMode(SEG_PIN6, INPUT);
    pinMode(SEG_PIN3, OUTPUT);
    pinMode(SEG_PIN4, OUTPUT);
    digitalWrite(SEG_PIN3, LOW);
    digitalWrite(SEG_PIN4, HIGH);
}

void g_3()
{
    // 3 LOW
    // 5 HIGH
    pinMode(SEG_PIN1, INPUT);
    pinMode(SEG_PIN2, INPUT);
    pinMode(SEG_PIN4, INPUT);
    pinMode(SEG_PIN6, INPUT);
    pinMode(SEG_PIN3, OUTPUT);
    pinMode(SEG_PIN5, OUTPUT);
    digitalWrite(SEG_PIN3, LOW);
    digitalWrite(SEG_PIN5, HIGH);
}

void Power_percentage()
{
    // 2 HIGH
    // 4 LOW
    pinMode(SEG_PIN1, INPUT);
    pinMode(SEG_PIN3, INPUT);
    pinMode(SEG_PIN5, INPUT);
    pinMode(SEG_PIN6, INPUT);
    pinMode(SEG_PIN2, OUTPUT);
    pinMode(SEG_PIN4, OUTPUT);
    digitalWrite(SEG_PIN2, HIGH);
    digitalWrite(SEG_PIN4, LOW);
}

void drop_percentage()
{
    // 4 LOW
    // 5 HIGH
    pinMode(SEG_PIN1, INPUT);
    pinMode(SEG_PIN2, INPUT);
    pinMode(SEG_PIN3, INPUT);
    pinMode(SEG_PIN6, INPUT);
    pinMode(SEG_PIN4, OUTPUT);
    pinMode(SEG_PIN5, OUTPUT);
    digitalWrite(SEG_PIN4, LOW);
    digitalWrite(SEG_PIN5, HIGH);
}

void power_icon()
{
    // 4 LOW
    // 3 HIGH
    pinMode(SEG_PIN1, INPUT);
    pinMode(SEG_PIN2, INPUT);
    pinMode(SEG_PIN5, INPUT);
    pinMode(SEG_PIN6, INPUT);
    pinMode(SEG_PIN3, OUTPUT);
    pinMode(SEG_PIN4, OUTPUT);
    digitalWrite(SEG_PIN4, LOW);
    digitalWrite(SEG_PIN3, HIGH);
}

void drop_icon()
{
    // 4 LOW
    // 6 HIGH
    pinMode(SEG_PIN1, INPUT);
    pinMode(SEG_PIN2, INPUT);
    pinMode(SEG_PIN3, INPUT);
    pinMode(SEG_PIN5, INPUT);
    pinMode(SEG_PIN4, OUTPUT);
    pinMode(SEG_PIN6, OUTPUT);
    digitalWrite(SEG_PIN4, LOW);
    digitalWrite(SEG_PIN6, HIGH);
}

void off()
{
    pinMode(SEG_PIN1, INPUT);
    pinMode(SEG_PIN2, INPUT);
    pinMode(SEG_PIN3, INPUT);
    pinMode(SEG_PIN4, INPUT);
    pinMode(SEG_PIN5, INPUT);
    pinMode(SEG_PIN6, INPUT);
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
 * i not add more pixel for segment 1 because it have only e and f pixel else this can be change the behaviour of display
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
            a_2();
        }
        else if (seg == 3)
        {
            a_3();
        }
        break;
    case 'b':
        if (seg == 2)
        {
            b_2();
        }
        else if (seg == 3)
        {
            b_3();
        }
        break;
    case 'c':
        if (seg == 2)
        {
            c_2();
        }
        else if (seg == 3)
        {
            c_3();
        }
        break;
    case 'd':
        if (seg == 2)
        {
            d_2();
        }
        else if (seg == 3)
        {
            d_3();
        }
        break;
    case 'e':
        if (seg == 1)
        {
            e_1();
        }
        else if (seg == 2)
        {
            e_2();
        }
        else if (seg == 3)
        {
            e_3();
        }
        break;
    case 'f':
        if (seg == 1)
        {
            f_1();
        }
        else if (seg == 2)
        {
            f_2();
        }
        else if (seg == 3)
        {
            f_3();
        }
        break;
    case 'g':
        if (seg == 2)
        {
            g_2();
        }
        else if (seg == 3)
        {
            g_3();
        }
        break;
    }
}

void display_char(char ch, int seg)
{

    #ifdef DEBUG
        Serial.println("Charater is : " + String(ch));
        Serial.println("Segment is : " + String(seg));
    #endif
    switch (ch)
    {
    case ' ':
        delay(1);
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
        delay(1);
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
        delay(1);
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
        delay(1);
        off();
        break;
    case 'W':
        delay(1);
        off();
        break;
    case 'X':
        delay(1);
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
        delay(1);
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
    display_string("HELLO_WORLD");
}