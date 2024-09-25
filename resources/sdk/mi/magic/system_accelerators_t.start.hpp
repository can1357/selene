#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_MI_SYSTEM_ACCELERATORS.HardwareInstances", hardware_instances, 0x0, 0x0, false, 0x6ed2f7f308286eb5)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MI_SYSTEM_ACCELERATORS.NumberOfHardwareInstances", number_of_hardware_instances, 0x0, 0x0, false, 0xe58ad80d274f085f)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_MI_SYSTEM_ACCELERATORS.ShuttingDown", shutting_down, 0x0, 0x0, false, 0x1276d58d68cc773e)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_MI_SYSTEM_ACCELERATORS.AllocationFailures", allocation_failures, 0x0, 0x0, false, 0xab71a82ea23867b9)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_MI_SYSTEM_ACCELERATORS.AllocationQueryFailures", allocation_query_failures, 0x0, 0x0, false, 0xd760dd02a70aff9e)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void**), "_MI_SYSTEM_ACCELERATORS.OpaqueContext", opaque_context, 0x0, 0x0, false, 0x40c55173a721da06)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_MI_SYSTEM_ACCELERATORS.Lock", lock, 0x0, 0x0, false, 0x308c00ae4f127028)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif