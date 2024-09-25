#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_OBJECT_ATTRIBUTES64.Length", length, 0x0, 0x20, true, 0x28c92bfda22a1982)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_OBJECT_ATTRIBUTES64.RootDirectory", root_directory, 0x40, 0x40, true, 0x429fd2561a9a07d8)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_OBJECT_ATTRIBUTES64.ObjectName", object_name, 0x80, 0x40, true, 0x259af62498ed0813)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_OBJECT_ATTRIBUTES64.Attributes", attributes, 0xc0, 0x20, true, 0x97db65275293f339)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_OBJECT_ATTRIBUTES64.SecurityDescriptor", security_descriptor, 0x100, 0x40, true, 0xe58014fd1a7985ab)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_OBJECT_ATTRIBUTES64.SecurityQualityOfService", security_quality_of_service, 0x140, 0x40, true, 0x763aaa8a0f08f5a9)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif