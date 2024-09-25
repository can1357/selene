#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DRIVE_LAYOUT_INFORMATION_MBR.Signature", signature, 0x0, 0x20, true, 0x26279b9d610707ff)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DRIVE_LAYOUT_INFORMATION_MBR.CheckSum", check_sum, 0x20, 0x20, true, 0xb4dbc6724a921d65)
#else
#define _m00
#define _m01
#endif