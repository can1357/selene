#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORPORT_DUMP_ADAPTER_DATA.Version", version, 0x0, 0x20, true, 0x1032edbd8759e3da)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_STORPORT_DUMP_ADAPTER_DATA.Adapter", adapter, 0x40, 0x40, true, 0x9abdd5871779e3bd)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "_STORPORT_DUMP_ADAPTER_DATA.PowerOnReady", power_on_ready, 0x80, 0x40, true, 0x6cd13b4f87c91cd9)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*)>*), "_STORPORT_DUMP_ADAPTER_DATA.PowerOnRoutine", power_on_routine, 0xc0, 0x40, true, 0x7e66adb72cef5c6c)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_STORPORT_DUMP_ADAPTER_DATA.PowerOnContext", power_on_context, 0x100, 0x40, true, 0x21d2d03a4dca3da8)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORPORT_DUMP_ADAPTER_DATA.MemoryBlockSize", memory_block_size, 0x140, 0x20, true, 0xc9978066b67ff1bd)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_STORPORT_DUMP_ADAPTER_DATA.MemoryBlock", memory_block, 0x180, 0x40, true, 0xa04043a642625620)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_STORPORT_DUMP_ADAPTER_DATA.MiniportContext", miniport_context, 0x1c0, 0x40, true, 0x3c5505cd5caff7fc)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct stor::port::port_configuration_information_t), "_STORPORT_DUMP_ADAPTER_DATA.ConfigInfo", config_info, 0x200, 0x0, true, 0x89bf03aa72dac795)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_STORPORT_DUMP_ADAPTER_DATA.MappedAddressList", mapped_address_list, 0x900, 0x40, true, 0xa47d9b7cf754b36e)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_STORPORT_DUMP_ADAPTER_DATA.HiberFileHybridPriority", hiber_file_hybrid_priority, 0x940, 0x10, true, 0xfbddb45eec8a3aac)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_STORPORT_DUMP_ADAPTER_DATA.Flags", flags, 0x950, 0x10, true, 0xecbf7e59c60cc78f)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_STORPORT_DUMP_ADAPTER_DATA.DevExt", dev_ext, 0x980, 0x40, true, 0x4cb79e7476fcd00d)
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
#endif