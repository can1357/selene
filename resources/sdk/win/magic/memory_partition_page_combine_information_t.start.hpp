#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_MEMORY_PARTITION_PAGE_COMBINE_INFORMATION.StopHandle", stop_handle, 0x0, 0x40, true, 0xedddb64086aae52a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MEMORY_PARTITION_PAGE_COMBINE_INFORMATION.Flags", flags, 0x40, 0x20, true, 0x88404aeb09d0ce32)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MEMORY_PARTITION_PAGE_COMBINE_INFORMATION.TotalNumberOfPages", total_number_of_pages, 0x80, 0x40, true, 0xc55b212feabc2ff3)
#else
#define _m00
#define _m01
#define _m02
#endif