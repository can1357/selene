#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 4>), "tagLOCALESIGNATURE.lsUsb", ls_usb, 0x0, 0x80, true, 0xe36c53dac2c82a0b)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 2>), "tagLOCALESIGNATURE.lsCsbDefault", ls_csb_default, 0x80, 0x40, true, 0x79f57cc7558d3653)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 2>), "tagLOCALESIGNATURE.lsCsbSupported", ls_csb_supported, 0xc0, 0x40, true, 0x6d28462c73d11c65)
#else
#define _m00
#define _m01
#define _m02
#endif