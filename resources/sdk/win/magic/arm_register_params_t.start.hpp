#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 4>), "ARM_REGISTER_PARAMS.Rx", rx, 0x0, 0x80, true, 0x3e444927796acd36)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "ARM_REGISTER_PARAMS.VfpUsed", vfp_used, 0x80, 0x20, true, 0x60a85d5cbe9b3d7f)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 16>), "ARM_REGISTER_PARAMS.Vfpx", vfpx, 0xa0, 0x0, true, 0xbd85f8cd959fa758)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "ARM_REGISTER_PARAMS.StackSize", stack_size, 0x2a0, 0x20, true, 0x25c5db60b2cf915c)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t*), "ARM_REGISTER_PARAMS.StartOfStack", start_of_stack, 0x2c0, 0x40, true, 0x313ba546969ae17f)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif