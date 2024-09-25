#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_OBJECT_ATTRIBUTES.Length", length, 0x0, 0x20, true, 0xaffed6be5f026177)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_OBJECT_ATTRIBUTES.RootDirectory", root_directory, 0x40, 0x40, true, 0x530f1a2b11b85a56)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(nt::unicode_view*), "_OBJECT_ATTRIBUTES.ObjectName", object_name, 0x80, 0x40, true, 0x6964d3921277f47e)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_OBJECT_ATTRIBUTES.Attributes", attributes, 0xc0, 0x20, true, 0x9ec359d99a94bcac)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_OBJECT_ATTRIBUTES.SecurityDescriptor", security_descriptor, 0x100, 0x40, true, 0x89f9077f0feaceaf)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_OBJECT_ATTRIBUTES.SecurityQualityOfService", security_quality_of_service, 0x140, 0x40, true, 0x9eb98ec5da89719d)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif