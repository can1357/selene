#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, uint8_t)>*), "_I2C_CALLBACKS.WriteClockLine", write_clock_line, 0x0, 0x40, true, 0xcc66cf1bf69cbeee)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, uint8_t)>*), "_I2C_CALLBACKS.WriteDataLine", write_data_line, 0x40, 0x40, true, 0x32d0b25425984250)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<uint8_t(void*)>*), "_I2C_CALLBACKS.ReadClockLine", read_clock_line, 0x80, 0x40, true, 0xc303b69ede390c39)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<uint8_t(void*)>*), "_I2C_CALLBACKS.ReadDataLine", read_data_line, 0xc0, 0x40, true, 0x7b4b2f6bc7d69783)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif