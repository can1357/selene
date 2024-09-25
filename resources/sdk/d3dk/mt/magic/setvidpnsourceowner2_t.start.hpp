#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3dk::mt::setvidpnsourceowner1_t), "_D3DKMT_SETVIDPNSOURCEOWNER2.Version1", version1, 0x0, 0x40, true, 0x20e1ad7a90a14df5)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(const void**), "_D3DKMT_SETVIDPNSOURCEOWNER2.pVidPnSourceNtHandles", p_vid_pn_source_nt_handles, 0x140, 0x40, true, 0xfbe527a74a085ef)
#else
#define _m00
#define _m01
#endif