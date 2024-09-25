#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct halp::dma_adapter_object_t), "_ADAPTER_OBJECT.AdapterObject", adapter_object, 0x0, 0xc0, true, 0xf30a615c44a5ee4d)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct halp::dma_master_adapter_object_t*), "_ADAPTER_OBJECT.MasterAdapter", master_adapter, 0x4c0, 0x40, true, 0x4b5687ce7f5a11e)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_ADAPTER_OBJECT.WaitQueueEntry", wait_queue_entry, 0x500, 0x80, true, 0xddf4f46996380b42)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kdevice_queue_t), "_ADAPTER_OBJECT.ChannelWaitQueue", channel_wait_queue, 0x580, 0x40, true, 0xbe162dfa67dfb4e7)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_ADAPTER_OBJECT.ResourceWaitLock", resource_wait_lock, 0x580, 0x40, true, 0x48bc84e743e686c7)
#define _m005 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_ADAPTER_OBJECT.ResourceWaitQueue", resource_wait_queue, 0x5c0, 0x80, true, 0x8e017951a4c61b9a)
#define _m006 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_ADAPTER_OBJECT.ChannelResourceWaitQueue", channel_resource_wait_queue, 0x640, 0x80, true, 0xd249501386db8257)
#define _m007 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_ADAPTER_OBJECT.ResourceQueueBusy", resource_queue_busy, 0x6c0, 0x8, true, 0x1571837a46ce3b0c)
#define _m008 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ADAPTER_OBJECT.MapRegistersPerChannel", map_registers_per_channel, 0x700, 0x20, true, 0xdeb44bf51da87d02)
#define _m009 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_ADAPTER_OBJECT.MapRegisterBase", map_register_base, 0x740, 0x40, true, 0xe955d09ced757b31)
#define _m010 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ADAPTER_OBJECT.NumberOfMapRegisters", number_of_map_registers, 0x780, 0x20, true, 0x496a75984014f070)
#define _m011 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ADAPTER_OBJECT.MaxTransferLength", max_transfer_length, 0x7a0, 0x20, true, 0xc31e753526ebeffc)
#define _m012 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<void*, 2>), "_ADAPTER_OBJECT.CrashDumpRegisterBase", crash_dump_register_base, 0x7c0, 0x80, true, 0x301902b239d8f875)
#define _m013 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 2>), "_ADAPTER_OBJECT.NumberOfCrashDumpRegisters", number_of_crash_dump_registers, 0x840, 0x40, true, 0x7c373f0e363c4db8)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 2>), "_ADAPTER_OBJECT.CrashDumpRegisterRefCount", crash_dump_register_ref_count, 0x880, 0x40, true, 0xf2b53583fbda996)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_ADAPTER_OBJECT.AdapterCrashDumpList", adapter_crash_dump_list, 0x8c0, 0x80, true, 0x10bdc4190048e30e)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mdl_t*), "_ADAPTER_OBJECT.MapRegisterMdl", map_register_mdl, 0x940, 0x40, true, 0xfbe4d7b757c9c417)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_ADAPTER_OBJECT.MapRegisterMdlLock", map_register_mdl_lock, 0x980, 0x40, true, 0x60c48dafc1005dfe)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ex::push_lock_t), "_ADAPTER_OBJECT.ExpiredLock", expired_lock, 0x9c0, 0x40, true, 0x786e10f69713b4a9)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_ADAPTER_OBJECT.AllocationHandle", allocation_handle, 0xa00, 0x40, true, 0x687934a25ea611a1)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_ADAPTER_OBJECT.VirtualAddress", virtual_address, 0xa40, 0x40, true, 0x8d1698151adb5547)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_ADAPTER_OBJECT.IsAllocationMdlBased", is_allocation_mdl_based, 0xa80, 0x8, true, 0x7a3e254cb43f30a2)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_ADAPTER_OBJECT.NoLocalPool", no_local_pool, 0xa88, 0x8, true, 0xc0e501ebadff9ad3)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_ADAPTER_OBJECT.ExpiredFlag", expired_flag, 0xa90, 0x8, true, 0xfc9e3987ade7d909)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::wait_context_block_t*), "_ADAPTER_OBJECT.CurrentWcb", current_wcb, 0xac0, 0x40, true, 0x6fce44fd86472e53)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct dma::transfer_context_t*), "_ADAPTER_OBJECT.CurrentTransferContext", current_transfer_context, 0xb00, 0x40, true, 0x7ad40d152149643)
#define _m026 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct halp::dma_controller_t*), "_ADAPTER_OBJECT.DmaController", dma_controller, 0xb40, 0x40, true, 0x550cd1de023ae03d)
#define _m027 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ADAPTER_OBJECT.Controller", controller, 0xb80, 0x20, true, 0xb418dfcb8a849e0d)
#define _m028 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ADAPTER_OBJECT.ChannelNumber", channel_number, 0xba0, 0x20, true, 0xca77b4e773e4e8c7)
#define _m029 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ADAPTER_OBJECT.RequestLine", request_line, 0xbc0, 0x20, true, 0x6b2ad9280fc6e356)
#define _m030 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ADAPTER_OBJECT.RequestedChannelCount", requested_channel_count, 0xbe0, 0x20, true, 0xd41f36000531ab15)
#define _m031 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ADAPTER_OBJECT.AllocatedChannelCount", allocated_channel_count, 0xc00, 0x20, true, 0x518e0f3c7a386281)
#define _m032 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 8>), "_ADAPTER_OBJECT.AllocatedChannels", allocated_channels, 0xc20, 0x0, true, 0x90a78ac3b33b3996)
#define _m033 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_ADAPTER_OBJECT.ChannelAdapter", channel_adapter, 0xd40, 0x40, true, 0x1f8f38ec0b1d73a)
#define _m034 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_ADAPTER_OBJECT.NeedsMapRegisters", needs_map_registers, 0xd80, 0x8, true, 0x395b2668bcac7e01)
#define _m035 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_ADAPTER_OBJECT.MasterDevice", master_device, 0xd88, 0x8, true, 0x90a05c65e7b1f862)
#define _m036 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_ADAPTER_OBJECT.ScatterGather", scatter_gather, 0xd90, 0x8, true, 0x8853f888dc475cd1)
#define _m037 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_ADAPTER_OBJECT.AutoInitialize", auto_initialize, 0xd98, 0x8, true, 0xfffb734ca8d7b715)
#define _m038 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_ADAPTER_OBJECT.IgnoreCount", ignore_count, 0xda0, 0x8, true, 0x92799d64d7db22cd)
#define _m039 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_ADAPTER_OBJECT.CacheCoherent", cache_coherent, 0xda8, 0x8, true, 0x150c9bf3d63e605a)
#define _m040 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_ADAPTER_OBJECT.Dma32BitAddresses", dma32_bit_addresses, 0xdc0, 0x8, true, 0x171e941c76d92ef2)
#define _m041 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_ADAPTER_OBJECT.Dma64BitAddresses", dma64_bit_addresses, 0xdc8, 0x8, true, 0x36ca6d8b9ba7ce20)
#define _m042 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ADAPTER_OBJECT.DmaAddressWidth", dma_address_width, 0xdc0, 0x20, true, 0xac20dac40617a09c)
#define _m043 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum dma::width_t), "_ADAPTER_OBJECT.DmaPortWidth", dma_port_width, 0xde0, 0x20, true, 0x238b4360d4cda85c)
#define _m044 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_ADAPTER_OBJECT.DeviceAddress", device_address, 0xe00, 0x40, true, 0xa746a4a22860c8f1)
#define _m045 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_ADAPTER_OBJECT.AdapterList", adapter_list, 0xe40, 0x80, true, 0x7838fb2dfb589ac4)
#define _m046 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::work_queue_item_t), "_ADAPTER_OBJECT.WorkItem", work_item, 0xec0, 0x0, true, 0xe690e76274df5066)
#define _m047 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct halp::dma_domain_object_t*), "_ADAPTER_OBJECT.DomainPointer", domain_pointer, 0xfc0, 0x40, true, 0x5edd5fabd3637e5d)
#define _m048 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(int32_t), "_ADAPTER_OBJECT.TranslationType", translation_type, 0x1000, 0x20, true, 0xd7f3b2628ddd1e0, 32, uint32_t)
#define _m049 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_ADAPTER_OBJECT.AdapterInUse", adapter_in_use, 0x1020, 0x8, true, 0xf086d8f22ed18212)
#define _m050 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::device_object_t*), "_ADAPTER_OBJECT.DeviceObject", device_object, 0x1040, 0x40, true, 0xeb416a7dbbb75e17)
#define _m051 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ext::iommu_device_id_t*), "_ADAPTER_OBJECT.DeviceId", device_id, 0x1080, 0x40, true, 0x2e4f59bde95c4fe8)
#define _m052 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::variant<void*, struct nt::iommu_dma_device_t*>), "_ADAPTER_OBJECT.IommuDevice", iommu_device, 0x10c0, 0x40, true, 0x591c7638236c134e)
#define _m053 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mdl_t*), "_ADAPTER_OBJECT.ScatterGatherMdl", scatter_gather_mdl, 0x1100, 0x40, true, 0x764cb41bc23a38c6)
#define _m054 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_ADAPTER_OBJECT.LowMemoryLogicalAddressQueueLock", low_memory_logical_address_queue_lock, 0x1180, 0x40, true, 0xfc22b55691a440fa)
#define _m055 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_ADAPTER_OBJECT.LowMemoryLogicalAddressQueue", low_memory_logical_address_queue, 0x11c0, 0x80, true, 0xe5bb06f1a7690dd)
#define _m056 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_ADAPTER_OBJECT.LowMemoryLogicalAddressQueueInUse", low_memory_logical_address_queue_in_use, 0x1240, 0x8, true, 0x82965793b353cf76)
#define _m057 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct halp::emergency_la_queue_entry_t), "_ADAPTER_OBJECT.LowMemoryLogicalAddressQueueEntry", low_memory_logical_address_queue_entry, 0x1280, 0xc0, true, 0x93fb7b1407572b5d)
#define _m058 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum halp::dma_adapter_allocation_state_t), "_ADAPTER_OBJECT.AllocationState", allocation_state, 0x1340, 0x20, true, 0xc4092345f62fb6db)
#define _m059 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ADAPTER_OBJECT.ScatterGatherBufferLength", scatter_gather_buffer_length, 0x1360, 0x20, true, 0xc6fec57275589e73)
#define _m060 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::scatter_gather_list_t), "_ADAPTER_OBJECT.ScatterGatherBuffer", scatter_gather_buffer, 0x1380, 0x80, true, 0xf68da778224a9e66)
#define _m061 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_ADAPTER_OBJECT.LowMemoryLogicalAddressBase", low_memory_logical_address_base, 0x1140, 0x40, true, 0xb911b438703d267e)
#define _m062 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::iommu_dma_logical_address_token_t*), "_ADAPTER_OBJECT.LowMemoryLogicalAddressToken", low_memory_logical_address_token, 0x0, 0x0, false, 0x8e42f5420317440b)
#else
#define _m000
#define _m001
#define _m002
#define _m003
#define _m004
#define _m005
#define _m006
#define _m007
#define _m008
#define _m009
#define _m010
#define _m011
#define _m012
#define _m013
#define _m014
#define _m015
#define _m016
#define _m017
#define _m018
#define _m019
#define _m020
#define _m021
#define _m022
#define _m023
#define _m024
#define _m025
#define _m026
#define _m027
#define _m028
#define _m029
#define _m030
#define _m031
#define _m032
#define _m033
#define _m034
#define _m035
#define _m036
#define _m037
#define _m038
#define _m039
#define _m040
#define _m041
#define _m042
#define _m043
#define _m044
#define _m045
#define _m046
#define _m047
#define _m048
#define _m049
#define _m050
#define _m051
#define _m052
#define _m053
#define _m054
#define _m055
#define _m056
#define _m057
#define _m058
#define _m059
#define _m060
#define _m061
#define _m062
#endif