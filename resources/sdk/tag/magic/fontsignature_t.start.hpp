#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 4>), "tagFONTSIGNATURE.fsUsb", fs_usb, 0x0, 0x80, true, 0x23104a0838c26cda)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 2>), "tagFONTSIGNATURE.fsCsb", fs_csb, 0x80, 0x40, true, 0xd91910e4a1f94cd6)
#else
#define _m00
#define _m01
#endif