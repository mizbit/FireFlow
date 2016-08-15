#define LCD_CS A3 // Chip Select goes to Analog 3
#define LCD_CD A2 // Command/Data goes to Analog 2
#define LCD_WR A1 // LCD Write goes to Analog 1
#define LCD_RD A0 // LCD Read goes to Analog 0
#define LCD_RESET A4 // Can alternately just connect to Arduino's reset pin

#define YP A1   //[A1], A3 for ILI9320, A2 for ST7789V 
#define YM 7    //[ 7], 9             , 7
#define XM A2   //[A2], A2 for ILI9320, A1 for ST7789V
#define XP 6    //[ 6], 8             , 6

#define BUFFPIXEL 20

//Colors
#define BLACK   0x0000
#define BLUE    0x001F
#define RED     0xF800
#define GREEN   0x07E0
#define CYAN    0x07FF
#define MAGENTA 0xF81F
#define YELLOW  0xFFE0
#define WHITE   0xFFFF

#define GRAY   0x8410
#define DARK_GRAY   0x4208
#define LIGHT_GRAY   0xBDF7

#define HOLO_BLUE_LIGHT 0x35BC
#define HOLO_BLUE_DARK 0x04D9
#define HOLO_BLUE_BRIGHT 0x06FF



//Files Types
#define FILE_TRUE 0x30 //char '0'
#define FILE_FALSE 0x31 //char '1'

//Common Files
#define FILE_CONFIG F("fireflow/set/config.txt")


//Clock Format
#define SECS_PER_MIN  (60UL)
#define SECS_PER_HOUR (3600UL)
#define SECS_PER_DAY  (SECS_PER_HOUR * 24L)
#define numberOfHours(_time_) (( _time_% SECS_PER_DAY) / SECS_PER_HOUR)
#define numberOfSeconds(_time_) (_time_ % SECS_PER_MIN)
#define numberOfMinutes(_time_) ((_time_ / SECS_PER_MIN) % SECS_PER_MIN)

//Clock Round Functions
#define DEGREES_TO_RADIANS 0.0174533

//Thermocouple
#define THERMOCOUPLE_DO 22
#define THERMOCOUPLE_CS 23
#define THERMOCOUPLE_CLK 24

#define THERMOCOUPLE_FAULT(x)                 (x == FAULT_OPEN || x == FAULT_SHORT_GND || x == FAULT_SHORT_VCC)
#define THERMOCOUPLE_NUM_READINGS           5   // Number of readings to average the temperature over (5 readings = 1 second)
#define THERMOCOUPLE_ERROR_THRESHOLD        15

#define SS_W 480
#define SS_H 320
