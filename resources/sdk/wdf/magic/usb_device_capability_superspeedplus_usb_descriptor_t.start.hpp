#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_USB_DEVICE_CAPABILITY_SUPERSPEEDPLUS_USB_DESCRIPTOR.bLength", b_length, 0x0, 0x8, true, 0xba64cc61bbbff93d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_USB_DEVICE_CAPABILITY_SUPERSPEEDPLUS_USB_DESCRIPTOR.bDescriptorType", b_descriptor_type, 0x8, 0x8, true, 0xd787de11764b517a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_USB_DEVICE_CAPABILITY_SUPERSPEEDPLUS_USB_DESCRIPTOR.bDevCapabilityType", b_dev_capability_type, 0x10, 0x8, true, 0x364fa2f487e33738)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_USB_DEVICE_CAPABILITY_SUPERSPEEDPLUS_USB_DESCRIPTOR.bReserved", b_reserved, 0x18, 0x8, true, 0x12778ece9a1a86d4)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_USB_DEVICE_CAPABILITY_SUPERSPEEDPLUS_USB_DESCRIPTOR.bmAttributes.AsUlong", as_ulong, 0x0, 0x20, true, 0xff8780a0926038d5)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint5_t), "_USB_DEVICE_CAPABILITY_SUPERSPEEDPLUS_USB_DESCRIPTOR.bmAttributes.SublinkSpeedAttrCount", sublink_speed_attr_count, 0x0, 0x5, true, 0x917d55431ff2b03e, 5, uint32_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_USB_DEVICE_CAPABILITY_SUPERSPEEDPLUS_USB_DESCRIPTOR.bmAttributes.SublinkSpeedIDCount", sublink_speed_id_count, 0x5, 0x4, true, 0x92bf3e63f3988151, 4, uint32_t)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_bm_attributes_t), "_USB_DEVICE_CAPABILITY_SUPERSPEEDPLUS_USB_DESCRIPTOR.bmAttributes", bm_attributes, 0x20, 0x20, true, 0x9033b6d1b79ef01a)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_USB_DEVICE_CAPABILITY_SUPERSPEEDPLUS_USB_DESCRIPTOR.wFunctionalitySupport.AsUshort", as_ushort, 0x0, 0x10, true, 0xc7d506cebf17d5ae)
#define _m09 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_USB_DEVICE_CAPABILITY_SUPERSPEEDPLUS_USB_DESCRIPTOR.wFunctionalitySupport.SublinkSpeedAttrID", sublink_speed_attr_id, 0x0, 0x4, true, 0x8ac57aebd9add82f, 4, uint16_t)
#define _m10 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_USB_DEVICE_CAPABILITY_SUPERSPEEDPLUS_USB_DESCRIPTOR.wFunctionalitySupport.MinRxLaneCount", min_rx_lane_count, 0x8, 0x4, true, 0xb1e27a68bb08c150, 4, uint16_t)
#define _m11 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_USB_DEVICE_CAPABILITY_SUPERSPEEDPLUS_USB_DESCRIPTOR.wFunctionalitySupport.MinTxLaneCount", min_tx_lane_count, 0xc, 0x4, true, 0x197ea60985e7df4f, 4, uint16_t)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u4_w_functionality_support_t), "_USB_DEVICE_CAPABILITY_SUPERSPEEDPLUS_USB_DESCRIPTOR.wFunctionalitySupport", w_functionality_support, 0x40, 0x10, true, 0x4200450beda05067)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_USB_DEVICE_CAPABILITY_SUPERSPEEDPLUS_USB_DESCRIPTOR.wReserved", w_reserved, 0x50, 0x10, true, 0xbd34e1262bc3bc06)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<union wdf::usb_device_capability_superspeedplus_speed_t, 1>), "_USB_DEVICE_CAPABILITY_SUPERSPEEDPLUS_USB_DESCRIPTOR.bmSublinkSpeedAttr", bm_sublink_speed_attr, 0x60, 0x20, true, 0x8205e6f0cc93d708)
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
#endif