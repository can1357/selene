#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CMREInnerUnknown._iRefCount", i_ref_count, 0x40, 0x20, true, 0x95b2bffdb5a12653)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::c_manual_reset_event_t*), "CMREInnerUnknown._pParent", p_parent, 0x80, 0x40, true, 0xb14f308a779c414f)
#else
#define _m00
#define _m01
#endif