#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::usn_record_common_header_t), "USN_RECORD_V4.Header", header, 0x0, 0x40, true, 0xf2293e8c7a636209)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::file_id_128_t), "USN_RECORD_V4.FileReferenceNumber", file_reference_number, 0x40, 0x80, true, 0x95538c4419fbc54c)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::file_id_128_t), "USN_RECORD_V4.ParentFileReferenceNumber", parent_file_reference_number, 0xc0, 0x80, true, 0x8dcffea228c577e0)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "USN_RECORD_V4.Usn", usn, 0x140, 0x40, true, 0xb2f23e7d67beaab0)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "USN_RECORD_V4.Reason", reason, 0x180, 0x20, true, 0x2a1d2e000e162a55)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "USN_RECORD_V4.SourceInfo", source_info, 0x1a0, 0x20, true, 0xa4545d9853301cd8)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "USN_RECORD_V4.RemainingExtents", remaining_extents, 0x1c0, 0x20, true, 0x5fe2cd79ec10a70e)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "USN_RECORD_V4.NumberOfExtents", number_of_extents, 0x1e0, 0x10, true, 0x90863999bc81c647)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "USN_RECORD_V4.ExtentSize", extent_size, 0x1f0, 0x10, true, 0x79ec7a0dddc781f3)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct win::usn_record_extent_t, 1>), "USN_RECORD_V4.Extents", extents, 0x200, 0x80, true, 0xde2aa88fbee97d6d)
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
#endif