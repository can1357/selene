#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_OPERATIONAL_REASON.Version", version, 0x0, 0x20, true, 0xf6728cde44db1a44)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_OPERATIONAL_REASON.Size", size, 0x20, 0x20, true, 0xeee97f16ed712c38)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum nt::storage_operational_status_reason_t), "_STORAGE_OPERATIONAL_REASON.Reason", reason, 0x40, 0x20, true, 0x43d4f99f21d5f07d)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_STORAGE_OPERATIONAL_REASON.RawBytes.ScsiSenseKey.SenseKey", sense_key, 0x0, 0x8, true, 0x129d3269d3107662)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_STORAGE_OPERATIONAL_REASON.RawBytes.ScsiSenseKey.ASC", asc, 0x8, 0x8, true, 0xcc23cd3c3c7f3693)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_STORAGE_OPERATIONAL_REASON.RawBytes.ScsiSenseKey.ASCQ", ascq, 0x10, 0x8, true, 0x58599a607c5661ed)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u1_scsi_sense_key_t), "_STORAGE_OPERATIONAL_REASON.RawBytes.ScsiSenseKey", scsi_sense_key, 0x0, 0x20, true, 0x893498e286c12c58)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_STORAGE_OPERATIONAL_REASON.RawBytes.NVDIMM_N.CriticalHealth", critical_health, 0x0, 0x8, true, 0x68d30799b9d6ce40)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_STORAGE_OPERATIONAL_REASON.RawBytes.NVDIMM_N.ModuleHealth", module_health, 0x8, 0x10, true, 0x68ebcae3013c224)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_STORAGE_OPERATIONAL_REASON.RawBytes.NVDIMM_N.ErrorThresholdStatus", error_threshold_status, 0x18, 0x8, true, 0x46f60d55cb63ffb0)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u2_nvdimm_n_t), "_STORAGE_OPERATIONAL_REASON.RawBytes.NVDIMM_N", nvdimm_n, 0x0, 0x20, true, 0x6b62d7746955414f)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_OPERATIONAL_REASON.RawBytes.AsUlong", as_ulong, 0x0, 0x20, true, 0xfbaae4e5ce44d362)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u0_raw_bytes_t), "_STORAGE_OPERATIONAL_REASON.RawBytes", raw_bytes, 0x60, 0x20, true, 0x505fc17a4192a4d)
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