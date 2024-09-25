#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int16_t), "_FSRTL_ADVANCED_FCB_HEADER.NodeTypeCode", node_type_code, 0x0, 0x10, true, 0x11e94e0eb3c5787c)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int16_t), "_FSRTL_ADVANCED_FCB_HEADER.NodeByteSize", node_byte_size, 0x10, 0x10, true, 0xf6b1c250b63c364d)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_FSRTL_ADVANCED_FCB_HEADER.Flags", flags, 0x20, 0x8, true, 0xe3828c72469084f)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_FSRTL_ADVANCED_FCB_HEADER.IsFastIoPossible", is_fast_io_possible, 0x28, 0x8, true, 0xb4e9be503553e2b8)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_FSRTL_ADVANCED_FCB_HEADER.Flags2", flags2, 0x30, 0x8, true, 0x38a7b6968f410a97)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_FSRTL_ADVANCED_FCB_HEADER.Version", version, 0x3c, 0x4, true, 0x6c36658d728192c1, 4, uint8_t)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::eresource_t*), "_FSRTL_ADVANCED_FCB_HEADER.Resource", resource, 0x40, 0x40, true, 0x94780801f6512c8d)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::eresource_t*), "_FSRTL_ADVANCED_FCB_HEADER.PagingIoResource", paging_io_resource, 0x80, 0x40, true, 0x8b259d2161cc4a08)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_FSRTL_ADVANCED_FCB_HEADER.AllocationSize", allocation_size, 0xc0, 0x40, true, 0xf940da3d2414e06a)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_FSRTL_ADVANCED_FCB_HEADER.FileSize", file_size, 0x100, 0x40, true, 0x1a0c9847617b4b85)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_FSRTL_ADVANCED_FCB_HEADER.ValidDataLength", valid_data_length, 0x140, 0x40, true, 0x9cf0ea5ad42644fb)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::fast_mutex_t*), "_FSRTL_ADVANCED_FCB_HEADER.FastMutex", fast_mutex, 0x180, 0x40, true, 0x173aff7928b4e40)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_FSRTL_ADVANCED_FCB_HEADER.FilterContexts", filter_contexts, 0x1c0, 0x80, true, 0xd2d150d0a90c99de)
#define _m13 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::variant<uint64_t, struct ex::push_lock_t>), "_FSRTL_ADVANCED_FCB_HEADER.PushLock", push_lock, 0x240, 0x40, true, 0xf0f6f94b39554f8d)
#define _m14 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void**), "_FSRTL_ADVANCED_FCB_HEADER.FileContextSupportPointer", file_context_support_pointer, 0x280, 0x40, true, 0xa899519945ebe9c4)
#define _m15 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_FSRTL_ADVANCED_FCB_HEADER.Oplock", oplock, 0x2c0, 0x40, true, 0xe8ecd6bbdf6a431d)
#define _m16 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_FSRTL_ADVANCED_FCB_HEADER.ReservedForRemote", reserved_for_remote, 0x2c0, 0x40, true, 0xd0d1dd8c5e8d4c57)
#define _m17 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_FSRTL_ADVANCED_FCB_HEADER.ReservedContext", reserved_context, 0x300, 0x40, true, 0x895c5b5f4d3dd5c6)
#define _m18 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_FSRTL_ADVANCED_FCB_HEADER.AePushLock", ae_push_lock, 0x300, 0x40, true, 0xae1191ed15379b75)
#define _m19 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FSRTL_ADVANCED_FCB_HEADER.BypassIoOpenCount", bypass_io_open_count, 0x340, 0x20, true, 0x8f266c1d797f8ed7)
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
#endif