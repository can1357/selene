#if !IN_PARSER
#define _m000 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PORT_CONFIGURATION_INFORMATION.Length", length, 0x0, 0x20, true, 0x1b56579a0da99cf1)
#define _m001 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PORT_CONFIGURATION_INFORMATION.SystemIoBusNumber", system_io_bus_number, 0x20, 0x20, true, 0xba62c2d22d2ed5b7)
#define _m002 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum nt::interface_type_t), "_PORT_CONFIGURATION_INFORMATION.AdapterInterfaceType", adapter_interface_type, 0x40, 0x20, true, 0xc8eae3fd008f897f)
#define _m003 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PORT_CONFIGURATION_INFORMATION.BusInterruptLevel", bus_interrupt_level, 0x60, 0x20, true, 0xd03a7d9a44716314)
#define _m004 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PORT_CONFIGURATION_INFORMATION.BusInterruptVector", bus_interrupt_vector, 0x80, 0x20, true, 0x307d5d881d754f1)
#define _m005 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum nt::kinterrupt_mode_t), "_PORT_CONFIGURATION_INFORMATION.InterruptMode", interrupt_mode, 0xa0, 0x20, true, 0xcc19e384caa78898)
#define _m006 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PORT_CONFIGURATION_INFORMATION.MaximumTransferLength", maximum_transfer_length, 0xc0, 0x20, true, 0x4b6583350df366ac)
#define _m007 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PORT_CONFIGURATION_INFORMATION.NumberOfPhysicalBreaks", number_of_physical_breaks, 0xe0, 0x20, true, 0xb402269faaefaac5)
#define _m008 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PORT_CONFIGURATION_INFORMATION.DmaChannel", dma_channel, 0x100, 0x20, true, 0xb74d6fb729167c39)
#define _m009 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PORT_CONFIGURATION_INFORMATION.DmaPort", dma_port, 0x120, 0x20, true, 0x759ef38d826ca390)
#define _m010 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum dma::width_t), "_PORT_CONFIGURATION_INFORMATION.DmaWidth", dma_width, 0x140, 0x20, true, 0x353b1d467acfcbcb)
#define _m011 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum dma::speed_t), "_PORT_CONFIGURATION_INFORMATION.DmaSpeed", dma_speed, 0x160, 0x20, true, 0x2466f679db696bb6)
#define _m012 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PORT_CONFIGURATION_INFORMATION.AlignmentMask", alignment_mask, 0x180, 0x20, true, 0xf35ddd9a52c92ae9)
#define _m013 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PORT_CONFIGURATION_INFORMATION.NumberOfAccessRanges", number_of_access_ranges, 0x1a0, 0x20, true, 0x582fa4c833006b7f)
#define _m014 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct stor::port::access_range_t>*), "_PORT_CONFIGURATION_INFORMATION.AccessRanges", access_ranges, 0x1c0, 0x40, true, 0xa1d37142794592f6)
#define _m015 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_PORT_CONFIGURATION_INFORMATION.NumberOfBuses", number_of_buses, 0x240, 0x8, true, 0x72b1e442ff8ec9f3)
#define _m016 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 8>), "_PORT_CONFIGURATION_INFORMATION.InitiatorBusId", initiator_bus_id, 0x248, 0x40, true, 0x836c4f6e0cef8849)
#define _m017 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_PORT_CONFIGURATION_INFORMATION.ScatterGather", scatter_gather, 0x288, 0x8, true, 0x9ab2a23e5f90c236)
#define _m018 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_PORT_CONFIGURATION_INFORMATION.Master", master, 0x290, 0x8, true, 0x34483b5853f8fea1)
#define _m019 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_PORT_CONFIGURATION_INFORMATION.CachesData", caches_data, 0x298, 0x8, true, 0x4f8fe8515953b6ba)
#define _m020 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_PORT_CONFIGURATION_INFORMATION.AdapterScansDown", adapter_scans_down, 0x2a0, 0x8, true, 0xa487bd3a5e80f5bf)
#define _m021 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_PORT_CONFIGURATION_INFORMATION.AtdiskPrimaryClaimed", atdisk_primary_claimed, 0x2a8, 0x8, true, 0x17b26df4d025b91c)
#define _m022 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_PORT_CONFIGURATION_INFORMATION.AtdiskSecondaryClaimed", atdisk_secondary_claimed, 0x2b0, 0x8, true, 0x7fd2adb4e874e26)
#define _m023 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_PORT_CONFIGURATION_INFORMATION.Dma32BitAddresses", dma32_bit_addresses, 0x2b8, 0x8, true, 0xf1559b70a471ec67)
#define _m024 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_PORT_CONFIGURATION_INFORMATION.DemandMode", demand_mode, 0x2c0, 0x8, true, 0x6d6c15a94005a195)
#define _m025 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_PORT_CONFIGURATION_INFORMATION.MapBuffers", map_buffers, 0x2c8, 0x8, true, 0xe84387e185104069)
#define _m026 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_PORT_CONFIGURATION_INFORMATION.NeedPhysicalAddresses", need_physical_addresses, 0x2d0, 0x8, true, 0xaa6c67cb3b05d445)
#define _m027 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_PORT_CONFIGURATION_INFORMATION.TaggedQueuing", tagged_queuing, 0x2d8, 0x8, true, 0xbc3a05e647c3544b)
#define _m028 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_PORT_CONFIGURATION_INFORMATION.AutoRequestSense", auto_request_sense, 0x2e0, 0x8, true, 0xb05f8de2a5f13892)
#define _m029 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_PORT_CONFIGURATION_INFORMATION.MultipleRequestPerLu", multiple_request_per_lu, 0x2e8, 0x8, true, 0xd53ac65cf4fd3a9c)
#define _m030 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_PORT_CONFIGURATION_INFORMATION.ReceiveEvent", receive_event, 0x2f0, 0x8, true, 0x809750ea1b614d27)
#define _m031 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_PORT_CONFIGURATION_INFORMATION.RealModeInitialized", real_mode_initialized, 0x2f8, 0x8, true, 0x163dee26f25a3e8)
#define _m032 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_PORT_CONFIGURATION_INFORMATION.BufferAccessScsiPortControlled", buffer_access_scsi_port_controlled, 0x300, 0x8, true, 0xbc1f68eb77413951)
#define _m033 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_PORT_CONFIGURATION_INFORMATION.MaximumNumberOfTargets", maximum_number_of_targets, 0x308, 0x8, true, 0x1a67c322198272b1)
#define _m034 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PORT_CONFIGURATION_INFORMATION.SlotNumber", slot_number, 0x320, 0x20, true, 0xaaa236e46845cf95)
#define _m035 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PORT_CONFIGURATION_INFORMATION.BusInterruptLevel2", bus_interrupt_level2, 0x340, 0x20, true, 0x564678d8ab96bcf0)
#define _m036 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PORT_CONFIGURATION_INFORMATION.BusInterruptVector2", bus_interrupt_vector2, 0x360, 0x20, true, 0x4a41df2a4b7c1015)
#define _m037 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum nt::kinterrupt_mode_t), "_PORT_CONFIGURATION_INFORMATION.InterruptMode2", interrupt_mode2, 0x380, 0x20, true, 0x6230faaba13c0f70)
#define _m038 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PORT_CONFIGURATION_INFORMATION.DmaChannel2", dma_channel2, 0x3a0, 0x20, true, 0x457ce504d6fac34b)
#define _m039 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PORT_CONFIGURATION_INFORMATION.DmaPort2", dma_port2, 0x3c0, 0x20, true, 0xaecfbdfff67edcf)
#define _m040 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum dma::width_t), "_PORT_CONFIGURATION_INFORMATION.DmaWidth2", dma_width2, 0x3e0, 0x20, true, 0x53b88bef76535670)
#define _m041 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum dma::speed_t), "_PORT_CONFIGURATION_INFORMATION.DmaSpeed2", dma_speed2, 0x400, 0x20, true, 0x2f047577b801abee)
#define _m042 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PORT_CONFIGURATION_INFORMATION.DeviceExtensionSize", device_extension_size, 0x420, 0x20, true, 0x52c934b0b44a278d)
#define _m043 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PORT_CONFIGURATION_INFORMATION.SpecificLuExtensionSize", specific_lu_extension_size, 0x440, 0x20, true, 0x957ae39e5304410d)
#define _m044 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PORT_CONFIGURATION_INFORMATION.SrbExtensionSize", srb_extension_size, 0x460, 0x20, true, 0x7c89d0468cd14cd7)
#define _m045 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_PORT_CONFIGURATION_INFORMATION.Dma64BitAddresses", dma64_bit_addresses, 0x480, 0x8, true, 0x347de47ac438d383)
#define _m046 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_PORT_CONFIGURATION_INFORMATION.ResetTargetSupported", reset_target_supported, 0x488, 0x8, true, 0x64cb564fa6359842)
#define _m047 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_PORT_CONFIGURATION_INFORMATION.MaximumNumberOfLogicalUnits", maximum_number_of_logical_units, 0x490, 0x8, true, 0xd9aa5757af9aa48f)
#define _m048 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_PORT_CONFIGURATION_INFORMATION.WmiDataProvider", wmi_data_provider, 0x498, 0x8, true, 0x2c2fcdcb14e455c9)
#define _m049 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_PORT_CONFIGURATION_INFORMATION.MiniportDumpData", miniport_dump_data, 0x200, 0x40, true, 0x91e53dea54aa458c)
#define _m050 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_PORT_CONFIGURATION_INFORMATION.SrbType", srb_type, 0x310, 0x8, true, 0xb1fbe1677859bbab)
#define _m051 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_PORT_CONFIGURATION_INFORMATION.AddressType", address_type, 0x318, 0x8, true, 0x33d78e703a80a3ca)
#define _m052 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum stor::port::stor_synchronization_model_t), "_PORT_CONFIGURATION_INFORMATION.SynchronizationModel", synchronization_model, 0x4a0, 0x20, true, 0xb6f4b0a8c1971636)
#define _m053 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<uint8_t(void*, uint32_t)>*), "_PORT_CONFIGURATION_INFORMATION.HwMSInterruptRoutine", hw_ms_interrupt_routine, 0x4c0, 0x40, true, 0xf53c6b6f6f1471a7)
#define _m054 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum stor::port::interrupt_synchronization_mode_t), "_PORT_CONFIGURATION_INFORMATION.InterruptSynchronizationMode", interrupt_synchronization_mode, 0x500, 0x20, true, 0x9b901fbcc3b78e54)
#define _m055 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct stor::port::memory_region_t), "_PORT_CONFIGURATION_INFORMATION.DumpRegion", dump_region, 0x540, 0xc0, true, 0x1a99782ef757d108)
#define _m056 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PORT_CONFIGURATION_INFORMATION.RequestedDumpBufferSize", requested_dump_buffer_size, 0x600, 0x20, true, 0x1289a2a1ff8e77b2)
#define _m057 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_PORT_CONFIGURATION_INFORMATION.VirtualDevice", virtual_device, 0x620, 0x8, true, 0xf824683b4bea7c75)
#define _m058 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_PORT_CONFIGURATION_INFORMATION.DumpMode", dump_mode, 0x628, 0x8, true, 0x816726c188644f6d)
#define _m059 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PORT_CONFIGURATION_INFORMATION.ExtendedFlags1", extended_flags1, 0x640, 0x20, true, 0x41283997b27ce575)
#define _m060 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PORT_CONFIGURATION_INFORMATION.MaxNumberOfIO", max_number_of_io, 0x660, 0x20, true, 0xc27ae75315899d45)
#define _m061 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PORT_CONFIGURATION_INFORMATION.MaxIOsPerLun", max_i_os_per_lun, 0x680, 0x20, true, 0x47f1f92414df94c2)
#define _m062 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PORT_CONFIGURATION_INFORMATION.InitialLunQueueDepth", initial_lun_queue_depth, 0x6a0, 0x20, true, 0xf748ce398dc14c5b)
#define _m063 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PORT_CONFIGURATION_INFORMATION.BusResetHoldTime", bus_reset_hold_time, 0x6c0, 0x20, true, 0x6d43acc8290dbe47)
#define _m064 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PORT_CONFIGURATION_INFORMATION.FeatureSupport", feature_support, 0x6e0, 0x20, true, 0x3a842f4efac24361)
#define _m065 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_PORT_CONFIGURATION_INFORMATION.DmaAddressWidth", dma_address_width, 0x630, 0x8, true, 0xb3756f019fbdff6f)
#define _m066 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_PORT_CONFIGURATION_INFORMATION.ReservedUchars", reserved_uchars, 0x310, 0x10, true, 0x8c09b6af805ae35a)
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
#define _m063
#define _m064
#define _m065
#define _m066
#endif