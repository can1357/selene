#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_RESUME_PERFORMANCE.PostTimeMs", post_time_ms, 0x0, 0x20, true, 0x37e6deb06cffabb1)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_RESUME_PERFORMANCE.TotalResumeTimeMs", total_resume_time_ms, 0x40, 0x40, true, 0x3fff9b94fd627020)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_RESUME_PERFORMANCE.ResumeCompleteTimestamp", resume_complete_timestamp, 0x80, 0x40, true, 0x7aa7ab05253f473c)
#else
#define _m00
#define _m01
#define _m02
#endif