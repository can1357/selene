#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::slist_entry_t), "_IO_RESOURCE_ENTRY.Entry", entry, 0x0, 0x80, true, 0x554e71a524427e0d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IO_RESOURCE_ENTRY.HashIndex", hash_index, 0x0, 0x20, true, 0xdff656c0c53b3b62)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct stor::port::extended_request_block_t), "_IO_RESOURCE_ENTRY.Xrb", xrb, 0x100, 0x0, true, 0xb629fcc87d6a9c98)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 256>), "_IO_RESOURCE_ENTRY.SenseInfoBuffer", sense_info_buffer, 0x1a00, 0x0, true, 0x84d03be9d7303b9f)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t>), "_IO_RESOURCE_ENTRY.SrbExtension", srb_extension, 0x2200, 0x0, true, 0x55e3d80eafb15bd7)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IO_RESOURCE_ENTRY.Length", length, 0x80, 0x20, true, 0x52fa684eb666dde)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IO_RESOURCE_ENTRY.Padd", padd, 0xa0, 0x20, true, 0xc227808e539114d3)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_IO_RESOURCE_ENTRY.LogicalAddress", logical_address, 0xc0, 0x40, true, 0x8fab5183c26372e8)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_IO_RESOURCE_ENTRY.Gateway", gateway, 0x0, 0x0, false, 0xbd13b24b79ebc52a)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#endif