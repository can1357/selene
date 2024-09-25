#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PERFINFO_CC_CAN_WRITE_FAIL.FileObjectKey", file_object_key, 0x0, 0x40, true, 0x79b6f74e4de0aecb)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PERFINFO_CC_CAN_WRITE_FAIL.TotalDirtyPages", total_dirty_pages, 0x40, 0x40, true, 0xc1d74a4a118a5b87)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PERFINFO_CC_CAN_WRITE_FAIL.DirtyPageThreshold", dirty_page_threshold, 0x80, 0x40, true, 0x51226bbaba8a17c3)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PERFINFO_CC_CAN_WRITE_FAIL.BytesToWrite", bytes_to_write, 0xc0, 0x20, true, 0xe55aa1c6aea07cb5)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif