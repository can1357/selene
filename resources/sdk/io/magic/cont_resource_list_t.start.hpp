#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union nt::slist_header_t), "_IO_CONT_RESOURCE_LIST.Header", header, 0x0, 0x80, true, 0x3d5b0612d162cee3)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union nt::slist_header_t**), "_IO_CONT_RESOURCE_LIST.Hash", hash, 0x0, 0x40, true, 0xc024d38dfbbd8f8e)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IO_CONT_RESOURCE_LIST.HashSize", hash_size, 0x200, 0x20, true, 0x2b12f3d6d4ae43bd)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IO_CONT_RESOURCE_LIST.MaximumProcessorCount", maximum_processor_count, 0x220, 0x20, true, 0x94b52e4c10af944f)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IO_CONT_RESOURCE_LIST.ResourceCount", resource_count, 0x240, 0x20, true, 0x597cb6ced3afc20c)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IO_CONT_RESOURCE_LIST.MinCount", min_count, 0x260, 0x20, true, 0xfbd97b9fa16235b9)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IO_CONT_RESOURCE_LIST.MaxCount", max_count, 0x280, 0x20, true, 0x77ea996f48f868a8)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IO_CONT_RESOURCE_LIST.ResourceSize", resource_size, 0x2a0, 0x20, true, 0xd82558daf7151512)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::device_object_t*), "_IO_CONT_RESOURCE_LIST.DeviceObject", device_object, 0x2c0, 0x40, true, 0xad7580445797e149)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IO_CONT_RESOURCE_LIST.MemAllocFailureCount", mem_alloc_failure_count, 0x300, 0x20, true, 0x87c3b08f81d005d2)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IO_CONT_RESOURCE_LIST.ConsecutiveFailureCount", consecutive_failure_count, 0x320, 0x20, true, 0xf578289d940d98fa)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_IO_CONT_RESOURCE_LIST.SuspendTick", suspend_tick, 0x340, 0x40, true, 0xf6fde31a89831723)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IO_CONT_RESOURCE_LIST.SuspendCount", suspend_count, 0x380, 0x20, true, 0x96311e4c9ca0ab11)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IO_CONT_RESOURCE_LIST.CompatSrbSize", compat_srb_size, 0x3a0, 0x20, true, 0xcbff5af49389970b)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_IO_CONT_RESOURCE_LIST.IsVirtualMiniport", is_virtual_miniport, 0x3c0, 0x8, true, 0x85d9efcf4764131d)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_IO_CONT_RESOURCE_LIST.AddingNewResource", adding_new_resource, 0x3e0, 0x20, true, 0x6065197bd2a8122c)
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
#define _m10
#define _m11
#define _m12
#define _m13
#define _m14
#define _m15
#endif