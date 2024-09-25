#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum win::secpkg_cred_class_t), "_SecPkgContext_CredInfo.CredClass", cred_class, 0x0, 0x20, true, 0xf2a119f4c24506a3)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SecPkgContext_CredInfo.IsPromptingNeeded", is_prompting_needed, 0x20, 0x20, true, 0x13fdfc351da39107)
#else
#define _m00
#define _m01
#endif