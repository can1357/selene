#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagCOMPAREITEMSTRUCT.CtlType", ctl_type, 0x0, 0x20, true, 0x2962ef2570a064f0)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagCOMPAREITEMSTRUCT.CtlID", ctl_id, 0x20, 0x20, true, 0x680ed5935558970f)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::hwnd_t*), "tagCOMPAREITEMSTRUCT.hwndItem", hwnd_item, 0x40, 0x40, true, 0xb1dc9f9c2cb2fb61)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagCOMPAREITEMSTRUCT.itemID1", item_id1, 0x80, 0x20, true, 0x63b233546ebf15c5)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "tagCOMPAREITEMSTRUCT.itemData1", item_data1, 0xc0, 0x40, true, 0x13b9793138cfc54b)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagCOMPAREITEMSTRUCT.itemID2", item_id2, 0x100, 0x20, true, 0x83e733c10a8cb133)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "tagCOMPAREITEMSTRUCT.itemData2", item_data2, 0x140, 0x40, true, 0xcbfb27ae8b8717b6)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagCOMPAREITEMSTRUCT.dwLocaleId", dw_locale_id, 0x180, 0x20, true, 0xbfe37f2bc7ea6f11)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif