#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_FILESYSTEM_STATISTICS_EX.FileSystemType", file_system_type, 0x0, 0x10, true, 0x618e57dc6d72ea6c)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_FILESYSTEM_STATISTICS_EX.Version", version, 0x10, 0x10, true, 0xe190d2be3988964)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILESYSTEM_STATISTICS_EX.SizeOfCompleteStructure", size_of_complete_structure, 0x20, 0x20, true, 0xf18b58e78a3e0900)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_FILESYSTEM_STATISTICS_EX.UserFileReads", user_file_reads, 0x40, 0x40, true, 0x7216aa7056c22080)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_FILESYSTEM_STATISTICS_EX.UserFileReadBytes", user_file_read_bytes, 0x80, 0x40, true, 0x3027951616925452)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_FILESYSTEM_STATISTICS_EX.UserDiskReads", user_disk_reads, 0xc0, 0x40, true, 0x3636a4bdbdb12627)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_FILESYSTEM_STATISTICS_EX.UserFileWrites", user_file_writes, 0x100, 0x40, true, 0x74a6dac9420e202b)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_FILESYSTEM_STATISTICS_EX.UserFileWriteBytes", user_file_write_bytes, 0x140, 0x40, true, 0xc1040544fcede4a)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_FILESYSTEM_STATISTICS_EX.UserDiskWrites", user_disk_writes, 0x180, 0x40, true, 0x19e7c2ebc55b0fad)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_FILESYSTEM_STATISTICS_EX.MetaDataReads", meta_data_reads, 0x1c0, 0x40, true, 0x2d2c68af253d075c)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_FILESYSTEM_STATISTICS_EX.MetaDataReadBytes", meta_data_read_bytes, 0x200, 0x40, true, 0xe6d6d2d65d1a429e)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_FILESYSTEM_STATISTICS_EX.MetaDataDiskReads", meta_data_disk_reads, 0x240, 0x40, true, 0xffe70309785761a5)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_FILESYSTEM_STATISTICS_EX.MetaDataWrites", meta_data_writes, 0x280, 0x40, true, 0x6615f367db46368f)
#define _m13 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_FILESYSTEM_STATISTICS_EX.MetaDataWriteBytes", meta_data_write_bytes, 0x2c0, 0x40, true, 0xd442c9af652b8a13)
#define _m14 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_FILESYSTEM_STATISTICS_EX.MetaDataDiskWrites", meta_data_disk_writes, 0x300, 0x40, true, 0x4bf1c1d4d2f86d46)
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
#define _m14
#endif