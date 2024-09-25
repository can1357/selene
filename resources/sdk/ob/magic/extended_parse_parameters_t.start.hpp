#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_OB_EXTENDED_PARSE_PARAMETERS.Length", length, 0x0, 0x10, true, 0x179809c6c355bfa1)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_OB_EXTENDED_PARSE_PARAMETERS.RestrictedAccessMask", restricted_access_mask, 0x20, 0x20, true, 0x693bcc31c4e8e8b5)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::ejob_t*), "_OB_EXTENDED_PARSE_PARAMETERS.Silo", silo, 0x40, 0x40, true, 0xa643b7982fd48bb2)
#else
#define _m00
#define _m01
#define _m02
#endif