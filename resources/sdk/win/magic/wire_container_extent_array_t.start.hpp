#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "WireContainerExtentArray.size", size, 0x0, 0x20, true, 0xb90041198d88d12c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "WireContainerExtentArray.ref", ref, 0x40, 0x20, true, 0x540337a1c3d98bc4)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "WireContainerExtentArray.rounded_size", rounded_size, 0x60, 0x20, true, 0x7af9e3d4705bfe42)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t>), "WireContainerExtentArray.unique_flag", unique_flag, 0x80, 0x0, true, 0x8f0d1499240fd83c)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif