#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_GETSCANLINE.VidPnTargetId", vid_pn_target_id, 0x0, 0x20, true, 0x521b130431bc9289)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXGKARG_GETSCANLINE.InVerticalBlank", in_vertical_blank, 0x20, 0x8, true, 0x2ce67d33455922ec)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_GETSCANLINE.ScanLine", scan_line, 0x40, 0x20, true, 0x506fa819639252e8)
#else
#define _m00
#define _m01
#define _m02
#endif