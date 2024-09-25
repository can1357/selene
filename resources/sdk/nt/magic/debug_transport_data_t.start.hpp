#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEBUG_TRANSPORT_DATA.HwContextSize", hw_context_size, 0x0, 0x20, true, 0xb214596833a093e2)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_DEBUG_TRANSPORT_DATA.UseSerialFraming", use_serial_framing, 0x20, 0x8, true, 0xaaa9df9dd674dfaa)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_DEBUG_TRANSPORT_DATA.ValidUSBCoreId", valid_usb_core_id, 0x28, 0x8, true, 0x93e1c2b658c47841)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_DEBUG_TRANSPORT_DATA.USBCoreId", usb_core_id, 0x30, 0x8, true, 0xd2c32f0f4f91b742)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEBUG_TRANSPORT_DATA.SharedVisibleDataSize", shared_visible_data_size, 0x0, 0x0, false, 0x8c987d5366c2fba)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif