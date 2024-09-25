#if !IN_PARSER
#define _m000 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SECURITY_FUNCTION_TABLE_W.dwVersion", dw_version, 0x0, 0x20, true, 0x4229e78f98d774a7)
#define _m001 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(uint32_t*, struct sec::pkg_info_w_t**)>*), "_SECURITY_FUNCTION_TABLE_W.EnumerateSecurityPackagesW", enumerate_security_packages_w, 0x40, 0x40, true, 0x2a7ae6c582665d52)
#define _m002 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct sec::handle_t*, uint32_t, void*)>*), "_SECURITY_FUNCTION_TABLE_W.QueryCredentialsAttributesW", query_credentials_attributes_w, 0x80, 0x40, true, 0xb4519a270fdeacf7)
#define _m003 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::variant<sdk::function<int32_t(nt::unicode_view*, nt::unicode_view*, uint32_t, void*, void*, sdk::function<void(void*, void*, uint32_t, void**, int32_t*)>*, void*, struct sec::handle_t*, int64_t*)>*, sdk::function<int32_t(wchar_t*, wchar_t*, uint32_t, void*, void*, sdk::function<void(void*, void*, uint32_t, void**, int32_t*)>*, void*, struct sec::handle_t*, int64_t*)>*>), "_SECURITY_FUNCTION_TABLE_W.AcquireCredentialsHandleW", acquire_credentials_handle_w, 0xc0, 0x40, true, 0xe80f188d2b94b4a)
#define _m004 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct sec::handle_t*)>*), "_SECURITY_FUNCTION_TABLE_W.FreeCredentialsHandle", free_credentials_handle, 0x100, 0x40, true, 0x3a7de0493f929a0c)
#define _m005 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::variant<sdk::function<int32_t(struct sec::handle_t*, struct sec::handle_t*, nt::unicode_view*, uint32_t, uint32_t, uint32_t, struct sec::buffer_desc_t*, uint32_t, struct sec::handle_t*, struct sec::buffer_desc_t*, uint32_t*, int64_t*)>*, sdk::function<int32_t(struct sec::handle_t*, struct sec::handle_t*, wchar_t*, uint32_t, uint32_t, uint32_t, struct sec::buffer_desc_t*, uint32_t, struct sec::handle_t*, struct sec::buffer_desc_t*, uint32_t*, int64_t*)>*>), "_SECURITY_FUNCTION_TABLE_W.InitializeSecurityContextW", initialize_security_context_w, 0x180, 0x40, true, 0x4b027d3c7b738005)
#define _m006 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct sec::handle_t*, struct sec::handle_t*, struct sec::buffer_desc_t*, uint32_t, uint32_t, struct sec::handle_t*, struct sec::buffer_desc_t*, uint32_t*, int64_t*)>*), "_SECURITY_FUNCTION_TABLE_W.AcceptSecurityContext", accept_security_context, 0x1c0, 0x40, true, 0x7c6c92059a899012)
#define _m007 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct sec::handle_t*, struct sec::buffer_desc_t*)>*), "_SECURITY_FUNCTION_TABLE_W.CompleteAuthToken", complete_auth_token, 0x200, 0x40, true, 0x628342cdc6f64465)
#define _m008 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct sec::handle_t*)>*), "_SECURITY_FUNCTION_TABLE_W.DeleteSecurityContext", delete_security_context, 0x240, 0x40, true, 0xfb520bf265b455e3)
#define _m009 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct sec::handle_t*, struct sec::buffer_desc_t*)>*), "_SECURITY_FUNCTION_TABLE_W.ApplyControlToken", apply_control_token, 0x280, 0x40, true, 0xd536ea3059bd2b66)
#define _m010 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct sec::handle_t*, uint32_t, void*)>*), "_SECURITY_FUNCTION_TABLE_W.QueryContextAttributesW", query_context_attributes_w, 0x2c0, 0x40, true, 0xfcea0c4d16470cf3)
#define _m011 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct sec::handle_t*)>*), "_SECURITY_FUNCTION_TABLE_W.ImpersonateSecurityContext", impersonate_security_context, 0x300, 0x40, true, 0xfa2993f22dc9a63c)
#define _m012 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct sec::handle_t*)>*), "_SECURITY_FUNCTION_TABLE_W.RevertSecurityContext", revert_security_context, 0x340, 0x40, true, 0xebd09d25923e41e0)
#define _m013 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct sec::handle_t*, uint32_t, struct sec::buffer_desc_t*, uint32_t)>*), "_SECURITY_FUNCTION_TABLE_W.MakeSignature", make_signature, 0x380, 0x40, true, 0xa7392d39d63edce8)
#define _m014 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct sec::handle_t*, struct sec::buffer_desc_t*, uint32_t, uint32_t*)>*), "_SECURITY_FUNCTION_TABLE_W.VerifySignature", verify_signature, 0x3c0, 0x40, true, 0xfdb54779fb0cf0ef)
#define _m015 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*)>*), "_SECURITY_FUNCTION_TABLE_W.FreeContextBuffer", free_context_buffer, 0x400, 0x40, true, 0xd0dd937ac59129fe)
#define _m016 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::variant<sdk::function<int32_t(nt::unicode_view*, struct sec::pkg_info_w_t**)>*, sdk::function<int32_t(wchar_t*, struct sec::pkg_info_w_t**)>*>), "_SECURITY_FUNCTION_TABLE_W.QuerySecurityPackageInfoW", query_security_package_info_w, 0x440, 0x40, true, 0xf649a02b6ed0a187)
#define _m017 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct sec::handle_t*, uint32_t, struct sec::buffer_t*, void**)>*), "_SECURITY_FUNCTION_TABLE_W.ExportSecurityContext", export_security_context, 0x500, 0x40, true, 0x9123051e5fcc3bad)
#define _m018 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::variant<sdk::function<int32_t(nt::unicode_view*, struct sec::buffer_t*, void*, struct sec::handle_t*)>*, sdk::function<int32_t(wchar_t*, struct sec::buffer_t*, void*, struct sec::handle_t*)>*>), "_SECURITY_FUNCTION_TABLE_W.ImportSecurityContextW", import_security_context_w, 0x540, 0x40, true, 0xae28733e90b9cc6b)
#define _m019 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::variant<sdk::function<int32_t(struct sec::handle_t*, nt::unicode_view*, nt::unicode_view*, uint32_t, void*, sdk::function<void(void*, void*, uint32_t, void**, int32_t*)>*, void*, int64_t*)>*, sdk::function<int32_t(struct sec::handle_t*, wchar_t*, wchar_t*, uint32_t, void*, sdk::function<void(void*, void*, uint32_t, void**, int32_t*)>*, void*, int64_t*)>*>), "_SECURITY_FUNCTION_TABLE_W.AddCredentialsW", add_credentials_w, 0x580, 0x40, true, 0x31e39556528e57f5)
#define _m020 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct sec::handle_t*, void**)>*), "_SECURITY_FUNCTION_TABLE_W.QuerySecurityContextToken", query_security_context_token, 0x600, 0x40, true, 0x8b916bcddeb0bf6b)
#define _m021 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct sec::handle_t*, uint32_t, struct sec::buffer_desc_t*, uint32_t)>*), "_SECURITY_FUNCTION_TABLE_W.EncryptMessage", encrypt_message, 0x640, 0x40, true, 0x78c9c56ea554c1d9)
#define _m022 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct sec::handle_t*, struct sec::buffer_desc_t*, uint32_t, uint32_t*)>*), "_SECURITY_FUNCTION_TABLE_W.DecryptMessage", decrypt_message, 0x680, 0x40, true, 0x23620c83b545b8de)
#define _m023 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct sec::handle_t*, uint32_t, void*, uint32_t)>*), "_SECURITY_FUNCTION_TABLE_W.SetContextAttributesW", set_context_attributes_w, 0x6c0, 0x40, true, 0x2fc8f048f4a0ed2b)
#define _m024 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct sec::handle_t*, uint32_t, void*, uint32_t)>*), "_SECURITY_FUNCTION_TABLE_W.SetCredentialsAttributesW", set_credentials_attributes_w, 0x700, 0x40, true, 0x390cc8d8c28c933b)
#define _m025 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct sec::handle_t*, uint32_t, void*, uint32_t)>*), "_SECURITY_FUNCTION_TABLE_W.QueryContextAttributesExW", query_context_attributes_ex_w, 0x780, 0x40, true, 0xac7fa36e564ef0a6)
#define _m026 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct sec::handle_t*, uint32_t, void*, uint32_t)>*), "_SECURITY_FUNCTION_TABLE_W.QueryCredentialsAttributesExW", query_credentials_attributes_ex_w, 0x7c0, 0x40, true, 0xde534fbb9bbd556e)
#define _m027 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(change_password_fn_w_t ), "_SECURITY_FUNCTION_TABLE_W.ChangeAccountPasswordW", change_account_password_w, 0x740, 0x40, true, 0xa45efa163b9a23d)
#else
#define _m000
#define _m001
#define _m002
#define _m003
#define _m004
#define _m005
#define _m006
#define _m007
#define _m008
#define _m009
#define _m010
#define _m011
#define _m012
#define _m013
#define _m014
#define _m015
#define _m016
#define _m017
#define _m018
#define _m019
#define _m020
#define _m021
#define _m022
#define _m023
#define _m024
#define _m025
#define _m026
#define _m027
#endif