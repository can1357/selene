#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct ob::post_create_handle_information_t), "_OB_POST_OPERATION_PARAMETERS.CreateHandleInformation", create_handle_information, 0x0, 0x20, true, 0x9013b494c88b511b)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct ob::post_duplicate_handle_information_t), "_OB_POST_OPERATION_PARAMETERS.DuplicateHandleInformation", duplicate_handle_information, 0x0, 0x20, true, 0x8f18e22c23d5b22b)
#else
#define _m00
#define _m01
#endif