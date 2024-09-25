#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "USN_RECORD_V3.RecordLength", record_length, 0x0, 0x20, true, 0x86d51455e09fd315)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "USN_RECORD_V3.MajorVersion", major_version, 0x20, 0x10, true, 0x64b522e6136e642d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "USN_RECORD_V3.MinorVersion", minor_version, 0x30, 0x10, true, 0x764ea72b0a14fed1)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::file_id_128_t), "USN_RECORD_V3.FileReferenceNumber", file_reference_number, 0x40, 0x80, true, 0xdd3a6512d30adedc)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::file_id_128_t), "USN_RECORD_V3.ParentFileReferenceNumber", parent_file_reference_number, 0xc0, 0x80, true, 0xd37e123d717255ca)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "USN_RECORD_V3.Usn", usn, 0x140, 0x40, true, 0x1f45e9c78af260e7)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "USN_RECORD_V3.TimeStamp", time_stamp, 0x180, 0x40, true, 0xce146eeb55690d4b)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "USN_RECORD_V3.Reason", reason, 0x1c0, 0x20, true, 0x7a75f7dd762a8b0f)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "USN_RECORD_V3.SourceInfo", source_info, 0x1e0, 0x20, true, 0xd091ffbe4b1ad06c)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "USN_RECORD_V3.SecurityId", security_id, 0x200, 0x20, true, 0x1220fcc110316d46)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "USN_RECORD_V3.FileAttributes", file_attributes, 0x220, 0x20, true, 0x8f09795196c07cdb)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "USN_RECORD_V3.FileNameLength", file_name_length, 0x240, 0x10, true, 0xe6fb7ededce12f61)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "USN_RECORD_V3.FileNameOffset", file_name_offset, 0x250, 0x10, true, 0x59233a2fb66d1577)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 1>), "USN_RECORD_V3.FileName", file_name, 0x260, 0x10, true, 0x624736e32c24da6f)
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
#endif