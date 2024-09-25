#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARGCB_MAPFRAMEBUFFERPOINTER.PhysicalAdapterIndex", physical_adapter_index, 0x0, 0x20, true, 0x75bc99309633e2ea)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DXGKARGCB_MAPFRAMEBUFFERPOINTER.Size", size, 0x40, 0x40, true, 0xed76557752cbd6ee)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DXGKARGCB_MAPFRAMEBUFFERPOINTER.Offset", offset, 0x80, 0x40, true, 0x4c02be64469233b)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGKARGCB_MAPFRAMEBUFFERPOINTER.pBaseAddress", p_base_address, 0xc0, 0x40, true, 0x78f9d83c930da12f)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif