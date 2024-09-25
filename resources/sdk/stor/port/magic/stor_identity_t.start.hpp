#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct stor::port::inquirydata_t*), "_STOR_IDENTITY.InquiryData", inquiry_data, 0x0, 0x0, false, 0x6d349189c5a2ad72)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::ascii_view), "_STOR_IDENTITY.SerialNumber", serial_number, 0x0, 0x0, false, 0x5708d7082c480023)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_STOR_IDENTITY.Flags.Supports1667", supports1667, 0x0, 0x0, false, 0xd605336f28164755, 1, uint16_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_STOR_IDENTITY.Flags.ZonedDevice", zoned_device, 0x0, 0x0, false, 0xceb194fd0e181893, 1, uint16_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_STOR_IDENTITY.Flags.ZNSDevice", zns_device, 0x0, 0x0, false, 0x2c98a5a378c8a2bc, 1, uint16_t)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_flags_t), "_STOR_IDENTITY.Flags", flags, 0x0, 0x0, false, 0x72f1b2718ebd7bb)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct stor::port::vpd_identification_page_t*), "_STOR_IDENTITY.DeviceId", device_id, 0x0, 0x0, false, 0x14652192cb8d82d5)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct stor::port::stor_ata_device_id_t*), "_STOR_IDENTITY.AtaDeviceId", ata_device_id, 0x0, 0x0, false, 0x8599692f9d20534f)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct stor::port::stor_rich_device_description_t*), "_STOR_IDENTITY.RichDeviceDescription", rich_device_description, 0x0, 0x0, false, 0x450b9c9392edc758)
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
#endif