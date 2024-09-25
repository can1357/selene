#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::sam_validate_authentication_input_arg_t), "_SAM_VALIDATE_INPUT_ARG.ValidateAuthenticationInput", validate_authentication_input, 0x0, 0x0, true, 0x405b86196c26387f)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::sam_validate_password_change_input_arg_t), "_SAM_VALIDATE_INPUT_ARG.ValidatePasswordChangeInput", validate_password_change_input, 0x0, 0x0, true, 0x8581d29418fc706f)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::sam_validate_password_reset_input_arg_t), "_SAM_VALIDATE_INPUT_ARG.ValidatePasswordResetInput", validate_password_reset_input, 0x0, 0x0, true, 0x56a84370579ee168)
#else
#define _m00
#define _m01
#define _m02
#endif