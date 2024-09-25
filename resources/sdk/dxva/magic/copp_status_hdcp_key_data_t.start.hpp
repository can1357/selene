#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_DXVA_COPPStatusHDCPKeyData.rApp", r_app, 0x0, 0x80, true, 0x6abd9cb85d4d8e9)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXVA_COPPStatusHDCPKeyData.dwFlags", dw_flags, 0x80, 0x20, true, 0x6bb71bda4b227ae2)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXVA_COPPStatusHDCPKeyData.dwHDCPFlags", dw_hdcp_flags, 0xa0, 0x20, true, 0xf63fbc798e681046)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_DXVA_COPPStatusHDCPKeyData.BKey", b_key, 0xc0, 0x80, true, 0x1782abde6fc0bc47)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif