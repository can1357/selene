#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct io::workitem_t*), "_STOR_ASYNC_NOTIFY_CONTEXT.WorkItem", work_item, 0x0, 0x40, true, 0x5b1a7df6aaebf382)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_STOR_ASYNC_NOTIFY_CONTEXT.Flags", flags, 0x40, 0x40, true, 0x44c558cca7b6da31)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_STOR_ASYNC_NOTIFY_CONTEXT.InUse", in_use, 0x80, 0x20, true, 0x2667de7e1fff3946)
#else
#define _m00
#define _m01
#define _m02
#endif