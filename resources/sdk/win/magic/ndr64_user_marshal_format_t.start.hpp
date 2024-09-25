#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDR64_USER_MARSHAL_FORMAT.FormatCode", format_code, 0x0, 0x8, true, 0x8b9d6b43e1b23988)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDR64_USER_MARSHAL_FORMAT.Flags", flags, 0x8, 0x8, true, 0xbba2ddb9b6af8713)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDR64_USER_MARSHAL_FORMAT.RoutineIndex", routine_index, 0x10, 0x10, true, 0x448575c26765d4b9)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDR64_USER_MARSHAL_FORMAT.TransmittedTypeWireAlignment", transmitted_type_wire_alignment, 0x20, 0x10, true, 0x91748023270467e)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDR64_USER_MARSHAL_FORMAT.MemoryAlignment", memory_alignment, 0x30, 0x10, true, 0xa02bbe3203fd258a)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDR64_USER_MARSHAL_FORMAT.UserTypeMemorySize", user_type_memory_size, 0x40, 0x20, true, 0x57f49b49cf4529d)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDR64_USER_MARSHAL_FORMAT.TransmittedTypeBufferSize", transmitted_type_buffer_size, 0x60, 0x20, true, 0xeaf05437ae7c321)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const void*), "_NDR64_USER_MARSHAL_FORMAT.TransmittedType", transmitted_type, 0x80, 0x40, true, 0xb1825d33b7d9a0c9)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif