#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class sec::descriptor_t), "ServerRegistrationEntryProperties.Permissions", permissions, 0x300, 0x80, true, 0x8163b74ab99f981b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::multi_string_t), "ServerRegistrationEntryProperties.ActivatableClasses", activatable_classes, 0x380, 0x40, true, 0x3bd52fdc5d4da6fe)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::entry_property_store_t), "ServerRegistrationEntryProperties.CustomAttributes", custom_attributes, 0x540, 0x40, true, 0xcf9f3b16950875d9)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::expandable_string_t), "ServerRegistrationEntryProperties.ExePath", exe_path, 0x0, 0x0, false, 0x746eeda242711765)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif