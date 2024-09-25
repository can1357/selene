#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_FILESYSTEM_STATISTICS.FileSystemType", file_system_type, 0x0, 0x10, true, 0xc191ec8b3dec9444)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_FILESYSTEM_STATISTICS.Version", version, 0x10, 0x10, true, 0xe809119c30c7e9c2)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILESYSTEM_STATISTICS.SizeOfCompleteStructure", size_of_complete_structure, 0x20, 0x20, true, 0xd49e938778639e4f)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILESYSTEM_STATISTICS.UserFileReads", user_file_reads, 0x40, 0x20, true, 0x952cb2111484f262)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILESYSTEM_STATISTICS.UserFileReadBytes", user_file_read_bytes, 0x60, 0x20, true, 0x9a1f97412434bfcb)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILESYSTEM_STATISTICS.UserDiskReads", user_disk_reads, 0x80, 0x20, true, 0xe0009be4e25c208c)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILESYSTEM_STATISTICS.UserFileWrites", user_file_writes, 0xa0, 0x20, true, 0xe86fa142d8d78b58)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILESYSTEM_STATISTICS.UserFileWriteBytes", user_file_write_bytes, 0xc0, 0x20, true, 0xc862c481a8e648e1)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILESYSTEM_STATISTICS.UserDiskWrites", user_disk_writes, 0xe0, 0x20, true, 0x96bd7bf86d0395d2)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILESYSTEM_STATISTICS.MetaDataReads", meta_data_reads, 0x100, 0x20, true, 0x48fd6dc471918c38)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILESYSTEM_STATISTICS.MetaDataReadBytes", meta_data_read_bytes, 0x120, 0x20, true, 0xed87aa39362e5325)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILESYSTEM_STATISTICS.MetaDataDiskReads", meta_data_disk_reads, 0x140, 0x20, true, 0x542e4abbe60fdfdc)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILESYSTEM_STATISTICS.MetaDataWrites", meta_data_writes, 0x160, 0x20, true, 0x581e1a2d95144649)
#define _m13 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILESYSTEM_STATISTICS.MetaDataWriteBytes", meta_data_write_bytes, 0x180, 0x20, true, 0x192eeb97a789d53b)
#define _m14 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILESYSTEM_STATISTICS.MetaDataDiskWrites", meta_data_disk_writes, 0x1a0, 0x20, true, 0xf12706366901f223)
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