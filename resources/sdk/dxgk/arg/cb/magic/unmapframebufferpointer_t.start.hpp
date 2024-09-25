#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARGCB_UNMAPFRAMEBUFFERPOINTER.PhysicalAdapterIndex", physical_adapter_index, 0x0, 0x20, true, 0x57ae51f0d0ec249a)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGKARGCB_UNMAPFRAMEBUFFERPOINTER.pBaseAddress", p_base_address, 0x40, 0x40, true, 0xd1739249bbf51f3d)
#else
#define _m00
#define _m01
#endif