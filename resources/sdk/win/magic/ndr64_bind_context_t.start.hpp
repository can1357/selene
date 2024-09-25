#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDR64_BIND_CONTEXT.HandleType", handle_type, 0x0, 0x8, true, 0x46efbed8d237c227)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDR64_BIND_CONTEXT.Flags", flags, 0x8, 0x8, true, 0x20ab8c4dd813b738)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDR64_BIND_CONTEXT.StackOffset", stack_offset, 0x10, 0x10, true, 0xbaebb1eef7fb11f2)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDR64_BIND_CONTEXT.RoutineIndex", routine_index, 0x20, 0x8, true, 0x93aaaac2aa890a0e)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDR64_BIND_CONTEXT.Ordinal", ordinal, 0x28, 0x8, true, 0x428c29ffe155fa99)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif