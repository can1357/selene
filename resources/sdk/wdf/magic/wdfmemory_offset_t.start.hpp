#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDFMEMORY_OFFSET.BufferOffset", buffer_offset, 0x0, 0x40, true, 0xfc1334c6f1397efa)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDFMEMORY_OFFSET.BufferLength", buffer_length, 0x40, 0x40, true, 0x970ed8a161ba7609)
#else
#define _m00
#define _m01
#endif