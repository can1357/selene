#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint8_t), "_POOL_EXTENDED_PARAMETER.Type", type, 0x0, 0x8, true, 0xa6e6445bc4144f4e, 8, uint64_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_POOL_EXTENDED_PARAMETER.Optional", optional, 0x8, 0x1, true, 0xa8f9758dc3e1339b, 1, uint64_t)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum ex::pool_priority_t), "_POOL_EXTENDED_PARAMETER.Priority", priority, 0x40, 0x20, true, 0x6301ec4ab51f0c96)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct ndis::pool_extended_params_secure_pool_t*), "_POOL_EXTENDED_PARAMETER.SecurePoolParams", secure_pool_params, 0x40, 0x40, true, 0xfbd033f42697c239)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_POOL_EXTENDED_PARAMETER.PreferredNode", preferred_node, 0x40, 0x20, true, 0xb035b703dd8cae5e)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif