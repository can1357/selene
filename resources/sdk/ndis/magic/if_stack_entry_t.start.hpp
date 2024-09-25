#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_NDIS_IF_STACK_ENTRY.Link", link, 0x0, 0x80, true, 0xb46e765103ec1021)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_IF_STACK_ENTRY.HigherLayerIfIndex", higher_layer_if_index, 0x80, 0x20, true, 0x5f84322919337e96)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_IF_STACK_ENTRY.LowerLayerIfIndex", lower_layer_if_index, 0xa0, 0x20, true, 0x97cf51615a27a607)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::if_block_t*), "_NDIS_IF_STACK_ENTRY.HigherLayerIf", higher_layer_if, 0xc0, 0x40, true, 0x4a066ed63f80315)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::if_block_t*), "_NDIS_IF_STACK_ENTRY.LowerLayerIf", lower_layer_if, 0x100, 0x40, true, 0x206d9bc1ad09acd8)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif