#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int16_t), "_MUILANGCFGNODE.LangSpec", lang_spec, 0x0, 0x10, true, 0x30a858c5987005af)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_MUILANGCFGNODE.FallbackTypes", fallback_types, 0x10, 0x10, true, 0x8d14bb093cc37b71)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<int16_t, 3>), "_MUILANGCFGNODE.FallbackSpecs", fallback_specs, 0x30, 0x30, true, 0x30c9731e65fceba2)
#else
#define _m00
#define _m01
#define _m02
#endif