#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::dispatcher_header_t), "_KPRIQUEUE.Header", header, 0x0, 0xc0, true, 0xb260d14971623211)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<nt::list_entry_t, 32>), "_KPRIQUEUE.EntryListHead", entry_list_head, 0xc0, 0x0, true, 0x38eff460fe1f1ad9)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<volatile int32_t, 32>), "_KPRIQUEUE.CurrentCount", current_count, 0x10c0, 0x0, true, 0x5094ee9d49166795)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KPRIQUEUE.MaximumCount", maximum_count, 0x14c0, 0x20, true, 0xe46c7c0c4ac8d6fd)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_KPRIQUEUE.ThreadListHead", thread_list_head, 0x1500, 0x80, true, 0xb46bffc65e350967)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif