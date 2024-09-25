#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDFMEMORY_OFFSET_V1_17.BufferOffset", buffer_offset, 0x0, 0x0, false, 0xdcc0f47c890f4c32)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDFMEMORY_OFFSET_V1_17.BufferLength", buffer_length, 0x0, 0x0, false, 0xd0e182dacb77be89)
#else
#define _m00
#define _m01
#endif