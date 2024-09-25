#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_MULTIPLANEOVERLAY_STRETCH_SUPPORT.VidPnSourceId", vid_pn_source_id, 0x0, 0x20, true, 0x2cabfe5ba98cc6b)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_D3DKMT_MULTIPLANEOVERLAY_STRETCH_SUPPORT.Update", update, 0x20, 0x20, true, 0x73a45cbacb868d94)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_D3DKMT_MULTIPLANEOVERLAY_STRETCH_SUPPORT.Supported", supported, 0x40, 0x20, true, 0x235f364210c2f89a)
#else
#define _m00
#define _m01
#define _m02
#endif