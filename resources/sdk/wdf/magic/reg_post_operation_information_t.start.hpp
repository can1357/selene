#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_REG_POST_OPERATION_INFORMATION.Object", object, 0x0, 0x40, true, 0xc5e235918dc2e3b6)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_REG_POST_OPERATION_INFORMATION.Status", status, 0x40, 0x20, true, 0x822c2f11f8469855)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_REG_POST_OPERATION_INFORMATION.PreInformation", pre_information, 0x80, 0x40, true, 0xd810a917ea85051c)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_REG_POST_OPERATION_INFORMATION.ReturnStatus", return_status, 0xc0, 0x20, true, 0xf6edb89afa7f41d1)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_REG_POST_OPERATION_INFORMATION.CallContext", call_context, 0x100, 0x40, true, 0x7422f1d60115c50f)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_REG_POST_OPERATION_INFORMATION.ObjectContext", object_context, 0x140, 0x40, true, 0xd695bdcc3ec41cee)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif