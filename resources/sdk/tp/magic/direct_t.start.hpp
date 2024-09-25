#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tp::task_t), "_TP_DIRECT.Task", task, 0x0, 0x0, true, 0xf8dcfa2d873252cf)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_TP_DIRECT.Lock", lock, 0x100, 0x40, true, 0x2d5f8c607aff9fc2)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_TP_DIRECT.IoCompletionInformationList", io_completion_information_list, 0x140, 0x80, true, 0x6998163e1bba1d35)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(ptp_direct_callback_t ), "_TP_DIRECT.Callback", callback, 0x1c0, 0x40, true, 0xbf83c821beadc8f)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TP_DIRECT.NumaNode", numa_node, 0x200, 0x20, true, 0x667ee728afbdf29c)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_TP_DIRECT.IdealProcessor", ideal_processor, 0x220, 0x8, true, 0x9960761138d1ec6a)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif