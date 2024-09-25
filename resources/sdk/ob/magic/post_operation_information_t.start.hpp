#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_OB_POST_OPERATION_INFORMATION.Operation", operation, 0x0, 0x20, true, 0x62e3a1bca48ada52)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_OB_POST_OPERATION_INFORMATION.Flags", flags, 0x20, 0x20, true, 0xd8590402b3ad3d43)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_OB_POST_OPERATION_INFORMATION.KernelHandle", kernel_handle, 0x20, 0x1, true, 0x5e32493611c9a5fa, 1, uint32_t)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_OB_POST_OPERATION_INFORMATION.Object", object, 0x40, 0x40, true, 0xce3750e08b19b6d6)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::object_type_t*), "_OB_POST_OPERATION_INFORMATION.ObjectType", object_type, 0x80, 0x40, true, 0xed0795ef29118daf)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_OB_POST_OPERATION_INFORMATION.CallContext", call_context, 0xc0, 0x40, true, 0x1efab9e396ce4871)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_OB_POST_OPERATION_INFORMATION.ReturnStatus", return_status, 0x100, 0x20, true, 0x111ab5e745f41ec4)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union ob::post_operation_parameters_t*), "_OB_POST_OPERATION_INFORMATION.Parameters", parameters, 0x140, 0x40, true, 0x81e0f7d55f95a1de)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif