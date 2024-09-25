#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDFMEMORY_OFFSET_V1_5.BufferOffset", buffer_offset, 0x0, 0x0, false, 0xb91c6ef4cd49b759)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDFMEMORY_OFFSET_V1_5.BufferLength", buffer_length, 0x0, 0x0, false, 0xfaba8f759a1df84f)
#else
#define _m00
#define _m01
#endif