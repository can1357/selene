#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::opaque_string_t), "ExtensionRegistrationEntryProperties.Vendor", vendor, 0x0, 0x40, true, 0xfe9a2e56aee16c87)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::opaque_string_t), "ExtensionRegistrationEntryProperties.Icon", icon, 0x40, 0x40, true, 0x3a451618085b28)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::opaque_string_t), "ExtensionRegistrationEntryProperties.DisplayName", display_name, 0x80, 0x40, true, 0xe32c14460021dba3)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::opaque_string_t), "ExtensionRegistrationEntryProperties.Description", description, 0xc0, 0x40, true, 0x17231b061327feaf)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::entry_property_store_t), "ExtensionRegistrationEntryProperties.CustomProperties", custom_properties, 0x100, 0x40, true, 0x16935c9ec499c6bc)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif