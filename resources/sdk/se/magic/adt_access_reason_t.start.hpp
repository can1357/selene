#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SE_ADT_ACCESS_REASON.AccessMask", access_mask, 0x0, 0x20, true, 0x518f4b77c3a36dd4)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 32>), "_SE_ADT_ACCESS_REASON.AccessReasons", access_reasons, 0x20, 0x0, true, 0xaea56275165528a1)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SE_ADT_ACCESS_REASON.ObjectTypeIndex", object_type_index, 0x420, 0x20, true, 0x725c616b0e415952)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SE_ADT_ACCESS_REASON.AccessGranted", access_granted, 0x440, 0x20, true, 0xaa603f8dca7aee97)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_SE_ADT_ACCESS_REASON.SecurityDescriptor", security_descriptor, 0x480, 0x40, true, 0xd7814480e9410018)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif