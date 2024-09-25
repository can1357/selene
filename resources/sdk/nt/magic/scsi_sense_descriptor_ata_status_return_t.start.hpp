#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct stor::port::scsi_sense_descriptor_header_t), "_SCSI_SENSE_DESCRIPTOR_ATA_STATUS_RETURN.Header", header, 0x0, 0x10, true, 0x3f828937c18e676f)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SCSI_SENSE_DESCRIPTOR_ATA_STATUS_RETURN.Extend", extend, 0x10, 0x1, true, 0x4fc8f7fc8f00db9e, 1, uint8_t)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SCSI_SENSE_DESCRIPTOR_ATA_STATUS_RETURN.Error", error, 0x18, 0x8, true, 0x1ab2259d9cec5cb0)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SCSI_SENSE_DESCRIPTOR_ATA_STATUS_RETURN.SectorCount15_8", sector_count15_8, 0x20, 0x8, true, 0x7deda2ab7c9927c8)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SCSI_SENSE_DESCRIPTOR_ATA_STATUS_RETURN.SectorCount7_0", sector_count7_0, 0x28, 0x8, true, 0x521095dc1b1eaa4c)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SCSI_SENSE_DESCRIPTOR_ATA_STATUS_RETURN.LbaLow15_8", lba_low15_8, 0x30, 0x8, true, 0xa375fd00159de31a)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SCSI_SENSE_DESCRIPTOR_ATA_STATUS_RETURN.LbaLow7_0", lba_low7_0, 0x38, 0x8, true, 0x8d5dc2f48bf22666)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SCSI_SENSE_DESCRIPTOR_ATA_STATUS_RETURN.LbaMid15_8", lba_mid15_8, 0x40, 0x8, true, 0x8568bd4791ad8f4b)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SCSI_SENSE_DESCRIPTOR_ATA_STATUS_RETURN.LbaMid7_0", lba_mid7_0, 0x48, 0x8, true, 0xf810811d2c844ba8)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SCSI_SENSE_DESCRIPTOR_ATA_STATUS_RETURN.LbaHigh15_8", lba_high15_8, 0x50, 0x8, true, 0x99600fcdd50272f1)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SCSI_SENSE_DESCRIPTOR_ATA_STATUS_RETURN.LbaHigh7_0", lba_high7_0, 0x58, 0x8, true, 0xb957aa6bcc427394)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SCSI_SENSE_DESCRIPTOR_ATA_STATUS_RETURN.Device", device, 0x60, 0x8, true, 0x1e9438d27baef8d2)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SCSI_SENSE_DESCRIPTOR_ATA_STATUS_RETURN.Status", status, 0x68, 0x8, true, 0x62a78c3940cadbc9)
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
#endif