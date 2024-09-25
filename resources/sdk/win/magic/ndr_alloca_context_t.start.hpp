#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "_NDR_ALLOCA_CONTEXT.pBlockPointer", p_block_pointer, 0x0, 0x40, true, 0x447cf2cff4ef70c3)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_NDR_ALLOCA_CONTEXT.MemoryList", memory_list, 0x40, 0x80, true, 0xe153953c88b04c65)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDR_ALLOCA_CONTEXT.BytesRemaining", bytes_remaining, 0xc0, 0x40, true, 0x34149a7750c08d5e)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 512>), "_NDR_ALLOCA_CONTEXT.PreAllocatedBlock", pre_allocated_block, 0x100, 0x0, true, 0x2273eb1235ba0799)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif