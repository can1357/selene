#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVICE_DATA_SET_LB_PROVISIONING_STATE_V2.Size", size, 0x0, 0x20, true, 0x5d7cfb888db7be9a)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVICE_DATA_SET_LB_PROVISIONING_STATE_V2.Version", version, 0x20, 0x20, true, 0x56cac1245827baf4)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DEVICE_DATA_SET_LB_PROVISIONING_STATE_V2.SlabSizeInBytes", slab_size_in_bytes, 0x40, 0x40, true, 0x5fc94005462bea30)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DEVICE_DATA_SET_LB_PROVISIONING_STATE_V2.SlabOffsetDeltaInBytes", slab_offset_delta_in_bytes, 0x80, 0x40, true, 0x1e7f0b083bce0c12)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVICE_DATA_SET_LB_PROVISIONING_STATE_V2.SlabAllocationBitMapBitCount", slab_allocation_bit_map_bit_count, 0xc0, 0x20, true, 0xbae63ae84bb5bca2)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVICE_DATA_SET_LB_PROVISIONING_STATE_V2.SlabAllocationBitMapLength", slab_allocation_bit_map_length, 0xe0, 0x20, true, 0x32ef24006447fa9c)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 1>), "_DEVICE_DATA_SET_LB_PROVISIONING_STATE_V2.SlabAllocationBitMap", slab_allocation_bit_map, 0x100, 0x20, true, 0x2990ea8ac5a2beb9)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif