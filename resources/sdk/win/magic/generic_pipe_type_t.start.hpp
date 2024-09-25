#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(ndr_hr_pipe_pull_rtn_t ), "_GENERIC_PIPE_TYPE.pfnPull", pfn_pull, 0x0, 0x40, true, 0xc3fc5e4050e4aa76)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(char*, void*, uint32_t)>*), "_GENERIC_PIPE_TYPE.pfnPush", pfn_push, 0x40, 0x40, true, 0x2cc186c8e3c23bae)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(ndr_hr_pipe_alloc_rtn_t ), "_GENERIC_PIPE_TYPE.pfnAlloc", pfn_alloc, 0x80, 0x40, true, 0x67bc45ff22c732c1)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char*), "_GENERIC_PIPE_TYPE.pState", p_state, 0xc0, 0x40, true, 0x7bea8e3278eb439a)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif