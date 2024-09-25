#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagMEASUREITEMSTRUCT.CtlType", ctl_type, 0x0, 0x20, true, 0x850287b44de95cae)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagMEASUREITEMSTRUCT.CtlID", ctl_id, 0x20, 0x20, true, 0x8c2cd7ac15bec319)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagMEASUREITEMSTRUCT.itemID", item_id, 0x40, 0x20, true, 0x3e6d739557894bb9)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagMEASUREITEMSTRUCT.itemWidth", item_width, 0x60, 0x20, true, 0x4ecc974363d862d7)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagMEASUREITEMSTRUCT.itemHeight", item_height, 0x80, 0x20, true, 0xe7769f6ee2e6b8fd)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "tagMEASUREITEMSTRUCT.itemData", item_data, 0xc0, 0x40, true, 0x934f819952365161)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif