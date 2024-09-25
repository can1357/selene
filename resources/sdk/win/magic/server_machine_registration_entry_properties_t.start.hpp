#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum win::server_type_enum_t), "ServerMachineRegistrationEntryProperties.ServerType", server_type, 0x300, 0x20, true, 0xfa05b9f32adcf09e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::entry_property_store_t), "ServerMachineRegistrationEntryProperties.CustomAttributes", custom_attributes, 0x500, 0x40, true, 0xaefdd338c11fc389)
#else
#define _m00
#define _m01
#endif