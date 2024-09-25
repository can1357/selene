#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_I2C_FNC_TABLE.Size", size, 0x0, 0x20, true, 0x5c7053117f17dec8)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, uint8_t)>*), "_I2C_FNC_TABLE.WriteClockLine", write_clock_line, 0x40, 0x40, true, 0x733367baefeca536)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, uint8_t)>*), "_I2C_FNC_TABLE.WriteDataLine", write_data_line, 0x80, 0x40, true, 0xeee36ebbaaac10fd)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<uint8_t(void*)>*), "_I2C_FNC_TABLE.ReadClockLine", read_clock_line, 0xc0, 0x40, true, 0x22955a34a3af7b0a)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<uint8_t(void*)>*), "_I2C_FNC_TABLE.ReadDataLine", read_data_line, 0x100, 0x40, true, 0xf97368bfe9b77daa)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_I2C_FNC_TABLE.WaitVsync", wait_vsync, 0x140, 0x40, true, 0xcc98ea9e04a01c7e)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif