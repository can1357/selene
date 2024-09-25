#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct kuser::tl_t*), "_TL.next", next, 0x0, 0x40, true, 0x71d4790b4a19a237)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_TL.pobj", pobj, 0x40, 0x40, true, 0xcc7a5b9ab93397e6)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_TL.pfnFree", pfn_free, 0x80, 0x40, true, 0xefaf6a25370d5b21)
#else
#define _m00
#define _m01
#define _m02
#endif