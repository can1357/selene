#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(nt::unicode_view*), "_REG_CREATE_KEY_INFORMATION.CompleteName", complete_name, 0x0, 0x40, true, 0x802205631f089b5)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_REG_CREATE_KEY_INFORMATION.RootObject", root_object, 0x40, 0x40, true, 0x400fdd7a8ec26c1a)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_REG_CREATE_KEY_INFORMATION.ObjectType", object_type, 0x80, 0x40, true, 0xeef73777a9661ddc)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_REG_CREATE_KEY_INFORMATION.CreateOptions", create_options, 0xc0, 0x20, true, 0x4d12d73bd801fd45)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(nt::unicode_view*), "_REG_CREATE_KEY_INFORMATION.Class", _class, 0x100, 0x40, true, 0x6cc7014ce406b4d5)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_REG_CREATE_KEY_INFORMATION.SecurityDescriptor", security_descriptor, 0x140, 0x40, true, 0x3f2ac7d32826c892)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_REG_CREATE_KEY_INFORMATION.SecurityQualityOfService", security_quality_of_service, 0x180, 0x40, true, 0xddc38a381a172ada)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_REG_CREATE_KEY_INFORMATION.DesiredAccess", desired_access, 0x1c0, 0x20, true, 0x63d0f670deb3692)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_REG_CREATE_KEY_INFORMATION.GrantedAccess", granted_access, 0x1e0, 0x20, true, 0x82ee5d411eee52c2)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t*), "_REG_CREATE_KEY_INFORMATION.Disposition", disposition, 0x200, 0x40, true, 0xd06d839c1a15febf)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void**), "_REG_CREATE_KEY_INFORMATION.ResultObject", result_object, 0x240, 0x40, true, 0x6563e892d1163f22)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_REG_CREATE_KEY_INFORMATION.CallContext", call_context, 0x280, 0x40, true, 0xda647f99bd580e)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_REG_CREATE_KEY_INFORMATION.RootObjectContext", root_object_context, 0x2c0, 0x40, true, 0x8bcd2c5f5a712e3a)
#define _m13 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_REG_CREATE_KEY_INFORMATION.Transaction", transaction, 0x300, 0x40, true, 0x9ad6ebabdedb3ac7)
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
#endif