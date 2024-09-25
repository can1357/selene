#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_FORMAT_LIST_HEADER.VendorSpecific", vendor_specific, 0x8, 0x1, true, 0xa683c6dbb78b797b, 1, uint8_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_FORMAT_LIST_HEADER.Immediate", immediate, 0x9, 0x1, true, 0xdeae288d8dbb6dfd, 1, uint8_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_FORMAT_LIST_HEADER.TryOut", try_out, 0xa, 0x1, true, 0x54f46a8de1e88b4e, 1, uint8_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_FORMAT_LIST_HEADER.IP", ip, 0xb, 0x1, true, 0xb481b21b0167dd08, 1, uint8_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_FORMAT_LIST_HEADER.STPF", stpf, 0xc, 0x1, true, 0xa8c2e107ccf74e0a, 1, uint8_t)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_FORMAT_LIST_HEADER.DCRT", dcrt, 0xd, 0x1, true, 0x515ed86a88d2eba3, 1, uint8_t)
#define _m06 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_FORMAT_LIST_HEADER.DPRY", dpry, 0xe, 0x1, true, 0xe6293dfdbd145556, 1, uint8_t)
#define _m07 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_FORMAT_LIST_HEADER.FOV", fov, 0xf, 0x1, true, 0xf70e59878c5ce08b, 1, uint8_t)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_FORMAT_LIST_HEADER.FormatDescriptorLength", format_descriptor_length, 0x10, 0x10, true, 0x1825f60ea16d7a6c)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::format_descriptor_t>), "_FORMAT_LIST_HEADER.Descriptors", descriptors, 0x20, 0x0, true, 0xe9daf7945d798cc8)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#endif