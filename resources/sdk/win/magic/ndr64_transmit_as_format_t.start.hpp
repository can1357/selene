#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDR64_TRANSMIT_AS_FORMAT.FormatCode", format_code, 0x0, 0x8, true, 0x5331d4ec8f76a3c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDR64_TRANSMIT_AS_FORMAT.Flags", flags, 0x8, 0x8, true, 0xbf3b316dc3e9b620)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDR64_TRANSMIT_AS_FORMAT.RoutineIndex", routine_index, 0x10, 0x10, true, 0xb3afef6b90c6c4d0)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDR64_TRANSMIT_AS_FORMAT.TransmittedTypeWireAlignment", transmitted_type_wire_alignment, 0x20, 0x10, true, 0x9d532b0479515a51)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDR64_TRANSMIT_AS_FORMAT.MemoryAlignment", memory_alignment, 0x30, 0x10, true, 0x480cd425a56e4413)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDR64_TRANSMIT_AS_FORMAT.PresentedTypeMemorySize", presented_type_memory_size, 0x40, 0x20, true, 0x6f7cc131af022ac)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDR64_TRANSMIT_AS_FORMAT.TransmittedTypeBufferSize", transmitted_type_buffer_size, 0x60, 0x20, true, 0x308f4c150228687c)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const void*), "_NDR64_TRANSMIT_AS_FORMAT.TransmittedType", transmitted_type, 0x80, 0x40, true, 0x451acfdd397ad0c4)
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