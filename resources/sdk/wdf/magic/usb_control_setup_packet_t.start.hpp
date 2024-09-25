#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_WDF_USB_CONTROL_SETUP_PACKET.Packet.bm.Request.Recipient", recipient, 0x0, 0x2, true, 0x5d98d83fe248693e, 2, uint8_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_WDF_USB_CONTROL_SETUP_PACKET.Packet.bm.Request.Type", type, 0x5, 0x2, true, 0x75cf10f3a2300eba, 2, uint8_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WDF_USB_CONTROL_SETUP_PACKET.Packet.bm.Request.Dir", dir, 0x7, 0x1, true, 0x9e5b323c1627c772, 1, uint8_t)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u8_request_t), "_WDF_USB_CONTROL_SETUP_PACKET.Packet.bm.Request", request, 0x0, 0x8, true, 0x4ff5b47481b78c7f)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_USB_CONTROL_SETUP_PACKET.Packet.bm.Byte", byte, 0x0, 0x8, true, 0xb97dbe496c177cdc)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u4_bm_t), "_WDF_USB_CONTROL_SETUP_PACKET.Packet.bm", bm, 0x0, 0x8, true, 0xbac24403649e31a0)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_USB_CONTROL_SETUP_PACKET.Packet.bRequest", b_request, 0x8, 0x8, true, 0x86070cfb19c59846)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_USB_CONTROL_SETUP_PACKET.Packet.wValue.Bytes.LowByte", low_byte, 0x0, 0x8, true, 0xbdee97f5b6151dea)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_USB_CONTROL_SETUP_PACKET.Packet.wValue.Bytes.HiByte", hi_byte, 0x8, 0x8, true, 0x8bfa718872c8a089)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u16_bytes_t), "_WDF_USB_CONTROL_SETUP_PACKET.Packet.wValue.Bytes", bytes, 0x0, 0x10, true, 0xf2412b5fbbdb4111)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_WDF_USB_CONTROL_SETUP_PACKET.Packet.wValue.Value", value, 0x0, 0x10, true, 0xb9fa5d5bb2643cd3)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u12_w_value_t), "_WDF_USB_CONTROL_SETUP_PACKET.Packet.wValue", w_value, 0x10, 0x10, true, 0x32d92e38810590e6)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_USB_CONTROL_SETUP_PACKET.Packet.wIndex.Bytes.LowByte", low_byte, 0x0, 0x8, true, 0xde7aeebf7cc9f5d2)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_USB_CONTROL_SETUP_PACKET.Packet.wIndex.Bytes.HiByte", hi_byte, 0x8, 0x8, true, 0x656f7233b16a5083)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u24_bytes_t), "_WDF_USB_CONTROL_SETUP_PACKET.Packet.wIndex.Bytes", bytes, 0x0, 0x10, true, 0x31742f8fb30c6df3)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_WDF_USB_CONTROL_SETUP_PACKET.Packet.wIndex.Value", value, 0x0, 0x10, true, 0x5a57db343a6407db)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u20_w_index_t), "_WDF_USB_CONTROL_SETUP_PACKET.Packet.wIndex", w_index, 0x20, 0x10, true, 0x55e5077c7858649b)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_WDF_USB_CONTROL_SETUP_PACKET.Packet.wLength", w_length, 0x30, 0x10, true, 0xc5e0d0bb940a72a8)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_packet_t), "_WDF_USB_CONTROL_SETUP_PACKET.Packet", packet, 0x0, 0x40, true, 0xeffa546a31f90fc7)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 8>), "_WDF_USB_CONTROL_SETUP_PACKET.Generic.Bytes", bytes, 0x0, 0x40, true, 0xf43b12ebfab9a053)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u28_generic_t), "_WDF_USB_CONTROL_SETUP_PACKET.Generic", generic, 0x0, 0x40, true, 0x7a3901489582a489)
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
#define _m10
#define _m11
#define _m12
#define _m13
#define _m14
#define _m15
#define _m16
#define _m17
#define _m18
#define _m19
#define _m20
#endif