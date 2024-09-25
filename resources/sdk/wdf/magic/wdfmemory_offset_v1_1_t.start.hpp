#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDFMEMORY_OFFSET_V1_1.BufferOffset", buffer_offset, 0x0, 0x0, false, 0x20ba36f5705ed351)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDFMEMORY_OFFSET_V1_1.BufferLength", buffer_length, 0x0, 0x0, false, 0xfe7738ddc81b73fe)
#else
#define _m00
#define _m01
#endif