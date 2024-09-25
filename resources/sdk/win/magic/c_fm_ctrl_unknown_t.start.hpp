#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::c_free_marshaler_t*), "CFmCtrlUnknown._pfm", pfm, 0x40, 0x40, true, 0x8710539dacce8795)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CFmCtrlUnknown._cRefs", c_refs, 0x80, 0x20, true, 0x75e1421960165c51)
#else
#define _m00
#define _m01
#endif