#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(nt::unicode_view*), "_REG_CREATE_KEY_INFORMATION_V1.CompleteName", complete_name, 0x0, 0x40, true, 0xf82c0af321eab7bf)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_REG_CREATE_KEY_INFORMATION_V1.RootObject", root_object, 0x40, 0x40, true, 0x7b068c9eb79cbb1d)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_REG_CREATE_KEY_INFORMATION_V1.ObjectType", object_type, 0x80, 0x40, true, 0x9f9960012e28e35a)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_REG_CREATE_KEY_INFORMATION_V1.Options", options, 0xc0, 0x20, true, 0x7de9ae83c29c71eb)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(nt::unicode_view*), "_REG_CREATE_KEY_INFORMATION_V1.Class", _class, 0x100, 0x40, true, 0xf4851183c835c5ca)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_REG_CREATE_KEY_INFORMATION_V1.SecurityDescriptor", security_descriptor, 0x140, 0x40, true, 0x9d03e26367479198)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_REG_CREATE_KEY_INFORMATION_V1.SecurityQualityOfService", security_quality_of_service, 0x180, 0x40, true, 0xce6c788606e77acd)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_REG_CREATE_KEY_INFORMATION_V1.DesiredAccess", desired_access, 0x1c0, 0x20, true, 0xeaf5c63800a17b62)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_REG_CREATE_KEY_INFORMATION_V1.GrantedAccess", granted_access, 0x1e0, 0x20, true, 0xdb7152e8f140a689)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t*), "_REG_CREATE_KEY_INFORMATION_V1.Disposition", disposition, 0x200, 0x40, true, 0xe4ba96ae77b27611)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void**), "_REG_CREATE_KEY_INFORMATION_V1.ResultObject", result_object, 0x240, 0x40, true, 0x5885087450328bf6)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_REG_CREATE_KEY_INFORMATION_V1.CallContext", call_context, 0x280, 0x40, true, 0xb02360af017f7dc0)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_REG_CREATE_KEY_INFORMATION_V1.RootObjectContext", root_object_context, 0x2c0, 0x40, true, 0x4577eb9189035e13)
#define _m13 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_REG_CREATE_KEY_INFORMATION_V1.Transaction", transaction, 0x300, 0x40, true, 0xc9c9997a6c6fddaa)
#define _m14 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_REG_CREATE_KEY_INFORMATION_V1.Version", version, 0x340, 0x40, true, 0x9f94c16cfd9fa42e)
#define _m15 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(nt::unicode_view*), "_REG_CREATE_KEY_INFORMATION_V1.RemainingName", remaining_name, 0x380, 0x40, true, 0x35384403f1c69b1b)
#define _m16 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_REG_CREATE_KEY_INFORMATION_V1.Wow64Flags", wow64_flags, 0x3c0, 0x20, true, 0x9e534b7c30ef0f34)
#define _m17 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_REG_CREATE_KEY_INFORMATION_V1.Attributes", attributes, 0x3e0, 0x20, true, 0x47c843cc198b0994)
#define _m18 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(char), "_REG_CREATE_KEY_INFORMATION_V1.CheckAccessMode", check_access_mode, 0x400, 0x8, true, 0x11fcf74f5e683b00)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#define _m10
#define _m11
#define _m12
#define _m13
#define _m14
#define _m15
#define _m16
#define _m17
#define _m18
#endif