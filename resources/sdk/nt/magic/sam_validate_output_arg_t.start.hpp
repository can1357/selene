#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::sam_validate_standard_output_arg_t), "_SAM_VALIDATE_OUTPUT_ARG.ValidateAuthenticationOutput", validate_authentication_output, 0x0, 0x0, true, 0x8b971ccd7a3b9ab1)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::sam_validate_standard_output_arg_t), "_SAM_VALIDATE_OUTPUT_ARG.ValidatePasswordChangeOutput", validate_password_change_output, 0x0, 0x0, true, 0x7ccdf3d4e9b73fc1)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::sam_validate_standard_output_arg_t), "_SAM_VALIDATE_OUTPUT_ARG.ValidatePasswordResetOutput", validate_password_reset_output, 0x0, 0x0, true, 0xed25219a5cfc3180)
#else
#define _m00
#define _m01
#define _m02
#endif