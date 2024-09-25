#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARGCB_PINFRAMEBUFFERFORSAVE.PhysicalAdapterIndex", physical_adapter_index, 0x0, 0x20, true, 0xd05e8d6c0b9fee91)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DXGKARGCB_PINFRAMEBUFFERFORSAVE.CommitSize", commit_size, 0x40, 0x40, true, 0xeac36c7b5852f107)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::mdl_t*), "_DXGKARGCB_PINFRAMEBUFFERFORSAVE.pMdl", p_mdl, 0x80, 0x40, true, 0xd19ac52efe0f36d8)
#else
#define _m00
#define _m01
#define _m02
#endif