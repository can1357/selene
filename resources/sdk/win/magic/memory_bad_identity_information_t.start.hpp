#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_MEMORY_BAD_IDENTITY_INFORMATION.VirtualAddress", virtual_address, 0x0, 0x0, false, 0xc862776f1078a280)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MEMORY_BAD_IDENTITY_INFORMATION.PageFrameIndex", page_frame_index, 0x0, 0x0, false, 0xe8479ab9ccb7c5a2)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MEMORY_BAD_IDENTITY_INFORMATION.Poisoned", poisoned, 0x0, 0x0, false, 0xd0ee80718af9512b, 1, uint64_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MEMORY_BAD_IDENTITY_INFORMATION.Physical", physical, 0x0, 0x0, false, 0x19feadbf910b3ad1, 1, uint64_t)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MEMORY_BAD_IDENTITY_INFORMATION.AllInformation", all_information, 0x0, 0x0, false, 0x28f19b232f1fa83)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif