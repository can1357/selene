#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::d3dgpu_physical_address_t), "_DXGK_BUILDPAGINGBUFFER_FLUSHTLB.RootPageTableAddress", root_page_table_address, 0x0, 0x80, true, 0x91d87a92c91fb6d5)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGK_BUILDPAGINGBUFFER_FLUSHTLB.hProcess", h_process, 0x80, 0x40, true, 0x5cc079eec4e47595)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DXGK_BUILDPAGINGBUFFER_FLUSHTLB.StartVirtualAddress", start_virtual_address, 0xc0, 0x40, true, 0xfce90c0a315392f6)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DXGK_BUILDPAGINGBUFFER_FLUSHTLB.EndVirtualAddress", end_virtual_address, 0x100, 0x40, true, 0xe17ab04c51f39ef8)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif