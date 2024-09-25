#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDFVERSION.Size", size, 0x0, 0x20, true, 0xfdd836234f3cae27)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDFVERSION.FuncCount", func_count, 0x20, 0x20, true, 0x644c650fa512a113)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdffunctions_t), "_WDFVERSION.Functions", functions, 0x40, 0x80, true, 0x6ad1958de351ea34)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDFVERSION.StructCount", struct_count, 0x72c0, 0x20, true, 0xc13a945f18bea5ca)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfstructures_t), "_WDFVERSION.Structures", structures, 0x7300, 0x40, true, 0x914774b0d26d2d3a)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif