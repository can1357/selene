#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_RAID_TELEMETRY_ERROR_ENTRY.SrbStatus", srb_status, 0x0, 0x8, true, 0x7204551a3733ee0c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_RAID_TELEMETRY_ERROR_ENTRY.ScsiStatus", scsi_status, 0x8, 0x8, true, 0xbbe09ebddb6fdafc)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_RAID_TELEMETRY_ERROR_ENTRY.SenseKey", sense_key, 0x10, 0x8, true, 0xfa8154b2c54e6f56)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_RAID_TELEMETRY_ERROR_ENTRY.AdditionalSenseCode", additional_sense_code, 0x18, 0x8, true, 0x68f19fb97cdd954e)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_RAID_TELEMETRY_ERROR_ENTRY.AdditionalSenseCodeQualifier", additional_sense_code_qualifier, 0x20, 0x8, true, 0x5879dab7f4cc8136)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_RAID_TELEMETRY_ERROR_ENTRY.CdbOpCode", cdb_op_code, 0x28, 0x8, true, 0xe5a61bf6c8b45823)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RAID_TELEMETRY_ERROR_ENTRY.IoSize", io_size, 0x40, 0x20, true, 0xa4544eb78606f2f1)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RAID_TELEMETRY_ERROR_ENTRY.IoLatency", io_latency, 0x60, 0x20, true, 0x6e87f43721ae79a)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RAID_TELEMETRY_ERROR_ENTRY.WaitDuration", wait_duration, 0x80, 0x20, true, 0xf02d747690a35f8c)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RAID_TELEMETRY_ERROR_ENTRY.QueueDepth", queue_depth, 0xa0, 0x20, true, 0x42fc7cd448d1704e)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_RAID_TELEMETRY_ERROR_ENTRY.LBA", lba, 0xc0, 0x40, true, 0xf2fe62cc5a8a7f9d)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RAID_TELEMETRY_ERROR_ENTRY.Quantity", quantity, 0x100, 0x20, true, 0xf81fa226bd477432)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RAID_TELEMETRY_ERROR_ENTRY.Position", position, 0x100, 0x20, true, 0x397733b5a758213c)
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