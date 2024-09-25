#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::interface_t), "_POWER_THREAD_INTERFACE.Interface", interface, 0x0, 0x0, true, 0xf5a7286c1f72f0c5)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_power_thread_enqueue_t ), "_POWER_THREAD_INTERFACE.PowerThreadEnqueue", power_thread_enqueue, 0x100, 0x40, true, 0x5ed44ca2671bae78)
#else
#define _m00
#define _m01
#endif