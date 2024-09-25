#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_OB_PRE_OPERATION_INFORMATION.Operation", operation, 0x0, 0x20, true, 0x734857068a928689)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_OB_PRE_OPERATION_INFORMATION.Flags", flags, 0x20, 0x20, true, 0xe02289dcb5ece13)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_OB_PRE_OPERATION_INFORMATION.KernelHandle", kernel_handle, 0x20, 0x1, true, 0xe92dda71cc0a778, 1, uint32_t)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_OB_PRE_OPERATION_INFORMATION.Object", object, 0x40, 0x40, true, 0x5ff3de6fec48e8d1)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::object_type_t*), "_OB_PRE_OPERATION_INFORMATION.ObjectType", object_type, 0x80, 0x40, true, 0x958016eb7a60d6dc)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_OB_PRE_OPERATION_INFORMATION.CallContext", call_context, 0xc0, 0x40, true, 0xdabfeb9070bbdd15)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union ob::pre_operation_parameters_t*), "_OB_PRE_OPERATION_INFORMATION.Parameters", parameters, 0x100, 0x40, true, 0x3ceac1287fc6a425)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif