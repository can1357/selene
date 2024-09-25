#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "RTLWOW64_CROSSPROCESS_WORK_ITEM.Next", next, 0x0, 0x20, true, 0x515f63fad4825f05)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum win::rtlwow64_crossprocess_work_operation_t), "RTLWOW64_CROSSPROCESS_WORK_ITEM.Operation", operation, 0x20, 0x20, true, 0xc258b1983bb12733)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "RTLWOW64_CROSSPROCESS_WORK_ITEM.MemoryAllocData.BaseAddress", base_address, 0x0, 0x40, true, 0x5045ee1efae30f6c)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "RTLWOW64_CROSSPROCESS_WORK_ITEM.MemoryAllocData.RegionSize", region_size, 0x40, 0x40, true, 0x386525f5b62b7d46)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "RTLWOW64_CROSSPROCESS_WORK_ITEM.MemoryAllocData.AllocationType", allocation_type, 0x80, 0x20, true, 0xde6a8478eca56ce1)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "RTLWOW64_CROSSPROCESS_WORK_ITEM.MemoryAllocData.Protect", protect, 0xa0, 0x20, true, 0x89830b3adb3a3175)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "RTLWOW64_CROSSPROCESS_WORK_ITEM.MemoryAllocData.SyscallStatus", syscall_status, 0xc0, 0x20, true, 0x1c1e464db4bc830)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_memory_alloc_data_t), "RTLWOW64_CROSSPROCESS_WORK_ITEM.MemoryAllocData", memory_alloc_data, 0x40, 0x0, true, 0x8fd6c71c841ec526)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "RTLWOW64_CROSSPROCESS_WORK_ITEM.MemoryFreeData.BaseAddress", base_address, 0x0, 0x40, true, 0xeda333bc627244c3)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "RTLWOW64_CROSSPROCESS_WORK_ITEM.MemoryFreeData.RegionSize", region_size, 0x40, 0x40, true, 0x1c9409ae1b062631)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "RTLWOW64_CROSSPROCESS_WORK_ITEM.MemoryFreeData.FreeType", free_type, 0x80, 0x20, true, 0x9cf1a803444676fa)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "RTLWOW64_CROSSPROCESS_WORK_ITEM.MemoryFreeData.SyscallStatus", syscall_status, 0xa0, 0x20, true, 0xa8e66d24e676fe6b)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u3_memory_free_data_t), "RTLWOW64_CROSSPROCESS_WORK_ITEM.MemoryFreeData", memory_free_data, 0x40, 0xc0, true, 0x705754b929a2a55e)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "RTLWOW64_CROSSPROCESS_WORK_ITEM.MemoryProtectData.BaseAddress", base_address, 0x0, 0x40, true, 0xe806d2f3d29651d7)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "RTLWOW64_CROSSPROCESS_WORK_ITEM.MemoryProtectData.RegionSize", region_size, 0x40, 0x40, true, 0x31994e6210e701e4)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "RTLWOW64_CROSSPROCESS_WORK_ITEM.MemoryProtectData.NewProtect", new_protect, 0x80, 0x20, true, 0xa695c732791cd7d4)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "RTLWOW64_CROSSPROCESS_WORK_ITEM.MemoryProtectData.SyscallStatus", syscall_status, 0xa0, 0x20, true, 0x548067cc6dc2d23)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u6_memory_protect_data_t), "RTLWOW64_CROSSPROCESS_WORK_ITEM.MemoryProtectData", memory_protect_data, 0x40, 0xc0, true, 0x7cf85f80b6dffebd)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "RTLWOW64_CROSSPROCESS_WORK_ITEM.InstructionCacheFlushData.BaseAddress", base_address, 0x0, 0x40, true, 0x3141d1662d3c5287)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "RTLWOW64_CROSSPROCESS_WORK_ITEM.InstructionCacheFlushData.Length", length, 0x40, 0x40, true, 0xa45565106732894)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u9_instruction_cache_flush_data_t), "RTLWOW64_CROSSPROCESS_WORK_ITEM.InstructionCacheFlushData", instruction_cache_flush_data, 0x40, 0x80, true, 0x8ec72089e9840836)
#define _m21 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "RTLWOW64_CROSSPROCESS_WORK_ITEM.MemoryDirtyData.BaseAddress", base_address, 0x0, 0x40, true, 0xc243bbe095e5b431)
#define _m22 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "RTLWOW64_CROSSPROCESS_WORK_ITEM.MemoryDirtyData.RegionSize", region_size, 0x40, 0x40, true, 0xb8d3bd6197aacefc)
#define _m23 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u12_memory_dirty_data_t), "RTLWOW64_CROSSPROCESS_WORK_ITEM.MemoryDirtyData", memory_dirty_data, 0x40, 0x80, true, 0xd61b3f62f1ddd1d4)
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
#define _m16
#define _m17
#define _m18
#define _m19
#define _m20
#define _m21
#define _m22
#define _m23
#endif