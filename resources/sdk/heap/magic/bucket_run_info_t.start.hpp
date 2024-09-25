#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HEAP_BUCKET_RUN_INFO.Bucket", bucket, 0x0, 0x20, true, 0xe5147d9409ae954f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HEAP_BUCKET_RUN_INFO.RunLength", run_length, 0x20, 0x20, true, 0x159436a37b579969)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_HEAP_BUCKET_RUN_INFO.Aggregate64", aggregate64, 0x0, 0x40, true, 0x3c88cabb66163770)
#else
#define _m00
#define _m01
#define _m02
#endif