#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_PHYSICAL_NODE_DATA.NodeId", node_id, 0x0, 0x20, true, 0x71b5b57e7939e7dc)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_PHYSICAL_NODE_DATA.AdapterCount", adapter_count, 0x20, 0x20, true, 0xce5f3093bfd04949)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_PHYSICAL_NODE_DATA.AdapterDataLength", adapter_data_length, 0x40, 0x20, true, 0x5e69e48d74b44d2a)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_PHYSICAL_NODE_DATA.AdapterDataOffset", adapter_data_offset, 0x60, 0x20, true, 0x8ed0ccf5f91bcddc)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_PHYSICAL_NODE_DATA.DeviceCount", device_count, 0x80, 0x20, true, 0x9098241dcecd60ba)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_PHYSICAL_NODE_DATA.DeviceDataLength", device_data_length, 0xa0, 0x20, true, 0x804e5213920bb3e7)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_PHYSICAL_NODE_DATA.DeviceDataOffset", device_data_offset, 0xc0, 0x20, true, 0x415ffbfea62c7d7e)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif