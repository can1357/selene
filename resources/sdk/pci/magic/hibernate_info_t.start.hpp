#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PCI_HIBERNATE_INFO.Lock", lock, 0x0, 0x40, true, 0x9ac6043a45800389)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::bitmap_t), "_PCI_HIBERNATE_INFO.BusScanMap", bus_scan_map, 0x40, 0x80, true, 0x66f4b86a07ea6a16)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 8>), "_PCI_HIBERNATE_INFO.BusScanMapBuffer", bus_scan_map_buffer, 0xc0, 0x0, true, 0x5436fa8ca7589c09)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PCI_HIBERNATE_INFO.BusScanCount", bus_scan_count, 0x1c0, 0x20, true, 0xc2c8849ac56d46cb)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PCI_HIBERNATE_INFO.TotalBusScanned", total_bus_scanned, 0x1e0, 0x20, true, 0x8ca515d5d6217081)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PCI_HIBERNATE_INFO.StartTime", start_time, 0x200, 0x40, true, 0xe5712925ed72f496)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PCI_HIBERNATE_INFO.EndTime", end_time, 0x240, 0x40, true, 0x9a0f9cafdfd3bb8)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif