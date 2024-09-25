#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_AUTHZBASEP_SECURITY_ATTRIBUTES_INFORMATION.SecurityAttributeCount", security_attribute_count, 0x0, 0x20, true, 0xeb7998450550286)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_AUTHZBASEP_SECURITY_ATTRIBUTES_INFORMATION.SecurityAttributesList", security_attributes_list, 0x40, 0x80, true, 0x6b1077a7965efe62)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_AUTHZBASEP_SECURITY_ATTRIBUTES_INFORMATION.WorkingSecurityAttributeCount", working_security_attribute_count, 0xc0, 0x20, true, 0x4c745be0a10872dd)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_AUTHZBASEP_SECURITY_ATTRIBUTES_INFORMATION.WorkingSecurityAttributesList", working_security_attributes_list, 0x100, 0x80, true, 0x273ee45129952488)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif