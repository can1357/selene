#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct stor::port::inquirydata_t*), "_STOR_SCSI_IDENTITY.InquiryData", inquiry_data, 0x0, 0x40, true, 0x975e6b1b4210756)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::ascii_view), "_STOR_SCSI_IDENTITY.SerialNumber", serial_number, 0x40, 0x80, true, 0x5419ab58aefcd50d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_STOR_SCSI_IDENTITY.Supports1667", supports1667, 0xc0, 0x8, true, 0x4b1572501ba93b88)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct stor::port::vpd_identification_page_t*), "_STOR_SCSI_IDENTITY.DeviceId", device_id, 0x100, 0x40, true, 0x9e230c336f72bbc9)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct stor::port::stor_ata_device_id_t*), "_STOR_SCSI_IDENTITY.AtaDeviceId", ata_device_id, 0x140, 0x40, true, 0x9c5060d8a68c5d36)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct stor::port::stor_rich_device_description_t*), "_STOR_SCSI_IDENTITY.RichDeviceDescription", rich_device_description, 0x180, 0x40, true, 0xd635e18005f9847d)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_STOR_SCSI_IDENTITY.ZonedDevice", zoned_device, 0xc8, 0x8, true, 0xb2f3e5766b04084)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif