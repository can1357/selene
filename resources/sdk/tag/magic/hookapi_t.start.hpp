#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const char*), "tagHOOKAPI.pszModule", psz_module, 0x0, 0x40, true, 0xe6446da293626bb6)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const char*), "tagHOOKAPI.pszFunctionName", psz_function_name, 0x40, 0x40, true, 0x99f3cd7410543ded)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "tagHOOKAPI.pfnNew", pfn_new, 0x80, 0x40, true, 0xb3d1e7b443559aca)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "tagHOOKAPI.pfnOld", pfn_old, 0xc0, 0x40, true, 0x202dd710ca4a1b76)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagHOOKAPI.dwFlags", dw_flags, 0x100, 0x20, true, 0x107693fe48a12b59)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::hookapiex_t*), "tagHOOKAPI.pHookEx", p_hook_ex, 0x140, 0x40, true, 0xfb44209b34b37853)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif