#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDFMEMORY_OFFSET_V1_9.BufferOffset", buffer_offset, 0x0, 0x0, false, 0x583f7cf45d14bd9a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDFMEMORY_OFFSET_V1_9.BufferLength", buffer_length, 0x0, 0x0, false, 0xd3f1a9153e2fb9a9)
#else
#define _m00
#define _m01
#endif