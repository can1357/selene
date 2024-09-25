#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mdl_t*), "FxMdlDebugInfo.Mdl", mdl, 0x0, 0x40, true, 0x9b04e07a6f7b73bf)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::object_t*), "FxMdlDebugInfo.Owner", owner, 0x40, 0x40, true, 0x60be07971a4a25fc)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "FxMdlDebugInfo.Caller", caller, 0x80, 0x40, true, 0xcc24ab3758b44695)
#else
#define _m00
#define _m01
#define _m02
#endif