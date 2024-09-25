#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_GETSCANLINE.hAdapter", h_adapter, 0x0, 0x20, true, 0xb90e12550e8d0e82)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_GETSCANLINE.VidPnSourceId", vid_pn_source_id, 0x20, 0x20, true, 0x6b1b135edf596621)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_D3DKMT_GETSCANLINE.InVerticalBlank", in_vertical_blank, 0x40, 0x8, true, 0x5920a26a01c79f38)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_GETSCANLINE.ScanLine", scan_line, 0x60, 0x20, true, 0xe1452a9666e998eb)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif