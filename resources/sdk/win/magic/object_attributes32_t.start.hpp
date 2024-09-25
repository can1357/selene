#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_OBJECT_ATTRIBUTES32.Length", length, 0x0, 0x20, true, 0xd070c6c94f835306)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_OBJECT_ATTRIBUTES32.RootDirectory", root_directory, 0x20, 0x20, true, 0x7a2bafbf5db1182e)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_OBJECT_ATTRIBUTES32.ObjectName", object_name, 0x40, 0x20, true, 0xaff62ca4404c8b8d)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_OBJECT_ATTRIBUTES32.Attributes", attributes, 0x60, 0x20, true, 0x712b90d6f0d0af43)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_OBJECT_ATTRIBUTES32.SecurityDescriptor", security_descriptor, 0x80, 0x20, true, 0x1a1f40b070aa7ba8)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_OBJECT_ATTRIBUTES32.SecurityQualityOfService", security_quality_of_service, 0xa0, 0x20, true, 0x2cd5a919923a3223)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif