#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_VIDEO_PORT_I2C_INTERFACE_2.Size", size, 0x0, 0x10, true, 0x7001949e6b79a340)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_VIDEO_PORT_I2C_INTERFACE_2.Version", version, 0x10, 0x10, true, 0xcc874d0b23480a97)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_VIDEO_PORT_I2C_INTERFACE_2.Context", context, 0x40, 0x40, true, 0x8a0c4ecf8ed10efb)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_VIDEO_PORT_I2C_INTERFACE_2.InterfaceReference", interface_reference, 0x80, 0x40, true, 0x9357eaf543760a03)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_VIDEO_PORT_I2C_INTERFACE_2.InterfaceDereference", interface_dereference, 0xc0, 0x40, true, 0x7ad24a0f38c715a7)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<uint8_t(void*, struct video::i2c_control_t*)>*), "_VIDEO_PORT_I2C_INTERFACE_2.I2CStart", i2c_start, 0x100, 0x40, true, 0xde1b2e7ab81404af)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<uint8_t(void*, struct video::i2c_control_t*)>*), "_VIDEO_PORT_I2C_INTERFACE_2.I2CStop", i2c_stop, 0x140, 0x40, true, 0xef0051a16f0d3886)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pi2c_write_2_t ), "_VIDEO_PORT_I2C_INTERFACE_2.I2CWrite", i2c_write, 0x180, 0x40, true, 0xbfa645d19ca99a9a)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pi2c_read_2_t ), "_VIDEO_PORT_I2C_INTERFACE_2.I2CRead", i2c_read, 0x1c0, 0x40, true, 0x4d8fd34dbb5dd7b7)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#endif