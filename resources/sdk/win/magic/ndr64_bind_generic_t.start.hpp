#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDR64_BIND_GENERIC.HandleType", handle_type, 0x0, 0x8, true, 0x4aa9012c69580b02)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDR64_BIND_GENERIC.Flags", flags, 0x8, 0x8, true, 0xf4e13d9d26d11f0a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDR64_BIND_GENERIC.StackOffset", stack_offset, 0x10, 0x10, true, 0x3e0e6f926a5e3759)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDR64_BIND_GENERIC.RoutineIndex", routine_index, 0x20, 0x8, true, 0x12da8e263aa3c976)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDR64_BIND_GENERIC.Size", size, 0x28, 0x8, true, 0xd1ac15302f266af7)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif