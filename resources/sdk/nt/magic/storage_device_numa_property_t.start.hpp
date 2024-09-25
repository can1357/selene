#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_DEVICE_NUMA_PROPERTY.Version", version, 0x0, 0x20, true, 0xe5040e0ee26a8e5e)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_DEVICE_NUMA_PROPERTY.Size", size, 0x20, 0x20, true, 0xf8f01e46fe75a03)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_DEVICE_NUMA_PROPERTY.NumaNode", numa_node, 0x40, 0x20, true, 0xc897dfccf6a88926)
#else
#define _m00
#define _m01
#define _m02
#endif