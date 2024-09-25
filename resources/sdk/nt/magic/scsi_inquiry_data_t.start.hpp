#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SCSI_INQUIRY_DATA.PathId", path_id, 0x0, 0x8, true, 0x65d864e10ccccdfb)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SCSI_INQUIRY_DATA.TargetId", target_id, 0x8, 0x8, true, 0x2c52d5e204a65c18)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SCSI_INQUIRY_DATA.Lun", lun, 0x10, 0x8, true, 0x27cd4d896955b58b)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SCSI_INQUIRY_DATA.DeviceClaimed", device_claimed, 0x18, 0x8, true, 0xdb15f99911828698)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SCSI_INQUIRY_DATA.InquiryDataLength", inquiry_data_length, 0x20, 0x20, true, 0x8e43659f593cce25)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SCSI_INQUIRY_DATA.NextInquiryDataOffset", next_inquiry_data_offset, 0x40, 0x20, true, 0x4726a64a606ff1d4)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 1>), "_SCSI_INQUIRY_DATA.InquiryData", inquiry_data, 0x60, 0x8, true, 0x5ae85db8b0bde1a6)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif