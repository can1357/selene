#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDFMEMORY_OFFSET_V1_13.BufferOffset", buffer_offset, 0x0, 0x0, false, 0xa61e84258f545b4)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDFMEMORY_OFFSET_V1_13.BufferLength", buffer_length, 0x0, 0x0, false, 0xc152cbe6b209dea1)
#else
#define _m00
#define _m01
#endif