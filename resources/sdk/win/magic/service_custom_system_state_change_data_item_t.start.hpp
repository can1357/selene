#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::service_trigger_custom_state_id_t), "_SERVICE_CUSTOM_SYSTEM_STATE_CHANGE_DATA_ITEM.CustomStateId", custom_state_id, 0x0, 0x40, true, 0x2c03263e0c20a5)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SERVICE_CUSTOM_SYSTEM_STATE_CHANGE_DATA_ITEM.DataOffset", data_offset, 0x0, 0x20, true, 0x37ad8004119497c9)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 1>), "_SERVICE_CUSTOM_SYSTEM_STATE_CHANGE_DATA_ITEM.Data", data, 0x20, 0x8, true, 0x9c227a94f828442e)
#else
#define _m00
#define _m01
#define _m02
#endif