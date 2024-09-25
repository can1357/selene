#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct ob::pre_create_handle_information_t), "_OB_PRE_OPERATION_PARAMETERS.CreateHandleInformation", create_handle_information, 0x0, 0x40, true, 0xb91a27b1a1db9875)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct ob::pre_duplicate_handle_information_t), "_OB_PRE_OPERATION_PARAMETERS.DuplicateHandleInformation", duplicate_handle_information, 0x0, 0xc0, true, 0x7d5c966b963042e7)
#else
#define _m00
#define _m01
#endif