#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::c_object_context_t*), "CContextSwitcher._context", context, 0x40, 0x40, true, 0x1dbfb270f623ad64)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "CContextSwitcher._cRefs", c_refs, 0x80, 0x20, true, 0x929887274be43d1e)
#else
#define _m00
#define _m01
#endif