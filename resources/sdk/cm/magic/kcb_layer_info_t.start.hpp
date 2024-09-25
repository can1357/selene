#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_CM_KCB_LAYER_INFO.LayerListEntry", layer_list_entry, 0x0, 0x80, true, 0x148f296ff4f9da82)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct cm::key_control_block_t*), "_CM_KCB_LAYER_INFO.Kcb", kcb, 0x80, 0x40, true, 0x78d1453754b37141)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct cm::kcb_layer_info_t*), "_CM_KCB_LAYER_INFO.LowerLayer", lower_layer, 0xc0, 0x40, true, 0xcea5f7706232d47e)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_CM_KCB_LAYER_INFO.UpperLayerListHead", upper_layer_list_head, 0x100, 0x80, true, 0xe69971c8d0b354f5)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif