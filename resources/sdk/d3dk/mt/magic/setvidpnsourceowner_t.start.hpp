#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_SETVIDPNSOURCEOWNER.hDevice", h_device, 0x0, 0x20, true, 0xbc705a80193e0938)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(const enum d3dk::mt::vidpnsourceowner_type_t*), "_D3DKMT_SETVIDPNSOURCEOWNER.pType", p_type, 0x40, 0x40, true, 0x1dd367ee46809a35)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(const uint32_t*), "_D3DKMT_SETVIDPNSOURCEOWNER.pVidPnSourceId", p_vid_pn_source_id, 0x80, 0x40, true, 0xfa09b80741ad2733)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_SETVIDPNSOURCEOWNER.VidPnSourceCount", vid_pn_source_count, 0xc0, 0x20, true, 0xab86d4902f844dbd)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif