#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DDDI_RESOURCEFLAGS2.VideoEncoder", video_encoder, 0x0, 0x1, true, 0x8e8878a36ebaa2ad, 1, uint32_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DDDI_RESOURCEFLAGS2.UserMemory", user_memory, 0x1, 0x1, true, 0x2478808ea6967e94, 1, uint32_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DDDI_RESOURCEFLAGS2.CrossAdapter", cross_adapter, 0x2, 0x1, true, 0x1383f94e6492217a, 1, uint32_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DDDI_RESOURCEFLAGS2.IsDisplayable", is_displayable, 0x3, 0x1, true, 0x8be02c82efdf9bbf, 1, uint32_t)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DDDI_RESOURCEFLAGS2.Value", value, 0x0, 0x20, true, 0x41b4e6190ce8ca81)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif