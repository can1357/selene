#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDFMEMORY_OFFSET_V1_15.BufferOffset", buffer_offset, 0x0, 0x0, false, 0x79fec7eefc9587fb)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDFMEMORY_OFFSET_V1_15.BufferLength", buffer_length, 0x0, 0x0, false, 0x64062cb1d313d87d)
#else
#define _m00
#define _m01
#endif