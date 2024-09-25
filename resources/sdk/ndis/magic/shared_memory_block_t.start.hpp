#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_NDIS_SHARED_MEMORY_BLOCK.MiniportLink", miniport_link, 0x0, 0x80, true, 0x266a68d37811075b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_NDIS_SHARED_MEMORY_BLOCK.OpenLink", open_link, 0x80, 0x80, true, 0xa28d674d6f945648)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_NDIS_SHARED_MEMORY_BLOCK.QueueLink", queue_link, 0x100, 0x80, true, 0xeb1ac83559b4e2f2)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_SHARED_MEMORY_BLOCK.Flags", flags, 0x180, 0x20, true, 0x1f0e14c6d51c1cbb)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::miniport_block_t*), "_NDIS_SHARED_MEMORY_BLOCK.Miniport", miniport, 0x1c0, 0x40, true, 0x8a2dc1ad0b8200e4)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::open_block_t*), "_NDIS_SHARED_MEMORY_BLOCK.Open", open, 0x200, 0x40, true, 0xb49f6146021cdfca)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::receive_queue_block_t*), "_NDIS_SHARED_MEMORY_BLOCK.ReceiveQueue", receive_queue, 0x240, 0x40, true, 0xb5489d1f296a9a4c)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, void*)>*), "_NDIS_SHARED_MEMORY_BLOCK.FreeSharedMemoryHandler", free_shared_memory_handler, 0x280, 0x40, true, 0xe516172f642d591d)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_SHARED_MEMORY_BLOCK.SharedMemoryHandlerContext", shared_memory_handler_context, 0x2c0, 0x40, true, 0x3a67fb4285ec2ad0)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_SHARED_MEMORY_BLOCK.ProviderAllocationContext", provider_allocation_context, 0x300, 0x40, true, 0xa535470f1a200897)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_NDIS_SHARED_MEMORY_BLOCK.PhysicalAddress", physical_address, 0x340, 0x40, true, 0xc6a7febb3729e767)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::shared_memory_parameters_t), "_NDIS_SHARED_MEMORY_BLOCK.SharedMemoryParameters", shared_memory_parameters, 0x380, 0x40, true, 0x9c0e13f9140154a)
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
#endif