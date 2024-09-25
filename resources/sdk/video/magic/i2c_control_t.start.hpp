#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, uint8_t)>*), "_VIDEO_I2C_CONTROL.WriteClockLine", write_clock_line, 0x0, 0x40, true, 0x2a92bdb2e6b79586)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, uint8_t)>*), "_VIDEO_I2C_CONTROL.WriteDataLine", write_data_line, 0x40, 0x40, true, 0x2a0b3c597cfb3a78)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<uint8_t(void*)>*), "_VIDEO_I2C_CONTROL.ReadClockLine", read_clock_line, 0x80, 0x40, true, 0x32f7f17637d31234)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<uint8_t(void*)>*), "_VIDEO_I2C_CONTROL.ReadDataLine", read_data_line, 0xc0, 0x40, true, 0x4c722226615b83fd)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_VIDEO_I2C_CONTROL.I2CDelay", i2c_delay, 0x100, 0x20, true, 0xbbc3de00df4f4abe)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif