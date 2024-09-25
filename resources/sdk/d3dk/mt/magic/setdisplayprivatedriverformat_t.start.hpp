#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_SETDISPLAYPRIVATEDRIVERFORMAT.hDevice", h_device, 0x0, 0x20, true, 0xb2da6fb656b3be1a)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_SETDISPLAYPRIVATEDRIVERFORMAT.VidPnSourceId", vid_pn_source_id, 0x20, 0x20, true, 0x183b1cfe32df059e)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_SETDISPLAYPRIVATEDRIVERFORMAT.PrivateDriverFormatAttribute", private_driver_format_attribute, 0x40, 0x20, true, 0xb776fcd77f25d124)
#else
#define _m00
#define _m01
#define _m02
#endif