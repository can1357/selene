#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::ndr_pointer_queue_t*), "OICF_POINTER_QUEUE_STATE.pActiveQueue", p_active_queue, 0x40, 0x40, true, 0x7370cee720979fb2)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::array_info_t), "OICF_POINTER_QUEUE_STATE.ArrayInfo", array_info, 0x80, 0x80, true, 0x4584130b549421c6)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::ndr_proc_context_t const*), "OICF_POINTER_QUEUE_STATE.pProcContext", p_proc_context, 0x200, 0x40, true, 0xf3a24eb6d0eab8bc)
#else
#define _m00
#define _m01
#define _m02
#endif