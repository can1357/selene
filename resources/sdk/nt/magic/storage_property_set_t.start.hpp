#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum nt::storage_property_id_t), "_STORAGE_PROPERTY_SET.PropertyId", property_id, 0x0, 0x20, true, 0x9100df88f25400b6)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum nt::storage_set_type_t), "_STORAGE_PROPERTY_SET.SetType", set_type, 0x20, 0x20, true, 0xf9331b21caac651d)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 1>), "_STORAGE_PROPERTY_SET.AdditionalParameters", additional_parameters, 0x40, 0x8, true, 0x5f1bf3122a8f3125)
#else
#define _m00
#define _m01
#define _m02
#endif