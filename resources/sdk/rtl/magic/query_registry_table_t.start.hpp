#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(prtl_query_registry_routine_t ), "_RTL_QUERY_REGISTRY_TABLE.QueryRoutine", query_routine, 0x0, 0x40, true, 0x2204f0ff447f75b9)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_QUERY_REGISTRY_TABLE.Flags", flags, 0x40, 0x20, true, 0xf2f0948eb2fc11dd)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(wchar_t*), "_RTL_QUERY_REGISTRY_TABLE.Name", name, 0x80, 0x40, true, 0x9b209c624298bec7)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_RTL_QUERY_REGISTRY_TABLE.EntryContext", entry_context, 0xc0, 0x40, true, 0xbf703c6e8ddee5d0)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_QUERY_REGISTRY_TABLE.DefaultType", default_type, 0x100, 0x20, true, 0x1654caf380831b52)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_RTL_QUERY_REGISTRY_TABLE.DefaultData", default_data, 0x140, 0x40, true, 0xc0626c3e6ec4d850)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_QUERY_REGISTRY_TABLE.DefaultLength", default_length, 0x180, 0x20, true, 0x699bfb63540935b3)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif