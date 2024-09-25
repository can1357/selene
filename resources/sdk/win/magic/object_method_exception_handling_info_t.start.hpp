#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "ObjectMethodExceptionHandlingInfo.pvObject", pv_object, 0x0, 0x40, true, 0x317224ca10ab009a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "ObjectMethodExceptionHandlingInfo.iid", iid, 0x40, 0x80, true, 0x7db28ee1085b6a6f)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "ObjectMethodExceptionHandlingInfo.iMethod", i_method, 0xc0, 0x20, true, 0xb00aa4c0c8ac9933)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "ObjectMethodExceptionHandlingInfo.pVtableAddress", p_vtable_address, 0x100, 0x40, true, 0xcf340050b9cfce3e)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const char*), "ObjectMethodExceptionHandlingInfo.pszPossibleCause", psz_possible_cause, 0x140, 0x40, true, 0xfc21d080c81a63db)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif