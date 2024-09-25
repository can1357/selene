#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_USB_DEVICE_CAPABILITY_SUPERSPEEDPLUS_SPEED.AsUlong32", as_ulong32, 0x0, 0x20, true, 0xe75a33eed0d19c8b)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_USB_DEVICE_CAPABILITY_SUPERSPEEDPLUS_SPEED.SublinkSpeedAttrID", sublink_speed_attr_id, 0x0, 0x4, true, 0x1fde9baa943b529b, 4, uint32_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_USB_DEVICE_CAPABILITY_SUPERSPEEDPLUS_SPEED.LaneSpeedExponent", lane_speed_exponent, 0x4, 0x2, true, 0x409a7650b84c0246, 2, uint32_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_USB_DEVICE_CAPABILITY_SUPERSPEEDPLUS_SPEED.SublinkTypeMode", sublink_type_mode, 0x6, 0x1, true, 0xc9e2a8233511c1da, 1, uint32_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_USB_DEVICE_CAPABILITY_SUPERSPEEDPLUS_SPEED.SublinkTypeDir", sublink_type_dir, 0x7, 0x1, true, 0x486102a2f08b033d, 1, uint32_t)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_USB_DEVICE_CAPABILITY_SUPERSPEEDPLUS_SPEED.LinkProtocol", link_protocol, 0xe, 0x2, true, 0xa3fd759a0484b53e, 2, uint32_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint16_t), "_USB_DEVICE_CAPABILITY_SUPERSPEEDPLUS_SPEED.LaneSpeedMantissa", lane_speed_mantissa, 0x10, 0x10, true, 0x7caee9a71d126720, 16, uint32_t)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif