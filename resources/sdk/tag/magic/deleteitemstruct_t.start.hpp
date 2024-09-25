#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagDELETEITEMSTRUCT.CtlType", ctl_type, 0x0, 0x20, true, 0x60c019b678843949)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagDELETEITEMSTRUCT.CtlID", ctl_id, 0x20, 0x20, true, 0xb5e408d601d262e6)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagDELETEITEMSTRUCT.itemID", item_id, 0x40, 0x20, true, 0x693e4e489485cee1)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::hwnd_t*), "tagDELETEITEMSTRUCT.hwndItem", hwnd_item, 0x80, 0x40, true, 0x4598d6b7ce22f557)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "tagDELETEITEMSTRUCT.itemData", item_data, 0xc0, 0x40, true, 0x9e265458ec63469f)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif