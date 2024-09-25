#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::object_type_t**), "_OB_OPERATION_REGISTRATION.ObjectType", object_type, 0x0, 0x40, true, 0xc5de79daa40e31d8)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_OB_OPERATION_REGISTRATION.Operations", operations, 0x40, 0x20, true, 0x7ca680adb2ae73f5)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pob_pre_operation_callback_t ), "_OB_OPERATION_REGISTRATION.PreOperation", pre_operation, 0x80, 0x40, true, 0xcf3752cd05a161df)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pob_post_operation_callback_t ), "_OB_OPERATION_REGISTRATION.PostOperation", post_operation, 0xc0, 0x40, true, 0x7aec9404b966a08b)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif