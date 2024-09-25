#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "PPM_IDLE_STATE_BUCKET_EX.TotalTimeUs", total_time_us, 0x0, 0x40, true, 0xd5ee08238f1758ee)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "PPM_IDLE_STATE_BUCKET_EX.MinTimeUs", min_time_us, 0x40, 0x20, true, 0xf5780c167f2380df)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "PPM_IDLE_STATE_BUCKET_EX.MaxTimeUs", max_time_us, 0x60, 0x20, true, 0x2f1ceb8e412da9d7)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "PPM_IDLE_STATE_BUCKET_EX.Count", count, 0x80, 0x20, true, 0x709fc1c7f43bfb35)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif