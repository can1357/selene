#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_CREATECONTEXTFLAGS.SystemContext", system_context, 0x0, 0x1, true, 0x2d2dd4cf42d93e9a, 1, uint32_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_CREATECONTEXTFLAGS.GdiContext", gdi_context, 0x1, 0x1, true, 0x3138154fc2ef3999, 1, uint32_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_CREATECONTEXTFLAGS.VirtualAddressing", virtual_addressing, 0x2, 0x1, true, 0x7a606351e93aa0d3, 1, uint32_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_CREATECONTEXTFLAGS.SystemProtectedContext", system_protected_context, 0x3, 0x1, true, 0xef681d31d06f84a, 1, uint32_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_CREATECONTEXTFLAGS.HwQueueSupported", hw_queue_supported, 0x4, 0x1, true, 0xda5a9dec7b93e035, 1, uint32_t)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_CREATECONTEXTFLAGS.Value", value, 0x0, 0x20, true, 0xd5805167f3271d4d)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif