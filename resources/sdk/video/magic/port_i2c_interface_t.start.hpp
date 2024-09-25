#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_VIDEO_PORT_I2C_INTERFACE.Size", size, 0x0, 0x10, true, 0x3d99886acbfe7e68)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_VIDEO_PORT_I2C_INTERFACE.Version", version, 0x10, 0x10, true, 0x5c25569b9bfed409)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_VIDEO_PORT_I2C_INTERFACE.Context", context, 0x40, 0x40, true, 0x47aed1de66050130)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_VIDEO_PORT_I2C_INTERFACE.InterfaceReference", interface_reference, 0x80, 0x40, true, 0xb0e4aa796a64219f)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_VIDEO_PORT_I2C_INTERFACE.InterfaceDereference", interface_dereference, 0xc0, 0x40, true, 0xfac43de16f80ef04)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<uint8_t(void*, struct nt::i2c_callbacks_t*)>*), "_VIDEO_PORT_I2C_INTERFACE.I2CStart", i2c_start, 0x100, 0x40, true, 0x3fd5b24f9b2820de)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<uint8_t(void*, struct nt::i2c_callbacks_t*)>*), "_VIDEO_PORT_I2C_INTERFACE.I2CStop", i2c_stop, 0x140, 0x40, true, 0xaf88930aed36971a)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<uint8_t(void*, struct nt::i2c_callbacks_t*, uint8_t*, uint32_t)>*), "_VIDEO_PORT_I2C_INTERFACE.I2CWrite", i2c_write, 0x180, 0x40, true, 0x8ed0be13068906fa)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<uint8_t(void*, struct nt::i2c_callbacks_t*, uint8_t*, uint32_t)>*), "_VIDEO_PORT_I2C_INTERFACE.I2CRead", i2c_read, 0x1c0, 0x40, true, 0x5323f2dc3bd7510)
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