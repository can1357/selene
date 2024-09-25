#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SECURITY_FUNCTION_TABLE_A.dwVersion", dw_version, 0x0, 0x20, true, 0xd8cf70dab747e04a)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enumerate_security_packages_fn_a_t ), "_SECURITY_FUNCTION_TABLE_A.EnumerateSecurityPackagesA", enumerate_security_packages_a, 0x40, 0x40, true, 0x9fef41264b3fbd7c)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct sec::handle_t*, uint32_t, void*)>*), "_SECURITY_FUNCTION_TABLE_A.QueryCredentialsAttributesA", query_credentials_attributes_a, 0x80, 0x40, true, 0x7850a17e770494c0)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(acquire_credentials_handle_fn_a_t ), "_SECURITY_FUNCTION_TABLE_A.AcquireCredentialsHandleA", acquire_credentials_handle_a, 0xc0, 0x40, true, 0x51b814f3c003bc9f)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct sec::handle_t*)>*), "_SECURITY_FUNCTION_TABLE_A.FreeCredentialsHandle", free_credentials_handle, 0x100, 0x40, true, 0x74b67e7fee3835ae)
#define _m005 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(initialize_security_context_fn_a_t ), "_SECURITY_FUNCTION_TABLE_A.InitializeSecurityContextA", initialize_security_context_a, 0x180, 0x40, true, 0x97afb4c2b8e0e6b8)
#define _m006 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(accept_security_context_fn_t ), "_SECURITY_FUNCTION_TABLE_A.AcceptSecurityContext", accept_security_context, 0x1c0, 0x40, true, 0x83e463c52fd41237)
#define _m007 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct sec::handle_t*, struct sec::buffer_desc_t*)>*), "_SECURITY_FUNCTION_TABLE_A.CompleteAuthToken", complete_auth_token, 0x200, 0x40, true, 0xfe5d8e1d11164b7a)
#define _m008 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct sec::handle_t*)>*), "_SECURITY_FUNCTION_TABLE_A.DeleteSecurityContext", delete_security_context, 0x240, 0x40, true, 0x9ef29385798547f5)
#define _m009 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct sec::handle_t*, struct sec::buffer_desc_t*)>*), "_SECURITY_FUNCTION_TABLE_A.ApplyControlToken", apply_control_token, 0x280, 0x40, true, 0x87a8ece8f406c28a)
#define _m010 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct sec::handle_t*, uint32_t, void*)>*), "_SECURITY_FUNCTION_TABLE_A.QueryContextAttributesA", query_context_attributes_a, 0x2c0, 0x40, true, 0xeeec73d61c350a3)
#define _m011 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct sec::handle_t*)>*), "_SECURITY_FUNCTION_TABLE_A.ImpersonateSecurityContext", impersonate_security_context, 0x300, 0x40, true, 0x1758ef2319095f2b)
#define _m012 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct sec::handle_t*)>*), "_SECURITY_FUNCTION_TABLE_A.RevertSecurityContext", revert_security_context, 0x340, 0x40, true, 0x25f155567d470fdb)
#define _m013 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct sec::handle_t*, uint32_t, struct sec::buffer_desc_t*, uint32_t)>*), "_SECURITY_FUNCTION_TABLE_A.MakeSignature", make_signature, 0x380, 0x40, true, 0xdfa4707d404c9a50)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct sec::handle_t*, struct sec::buffer_desc_t*, uint32_t, uint32_t*)>*), "_SECURITY_FUNCTION_TABLE_A.VerifySignature", verify_signature, 0x3c0, 0x40, true, 0x6ad13a76e7a2ca71)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*)>*), "_SECURITY_FUNCTION_TABLE_A.FreeContextBuffer", free_context_buffer, 0x400, 0x40, true, 0x74a967fac34083b)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(query_security_package_info_fn_a_t ), "_SECURITY_FUNCTION_TABLE_A.QuerySecurityPackageInfoA", query_security_package_info_a, 0x440, 0x40, true, 0x66d0d857802f30a8)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(export_security_context_fn_t ), "_SECURITY_FUNCTION_TABLE_A.ExportSecurityContext", export_security_context, 0x500, 0x40, true, 0x7b94488c2ef8739b)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(import_security_context_fn_a_t ), "_SECURITY_FUNCTION_TABLE_A.ImportSecurityContextA", import_security_context_a, 0x540, 0x40, true, 0x37e176c91fdde52b)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(add_credentials_fn_a_t ), "_SECURITY_FUNCTION_TABLE_A.AddCredentialsA", add_credentials_a, 0x580, 0x40, true, 0xdd6d9208e72826a6)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(query_security_context_token_fn_t ), "_SECURITY_FUNCTION_TABLE_A.QuerySecurityContextToken", query_security_context_token, 0x600, 0x40, true, 0x35df6f1ba6e0df31)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct sec::handle_t*, uint32_t, struct sec::buffer_desc_t*, uint32_t)>*), "_SECURITY_FUNCTION_TABLE_A.EncryptMessage", encrypt_message, 0x640, 0x40, true, 0x8c4fdd6615cd20a3)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct sec::handle_t*, struct sec::buffer_desc_t*, uint32_t, uint32_t*)>*), "_SECURITY_FUNCTION_TABLE_A.DecryptMessage", decrypt_message, 0x680, 0x40, true, 0xf2befd459971ab10)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct sec::handle_t*, uint32_t, void*, uint32_t)>*), "_SECURITY_FUNCTION_TABLE_A.SetContextAttributesA", set_context_attributes_a, 0x6c0, 0x40, true, 0x60b9ab7312c7229e)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct sec::handle_t*, uint32_t, void*, uint32_t)>*), "_SECURITY_FUNCTION_TABLE_A.SetCredentialsAttributesA", set_credentials_attributes_a, 0x700, 0x40, true, 0x47501c12793fe896)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(change_password_fn_a_t ), "_SECURITY_FUNCTION_TABLE_A.ChangeAccountPasswordA", change_account_password_a, 0x740, 0x40, true, 0x859d58ab8d66870c)
#define _m026 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct sec::handle_t*, uint32_t, void*, uint32_t)>*), "_SECURITY_FUNCTION_TABLE_A.QueryContextAttributesExA", query_context_attributes_ex_a, 0x780, 0x40, true, 0xe06e055d4307c637)
#define _m027 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct sec::handle_t*, uint32_t, void*, uint32_t)>*), "_SECURITY_FUNCTION_TABLE_A.QueryCredentialsAttributesExA", query_credentials_attributes_ex_a, 0x7c0, 0x40, true, 0x2a3e3ce334049ed5)
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