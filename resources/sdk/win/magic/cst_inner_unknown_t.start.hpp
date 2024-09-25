#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CSTInnerUnknown._iRefCount", i_ref_count, 0x40, 0x20, true, 0xe7e0b87dbc3250fa)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::c_std_event_t*), "CSTInnerUnknown._pParent", p_parent, 0x80, 0x40, true, 0xd63546cdd612b9c3)
#else
#define _m00
#define _m01
#endif