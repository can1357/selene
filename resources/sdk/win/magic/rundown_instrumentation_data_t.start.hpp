#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "RundownInstrumentationData.method", method, 0x80, 0x20, true, 0x8cc39731452fae2f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum win::which_type_of_rundown_t), "RundownInstrumentationData.whichTypeOfRundown", which_type_of_rundown, 0x120, 0x20, true, 0xa58ac2412dcff57c)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "RundownInstrumentationData.iidOfCall", iid_of_call, 0x0, 0x80, true, 0x4f5baa5da8544120)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "RundownInstrumentationData.ipid", ipid, 0xa0, 0x80, true, 0x211dd46b89475ac7)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "RundownInstrumentationData.implementedInterface1", implemented_interface1, 0x140, 0x80, true, 0xbc02f557b330f3ad)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "RundownInstrumentationData.implementedInterface2", implemented_interface2, 0x1c0, 0x80, true, 0x6a9289acdb428e5c)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "RundownInstrumentationData.implementedInterface3", implemented_interface3, 0x240, 0x80, true, 0xa9ac2b4997f17d34)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "RundownInstrumentationData.riid", riid, 0x0, 0x0, false, 0xd81b3b67b2fdb09f)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "RundownInstrumentationData.ripid", ripid, 0x0, 0x0, false, 0xb1b951f0d2ce4b6a)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#endif