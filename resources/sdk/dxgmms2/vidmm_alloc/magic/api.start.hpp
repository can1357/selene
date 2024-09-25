#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0VIDMM_ALLOC@@QEAA@XZ$dxgmms2.sys", 0x22eac, 0x0, true, 0x18007ec94b332362)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$DecrementPagingPacketReferenceCount@VIDMM_ALLOC$dxgmms2.sys", 0x23498, 0x0, true, 0xe33cf119e6069d3c)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetGpuVirtualAddress@VIDMM_ALLOC$dxgmms2.sys", 0x847b8, 0x0, true, 0x5bada007d681ad9c)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#endif