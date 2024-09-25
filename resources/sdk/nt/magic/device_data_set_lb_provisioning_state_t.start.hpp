#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVICE_DATA_SET_LB_PROVISIONING_STATE.Size", size, 0x0, 0x20, true, 0xc6baf0eecd4244df)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVICE_DATA_SET_LB_PROVISIONING_STATE.Version", version, 0x20, 0x20, true, 0x7e8c6236daa18549)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DEVICE_DATA_SET_LB_PROVISIONING_STATE.SlabSizeInBytes", slab_size_in_bytes, 0x40, 0x40, true, 0x108762c04c846e9a)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVICE_DATA_SET_LB_PROVISIONING_STATE.SlabOffsetDeltaInBytes", slab_offset_delta_in_bytes, 0x80, 0x20, true, 0xbda13b00cd6a781)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVICE_DATA_SET_LB_PROVISIONING_STATE.SlabAllocationBitMapBitCount", slab_allocation_bit_map_bit_count, 0xa0, 0x20, true, 0xc135b693344e5dd0)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVICE_DATA_SET_LB_PROVISIONING_STATE.SlabAllocationBitMapLength", slab_allocation_bit_map_length, 0xc0, 0x20, true, 0xe7c700de83618856)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 1>), "_DEVICE_DATA_SET_LB_PROVISIONING_STATE.SlabAllocationBitMap", slab_allocation_bit_map, 0xe0, 0x20, true, 0xb23e254d5579f5a9)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif