#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_CM_WORKITEM.ListEntry", list_entry, 0x0, 0x80, true, 0x266decca7d35da2f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CM_WORKITEM.Private", _private, 0x80, 0x20, true, 0x7b2201b169020884)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_CM_WORKITEM.WorkerRoutine", worker_routine, 0xc0, 0x40, true, 0xc92a767777dc25bc)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_CM_WORKITEM.Parameter", parameter, 0x100, 0x40, true, 0xac4db3afb707a8b5)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif