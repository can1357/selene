#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::balanced_node_t), "_ETW_PROVIDER_TRAITS.Node", node, 0x0, 0xc0, true, 0xbbdf6d7a07d98522)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_PROVIDER_TRAITS.ReferenceCount", reference_count, 0xc0, 0x20, true, 0xeb3fb2561ae378bc)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 1>), "_ETW_PROVIDER_TRAITS.Traits", traits, 0xe0, 0x8, true, 0xeab1cf873b85d02e)
#else
#define _m00
#define _m01
#define _m02
#endif