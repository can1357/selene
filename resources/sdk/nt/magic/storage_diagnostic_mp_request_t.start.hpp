#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_DIAGNOSTIC_MP_REQUEST.Version", version, 0x0, 0x20, true, 0x155f68bec1fe150c)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_DIAGNOSTIC_MP_REQUEST.Size", size, 0x20, 0x20, true, 0x12f7abcae254c815)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum nt::mp_storage_diagnostic_target_type_t), "_STORAGE_DIAGNOSTIC_MP_REQUEST.TargetType", target_type, 0x40, 0x20, true, 0xddfe5f572eecbb2e)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum nt::mp_storage_diagnostic_level_t), "_STORAGE_DIAGNOSTIC_MP_REQUEST.Level", level, 0x60, 0x20, true, 0x5d7df01956cd70e5)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_STORAGE_DIAGNOSTIC_MP_REQUEST.ProviderId", provider_id, 0x80, 0x80, true, 0xc1de6de80fe9c7d5)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_DIAGNOSTIC_MP_REQUEST.BufferSize", buffer_size, 0x100, 0x20, true, 0x4654d5f477efb12d)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 1>), "_STORAGE_DIAGNOSTIC_MP_REQUEST.DataBuffer", data_buffer, 0x140, 0x8, true, 0xaff3f8d4dcdbc44c)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif