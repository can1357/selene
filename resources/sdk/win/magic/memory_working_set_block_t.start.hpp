#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint5_t), "_MEMORY_WORKING_SET_BLOCK.Protection", protection, 0x0, 0x5, true, 0x1d54cf5d4200b716, 5, uint64_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_MEMORY_WORKING_SET_BLOCK.ShareCount", share_count, 0x5, 0x3, true, 0x43de84a0617ec96d, 3, uint64_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MEMORY_WORKING_SET_BLOCK.Shared", shared, 0x8, 0x1, true, 0xe124bd3f905a8b40, 1, uint64_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_MEMORY_WORKING_SET_BLOCK.Node", node, 0x9, 0x3, true, 0x62dc7b799530cc17, 3, uint64_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint52_t), "_MEMORY_WORKING_SET_BLOCK.VirtualPage", virtual_page, 0xc, 0x34, true, 0xb3cbfed980233724, 52, uint64_t)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif