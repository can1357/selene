#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::ioring_version_t), "_NT_IORING_INFO.IoRingVersion", io_ring_version, 0x0, 0x0, false, 0xfe92a71677cb8b97)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct os::ioring_create_flags_t), "_NT_IORING_INFO.Flags", flags, 0x0, 0x0, false, 0xab758a909b0aa42b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NT_IORING_INFO.SubmissionQueueSize", submission_queue_size, 0x0, 0x0, false, 0x6a409e64d6acbeb8)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NT_IORING_INFO.SubmissionQueueRingMask", submission_queue_ring_mask, 0x0, 0x0, false, 0xb1738188d0a53967)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NT_IORING_INFO.CompletionQueueSize", completion_queue_size, 0x0, 0x0, false, 0xcad52828a64224e2)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NT_IORING_INFO.CompletionQueueRingMask", completion_queue_ring_mask, 0x0, 0x0, false, 0xb9ba87c28d1988d)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct os::ioring_submission_queue_t*), "_NT_IORING_INFO.SubmissionQueue", submission_queue, 0x0, 0x0, false, 0x7354e36c62fc4c34)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct os::ioring_completion_queue_t*), "_NT_IORING_INFO.CompletionQueue", completion_queue, 0x0, 0x0, false, 0xe8be9c8438191712)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif