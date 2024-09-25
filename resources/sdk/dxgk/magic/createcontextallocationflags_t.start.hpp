#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_CREATECONTEXTALLOCATIONFLAGS.SharedAcrossContexts", shared_across_contexts, 0x0, 0x1, true, 0x1f5fa1ffb7b6add3, 1, uint32_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_CREATECONTEXTALLOCATIONFLAGS.MapGpuVirtualAddress", map_gpu_virtual_address, 0x1, 0x1, true, 0xfd8abe0919a4b9fe, 1, uint32_t)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_CREATECONTEXTALLOCATIONFLAGS.Value", value, 0x0, 0x20, true, 0xa50551029062b98)
#else
#define _m00
#define _m01
#define _m02
#endif