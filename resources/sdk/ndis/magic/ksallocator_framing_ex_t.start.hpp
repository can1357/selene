#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "KSALLOCATOR_FRAMING_EX.CountItems", count_items, 0x0, 0x0, false, 0xda4551a520980e0d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "KSALLOCATOR_FRAMING_EX.PinFlags", pin_flags, 0x0, 0x0, false, 0x2b5fec4635567e3a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::ks_compression_t), "KSALLOCATOR_FRAMING_EX.OutputCompression", output_compression, 0x0, 0x0, false, 0xd0c8949612dec3d5)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "KSALLOCATOR_FRAMING_EX.PinWeight", pin_weight, 0x0, 0x0, false, 0xe5b888cbb8281036)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct ndis::ks_framing_item_t, 1>), "KSALLOCATOR_FRAMING_EX.FramingItem", framing_item, 0x0, 0x0, false, 0x5981a10c7473aa30)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif