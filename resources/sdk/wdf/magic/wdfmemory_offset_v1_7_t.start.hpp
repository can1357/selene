#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDFMEMORY_OFFSET_V1_7.BufferOffset", buffer_offset, 0x0, 0x0, false, 0x76b64830e68bf3aa)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDFMEMORY_OFFSET_V1_7.BufferLength", buffer_length, 0x0, 0x0, false, 0xca8e9eb130ac8956)
#else
#define _m00
#define _m01
#endif