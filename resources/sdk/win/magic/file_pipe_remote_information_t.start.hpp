#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_FILE_PIPE_REMOTE_INFORMATION.CollectDataTime", collect_data_time, 0x0, 0x40, true, 0x6c6311cca64c5f29)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_PIPE_REMOTE_INFORMATION.MaximumCollectionCount", maximum_collection_count, 0x40, 0x20, true, 0xc78e291f4939020d)
#else
#define _m00
#define _m01
#endif