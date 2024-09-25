#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::mdl_t*), "_DXGKARGCB_MAPMDLTOIOMMU.pMdl", p_mdl, 0x0, 0x40, true, 0xa66cfa0ffeba33fc)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGKARGCB_MAPMDLTOIOMMU.hMemoryHandle", h_memory_handle, 0x40, 0x40, true, 0x91affa6420c177b0)
#else
#define _m00
#define _m01
#endif