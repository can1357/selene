#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint64_t, 8>), "ARM64_REGISTER_PARAMS.Xx", xx, 0x0, 0x0, true, 0xf451bf46301c9dd4)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<sdk::array<uint64_t, 2>, 8>), "ARM64_REGISTER_PARAMS.Vx", vx, 0x200, 0x0, true, 0xd592b32b719bb667)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "ARM64_REGISTER_PARAMS.VfpUsed", vfp_used, 0x600, 0x20, true, 0x13fbc0232dc21362)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "ARM64_REGISTER_PARAMS.StackSize", stack_size, 0x620, 0x20, true, 0xd99c6679b99289f5)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t*), "ARM64_REGISTER_PARAMS.StartOfStack", start_of_stack, 0x640, 0x40, true, 0xbe53f95212ed7c02)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif