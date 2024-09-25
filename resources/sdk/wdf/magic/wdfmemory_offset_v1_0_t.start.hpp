#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDFMEMORY_OFFSET_V1_0.BufferOffset", buffer_offset, 0x0, 0x0, false, 0x9fdd919bbc139421)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDFMEMORY_OFFSET_V1_0.BufferLength", buffer_length, 0x0, 0x0, false, 0x2db9e4cd60805abb)
#else
#define _m00
#define _m01
#endif