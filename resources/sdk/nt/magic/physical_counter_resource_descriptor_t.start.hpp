#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(physical_counter_resource_descriptor_type_t ), "_PHYSICAL_COUNTER_RESOURCE_DESCRIPTOR.Type", type, 0x0, 0x20, true, 0x4250c2145f0ba41a)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PHYSICAL_COUNTER_RESOURCE_DESCRIPTOR.Flags", flags, 0x20, 0x20, true, 0x5bdea34157122cd6)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PHYSICAL_COUNTER_RESOURCE_DESCRIPTOR.CounterIndex", counter_index, 0x40, 0x20, true, 0x2f83d3ce95d9f79c)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PHYSICAL_COUNTER_RESOURCE_DESCRIPTOR.Range.Begin", begin, 0x0, 0x20, true, 0xf019555fd2cdc80e)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PHYSICAL_COUNTER_RESOURCE_DESCRIPTOR.Range.End", end, 0x20, 0x20, true, 0xab5e3b108ca82b4f)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u0_range_t), "_PHYSICAL_COUNTER_RESOURCE_DESCRIPTOR.Range", range, 0x40, 0x40, true, 0x36143a18bed9d2f7)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(uint64_t, void*)>*), "_PHYSICAL_COUNTER_RESOURCE_DESCRIPTOR.OverflowHandler", overflow_handler, 0x40, 0x40, true, 0xbd0a36ab39f58b6)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(physical_counter_event_buffer_configuration_t ), "_PHYSICAL_COUNTER_RESOURCE_DESCRIPTOR.EventBufferConfiguration", event_buffer_configuration, 0x40, 0x80, true, 0x37a54e1e64daa2e1)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PHYSICAL_COUNTER_RESOURCE_DESCRIPTOR.IdentificationTag", identification_tag, 0x40, 0x20, true, 0x8fb2f7965d89c25c)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PHYSICAL_COUNTER_RESOURCE_DESCRIPTOR.ExtendedRegisterAddress", extended_register_address, 0x40, 0x20, true, 0x713818dc27f9bcda)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#endif