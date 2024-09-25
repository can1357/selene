#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_OUTPUTDUPLPRESENTFLAGS.ProtectedContentBlankedOut", protected_content_blanked_out, 0x0, 0x1, true, 0x2a1a72312d59439, 1, uint32_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_OUTPUTDUPLPRESENTFLAGS.RemoteSession", remote_session, 0x1, 0x1, true, 0xde25f6d3064df230, 1, uint32_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_OUTPUTDUPLPRESENTFLAGS.FullScreenPresent", full_screen_present, 0x2, 0x1, true, 0x5fbaddfd958b9dd4, 1, uint32_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_OUTPUTDUPLPRESENTFLAGS.PresentIndirect", present_indirect, 0x3, 0x1, true, 0x9ecc281efaf76a6d, 1, uint32_t)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_OUTPUTDUPLPRESENTFLAGS.Value", value, 0x0, 0x20, true, 0x7d190df1c15627b)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif