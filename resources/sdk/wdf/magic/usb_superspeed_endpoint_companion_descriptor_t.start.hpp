#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_USB_SUPERSPEED_ENDPOINT_COMPANION_DESCRIPTOR.bLength", b_length, 0x0, 0x8, true, 0xaf49f10f442be58a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_USB_SUPERSPEED_ENDPOINT_COMPANION_DESCRIPTOR.bDescriptorType", b_descriptor_type, 0x8, 0x8, true, 0xb0c879c943c7b232)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_USB_SUPERSPEED_ENDPOINT_COMPANION_DESCRIPTOR.bMaxBurst", b_max_burst, 0x10, 0x8, true, 0xeaded5b55c38b8c1)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_USB_SUPERSPEED_ENDPOINT_COMPANION_DESCRIPTOR.bmAttributes.AsUchar", as_uchar, 0x0, 0x8, true, 0xde8e8fc39cd57896)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint5_t), "_USB_SUPERSPEED_ENDPOINT_COMPANION_DESCRIPTOR.bmAttributes.Bulk.MaxStreams", max_streams, 0x0, 0x5, true, 0x5c9e9e6eac6e7ca8, 5, uint8_t)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u4_bulk_t), "_USB_SUPERSPEED_ENDPOINT_COMPANION_DESCRIPTOR.bmAttributes.Bulk", bulk, 0x0, 0x8, true, 0x4ed0934fffc55aa1)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_USB_SUPERSPEED_ENDPOINT_COMPANION_DESCRIPTOR.bmAttributes.Isochronous.Mult", mult, 0x0, 0x2, true, 0x395e56cdca15896c, 2, uint8_t)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_USB_SUPERSPEED_ENDPOINT_COMPANION_DESCRIPTOR.bmAttributes.Isochronous.SspCompanion", ssp_companion, 0x7, 0x1, true, 0x2e0a2299a613a475, 1, uint8_t)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u8_isochronous_t), "_USB_SUPERSPEED_ENDPOINT_COMPANION_DESCRIPTOR.bmAttributes.Isochronous", isochronous, 0x0, 0x8, true, 0xdbfe04de53888a85)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_bm_attributes_t), "_USB_SUPERSPEED_ENDPOINT_COMPANION_DESCRIPTOR.bmAttributes", bm_attributes, 0x18, 0x8, true, 0x8830a01282154a0c)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_USB_SUPERSPEED_ENDPOINT_COMPANION_DESCRIPTOR.wBytesPerInterval", w_bytes_per_interval, 0x20, 0x10, true, 0xa745b72935b571eb)
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
#endif