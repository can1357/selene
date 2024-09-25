#if !IN_PARSER
#define _m000 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_VIDEO_PORT_CONFIG_INFO.Length", length, 0x0, 0x20, true, 0x5272f5c999f078b)
#define _m001 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_VIDEO_PORT_CONFIG_INFO.SystemIoBusNumber", system_io_bus_number, 0x20, 0x20, true, 0xd7c264d99bf4bdfe)
#define _m002 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum nt::interface_type_t), "_VIDEO_PORT_CONFIG_INFO.AdapterInterfaceType", adapter_interface_type, 0x40, 0x20, true, 0x79d485aaf8fb4f0e)
#define _m003 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_VIDEO_PORT_CONFIG_INFO.BusInterruptLevel", bus_interrupt_level, 0x60, 0x20, true, 0xaa552c8b850e5b9a)
#define _m004 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_VIDEO_PORT_CONFIG_INFO.BusInterruptVector", bus_interrupt_vector, 0x80, 0x20, true, 0x605188483bb181f0)
#define _m005 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum nt::kinterrupt_mode_t), "_VIDEO_PORT_CONFIG_INFO.InterruptMode", interrupt_mode, 0xa0, 0x20, true, 0xb728986083a73f2e)
#define _m006 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_VIDEO_PORT_CONFIG_INFO.NumEmulatorAccessEntries", num_emulator_access_entries, 0xc0, 0x20, true, 0xdc68d980509e7ab6)
#define _m007 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::emulator_access_entry_t*), "_VIDEO_PORT_CONFIG_INFO.EmulatorAccessEntries", emulator_access_entries, 0x100, 0x40, true, 0xb5e20c25b5a90093)
#define _m008 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_VIDEO_PORT_CONFIG_INFO.EmulatorAccessEntriesContext", emulator_access_entries_context, 0x140, 0x40, true, 0x6fbc28350af8302d)
#define _m009 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_VIDEO_PORT_CONFIG_INFO.VdmPhysicalVideoMemoryAddress", vdm_physical_video_memory_address, 0x180, 0x40, true, 0x5d5115b77e883a73)
#define _m010 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_VIDEO_PORT_CONFIG_INFO.VdmPhysicalVideoMemoryLength", vdm_physical_video_memory_length, 0x1c0, 0x20, true, 0x9246025366164c11)
#define _m011 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_VIDEO_PORT_CONFIG_INFO.HardwareStateSize", hardware_state_size, 0x1e0, 0x20, true, 0x251467e396ce496a)
#define _m012 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_VIDEO_PORT_CONFIG_INFO.DmaChannel", dma_channel, 0x200, 0x20, true, 0xfbaeef4d1db84901)
#define _m013 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_VIDEO_PORT_CONFIG_INFO.DmaPort", dma_port, 0x220, 0x20, true, 0xf7d0b5b03f72aa74)
#define _m014 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_VIDEO_PORT_CONFIG_INFO.DmaShareable", dma_shareable, 0x240, 0x8, true, 0xec1660b138ed2356)
#define _m015 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_VIDEO_PORT_CONFIG_INFO.InterruptShareable", interrupt_shareable, 0x248, 0x8, true, 0x9b217fe0a45c14ce)
#define _m016 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_VIDEO_PORT_CONFIG_INFO.Master", master, 0x250, 0x8, true, 0x2e0edf1a533006ac)
#define _m017 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum dma::width_t), "_VIDEO_PORT_CONFIG_INFO.DmaWidth", dma_width, 0x260, 0x20, true, 0xe0a7fcda1d836725)
#define _m018 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum dma::speed_t), "_VIDEO_PORT_CONFIG_INFO.DmaSpeed", dma_speed, 0x280, 0x20, true, 0x9465ea5764ba9ba3)
#define _m019 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_VIDEO_PORT_CONFIG_INFO.bMapBuffers", b_map_buffers, 0x2a0, 0x8, true, 0x97fef51534fa0f66)
#define _m020 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_VIDEO_PORT_CONFIG_INFO.NeedPhysicalAddresses", need_physical_addresses, 0x2a8, 0x8, true, 0xa35510ac114cb27c)
#define _m021 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_VIDEO_PORT_CONFIG_INFO.DemandMode", demand_mode, 0x2b0, 0x8, true, 0x46bf788c2f0dc7c2)
#define _m022 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_VIDEO_PORT_CONFIG_INFO.MaximumTransferLength", maximum_transfer_length, 0x2c0, 0x20, true, 0x6c2bd658c2397d12)
#define _m023 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_VIDEO_PORT_CONFIG_INFO.NumberOfPhysicalBreaks", number_of_physical_breaks, 0x2e0, 0x20, true, 0x29b1967ee1fef2b4)
#define _m024 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_VIDEO_PORT_CONFIG_INFO.ScatterGather", scatter_gather, 0x300, 0x8, true, 0x611af619fb3e2e26)
#define _m025 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_VIDEO_PORT_CONFIG_INFO.MaximumScatterGatherChunkSize", maximum_scatter_gather_chunk_size, 0x320, 0x20, true, 0x56efd48d40d6130c)
#define _m026 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void*(void*, uint8_t*)>*), "_VIDEO_PORT_CONFIG_INFO.VideoPortGetProcAddress", video_port_get_proc_address, 0x340, 0x40, true, 0xf6afb40c20ad3117)
#define _m027 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(wchar_t*), "_VIDEO_PORT_CONFIG_INFO.DriverRegistryPath", driver_registry_path, 0x380, 0x40, true, 0x55b788a6aeaad229)
#define _m028 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_VIDEO_PORT_CONFIG_INFO.SystemMemorySize", system_memory_size, 0x3c0, 0x40, true, 0x98bf9eb74036a643)
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
#endif