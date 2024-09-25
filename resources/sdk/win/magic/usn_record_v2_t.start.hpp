#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "USN_RECORD_V2.RecordLength", record_length, 0x0, 0x20, true, 0xd3df6bcfebfc6052)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "USN_RECORD_V2.MajorVersion", major_version, 0x20, 0x10, true, 0x600dc5aa5e6131e8)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "USN_RECORD_V2.MinorVersion", minor_version, 0x30, 0x10, true, 0xe040ad20fa504559)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "USN_RECORD_V2.FileReferenceNumber", file_reference_number, 0x40, 0x40, true, 0x1470868955fc847c)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "USN_RECORD_V2.ParentFileReferenceNumber", parent_file_reference_number, 0x80, 0x40, true, 0xd7c8a2311dc07aa3)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "USN_RECORD_V2.Usn", usn, 0xc0, 0x40, true, 0xf196e02cc111f0fb)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "USN_RECORD_V2.TimeStamp", time_stamp, 0x100, 0x40, true, 0x2a63120d0db8136a)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "USN_RECORD_V2.Reason", reason, 0x140, 0x20, true, 0x103f1bb01b8d86f)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "USN_RECORD_V2.SourceInfo", source_info, 0x160, 0x20, true, 0x32405d5984d16adb)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "USN_RECORD_V2.SecurityId", security_id, 0x180, 0x20, true, 0xa0bfad5cac167d8c)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "USN_RECORD_V2.FileAttributes", file_attributes, 0x1a0, 0x20, true, 0xe2b35a9dbe9be1cf)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "USN_RECORD_V2.FileNameLength", file_name_length, 0x1c0, 0x10, true, 0xb1c56eb9de523313)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "USN_RECORD_V2.FileNameOffset", file_name_offset, 0x1d0, 0x10, true, 0x9d2d110b12b21ed5)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 1>), "USN_RECORD_V2.FileName", file_name, 0x1e0, 0x10, true, 0xed52e5dfa53496ba)
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