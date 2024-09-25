#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WIM_PROVIDER_ADD_OVERLAY_INPUT.WimType", wim_type, 0x0, 0x20, true, 0x81ff37e6f39e4471)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WIM_PROVIDER_ADD_OVERLAY_INPUT.WimIndex", wim_index, 0x20, 0x20, true, 0x5cd87e2ee5eb3e33)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WIM_PROVIDER_ADD_OVERLAY_INPUT.WimFileNameOffset", wim_file_name_offset, 0x40, 0x20, true, 0x81629dcb0ae8341)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WIM_PROVIDER_ADD_OVERLAY_INPUT.WimFileNameLength", wim_file_name_length, 0x60, 0x20, true, 0xb4aad251437e9732)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif