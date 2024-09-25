#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct tp::task_callbacks_t*), "_TP_TASK.Callbacks", callbacks, 0x0, 0x40, true, 0xc1ea55ed666b2152)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TP_TASK.NumaNode", numa_node, 0x40, 0x20, true, 0x153c34c96c5acd01)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_TP_TASK.IdealProcessor", ideal_processor, 0x60, 0x8, true, 0xed7aed8071f3ea61)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_TP_TASK.ListEntry", list_entry, 0x80, 0x80, true, 0x895daa1915042de2)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif