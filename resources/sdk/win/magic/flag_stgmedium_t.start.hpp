#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_FLAG_STGMEDIUM.ContextFlags", context_flags, 0x0, 0x20, true, 0xaed0e660fe0c6ecb)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_FLAG_STGMEDIUM.fPassOwnership", f_pass_ownership, 0x20, 0x20, true, 0x763e6d636d4ea796)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::stgmedium_t), "_FLAG_STGMEDIUM.Stgmed", stgmed, 0x40, 0xc0, true, 0xb863b1051de648b6)
#else
#define _m00
#define _m01
#define _m02
#endif