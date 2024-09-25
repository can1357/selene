#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum nt::storage_property_id_t), "_STORAGE_PROPERTY_QUERY.PropertyId", property_id, 0x0, 0x20, true, 0x2589b0858f2fab5b)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum nt::storage_query_type_t), "_STORAGE_PROPERTY_QUERY.QueryType", query_type, 0x20, 0x20, true, 0x7e328f6ec94a55fd)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 1>), "_STORAGE_PROPERTY_QUERY.AdditionalParameters", additional_parameters, 0x40, 0x8, true, 0x1f4800ffa7698882)
#else
#define _m00
#define _m01
#define _m02
#endif