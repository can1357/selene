#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_VIDPNSOURCEOWNER_FLAGS.AllowOutputDuplication", allow_output_duplication, 0x0, 0x1, true, 0x9a951a65c96dd86e, 1, uint32_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_VIDPNSOURCEOWNER_FLAGS.DisableDWMVirtualMode", disable_dwm_virtual_mode, 0x1, 0x1, true, 0x984dafc74da18bc8, 1, uint32_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_VIDPNSOURCEOWNER_FLAGS.UseNtHandles", use_nt_handles, 0x2, 0x1, true, 0x1615b0e6ec804194, 1, uint32_t)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_VIDPNSOURCEOWNER_FLAGS.Value", value, 0x0, 0x20, true, 0x1e71445e492a25c8)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif