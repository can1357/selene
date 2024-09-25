#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/function_table_w_t.start.hpp"
namespace sec
{
    struct buffer_t;
    struct handle_t;
    struct pkg_info_w_t;
    struct buffer_desc_t;

    // [struct _SECURITY_FUNCTION_TABLE_W]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct function_table_w_t                                                                  
    {                                                                                          
        using enumerate_security_packages_w_t =     sdk::function<int32_t(uint32_t*, struct sec::pkg_info_w_t**)>*;                                  
        using query_credentials_attributes_w_t =    sdk::function<int32_t(struct sec::handle_t*, uint32_t, void*)>*;                                  
        using acquire_credentials_handle_w_t =      sdk::variant<sdk::function<int32_t(nt::unicode_view*, nt::unicode_view*, uint32_t, void*, void*, sdk::function<void(void*, void*, uint32_t, void**, int32_t*)>*, void*, struct sec::handle_t*, int64_t*)>*, sdk::function<int32_t(wchar_t*, wchar_t*, uint32_t, void*, void*, sdk::function<void(void*, void*, uint32_t, void**, int32_t*)>*, void*, struct sec::handle_t*, int64_t*)>*>;                                  
        using initialize_security_context_w_t =     sdk::variant<sdk::function<int32_t(struct sec::handle_t*, struct sec::handle_t*, nt::unicode_view*, uint32_t, uint32_t, uint32_t, struct sec::buffer_desc_t*, uint32_t, struct sec::handle_t*, struct sec::buffer_desc_t*, uint32_t*, int64_t*)>*, sdk::function<int32_t(struct sec::handle_t*, struct sec::handle_t*, wchar_t*, uint32_t, uint32_t, uint32_t, struct sec::buffer_desc_t*, uint32_t, struct sec::handle_t*, struct sec::buffer_desc_t*, uint32_t*, int64_t*)>*>;                                  
        using accept_security_context_t =           sdk::function<int32_t(struct sec::handle_t*, struct sec::handle_t*, struct sec::buffer_desc_t*, uint32_t, uint32_t, struct sec::handle_t*, struct sec::buffer_desc_t*, uint32_t*, int64_t*)>*;                                  
        using complete_auth_token_t =               sdk::function<int32_t(struct sec::handle_t*, struct sec::buffer_desc_t*)>*;                                  
        using apply_control_token_t =               sdk::function<int32_t(struct sec::handle_t*, struct sec::buffer_desc_t*)>*;                                  
        using query_context_attributes_w_t =        sdk::function<int32_t(struct sec::handle_t*, uint32_t, void*)>*;                                  
        using make_signature_t =                    sdk::function<int32_t(struct sec::handle_t*, uint32_t, struct sec::buffer_desc_t*, uint32_t)>*;                                  
        using verify_signature_t =                  sdk::function<int32_t(struct sec::handle_t*, struct sec::buffer_desc_t*, uint32_t, uint32_t*)>*;                                  
        using query_security_package_info_w_t =     sdk::variant<sdk::function<int32_t(nt::unicode_view*, struct sec::pkg_info_w_t**)>*, sdk::function<int32_t(wchar_t*, struct sec::pkg_info_w_t**)>*>;                                  
        using export_security_context_t =           sdk::function<int32_t(struct sec::handle_t*, uint32_t, struct sec::buffer_t*, void**)>*;                                  
        using import_security_context_w_t =         sdk::variant<sdk::function<int32_t(nt::unicode_view*, struct sec::buffer_t*, void*, struct sec::handle_t*)>*, sdk::function<int32_t(wchar_t*, struct sec::buffer_t*, void*, struct sec::handle_t*)>*>;                                  
        using add_credentials_w_t =                 sdk::variant<sdk::function<int32_t(struct sec::handle_t*, nt::unicode_view*, nt::unicode_view*, uint32_t, void*, sdk::function<void(void*, void*, uint32_t, void**, int32_t*)>*, void*, int64_t*)>*, sdk::function<int32_t(struct sec::handle_t*, wchar_t*, wchar_t*, uint32_t, void*, sdk::function<void(void*, void*, uint32_t, void**, int32_t*)>*, void*, int64_t*)>*>;                                  
        using query_security_context_token_t =      sdk::function<int32_t(struct sec::handle_t*, void**)>*;                                  
        using encrypt_message_t =                   sdk::function<int32_t(struct sec::handle_t*, uint32_t, struct sec::buffer_desc_t*, uint32_t)>*;                                  
        using decrypt_message_t =                   sdk::function<int32_t(struct sec::handle_t*, struct sec::buffer_desc_t*, uint32_t, uint32_t*)>*;                                  
        using set_context_attributes_w_t =          sdk::function<int32_t(struct sec::handle_t*, uint32_t, void*, uint32_t)>*;                                  
        using set_credentials_attributes_w_t =      sdk::function<int32_t(struct sec::handle_t*, uint32_t, void*, uint32_t)>*;                                  
        using query_context_attributes_ex_w_t =     sdk::function<int32_t(struct sec::handle_t*, uint32_t, void*, uint32_t)>*;                                  
        using query_credentials_attributes_ex_w_t = sdk::function<int32_t(struct sec::handle_t*, uint32_t, void*, uint32_t)>*;                                  
        using change_password_fn_w_t =              sdk::function<int32_t(wchar_t*, wchar_t*, wchar_t*, wchar_t*, wchar_t*, uint8_t, uint32_t, struct sec::buffer_desc_t*)>*;                                  
                                                                                               
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                                  
        //                                                                                     
        _m000 uint32_t                                       dw_version;                         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwVersion
        _m001 enumerate_security_packages_w_t                enumerate_security_packages_w;      //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .EnumerateSecurityPackagesW
        _m002 query_credentials_attributes_w_t               query_credentials_attributes_w;     //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .QueryCredentialsAttributesW
        _m003 acquire_credentials_handle_w_t                 acquire_credentials_handle_w;       //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .AcquireCredentialsHandleW
        _m004 sdk::function<int32_t(struct sec::handle_t*)>* free_credentials_handle;            //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .FreeCredentialsHandle
        _m005 initialize_security_context_w_t                initialize_security_context_w;      //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .InitializeSecurityContextW
        _m006 accept_security_context_t                      accept_security_context;            //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .AcceptSecurityContext
        _m007 complete_auth_token_t                          complete_auth_token;                //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .CompleteAuthToken
        _m008 sdk::function<int32_t(struct sec::handle_t*)>* delete_security_context;            //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .DeleteSecurityContext
        _m009 apply_control_token_t                          apply_control_token;                //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .ApplyControlToken
        _m010 query_context_attributes_w_t                   query_context_attributes_w;         //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .QueryContextAttributesW
        _m011 sdk::function<int32_t(struct sec::handle_t*)>* impersonate_security_context;       //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .ImpersonateSecurityContext
        _m012 sdk::function<int32_t(struct sec::handle_t*)>* revert_security_context;            //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .RevertSecurityContext
        _m013 make_signature_t                               make_signature;                     //{ +0x0070    +0x0070    +0x0070    +0x0070    } | .MakeSignature
        _m014 verify_signature_t                             verify_signature;                   //{ +0x0078    +0x0078    +0x0078    +0x0078    } | .VerifySignature
        _m015 sdk::function<int32_t(void*)>*                 free_context_buffer;                //{ +0x0080    +0x0080    +0x0080    +0x0080    } | .FreeContextBuffer
        _m016 query_security_package_info_w_t                query_security_package_info_w;      //{ +0x0088    +0x0088    +0x0088    +0x0088    } | .QuerySecurityPackageInfoW
        _m017 export_security_context_t                      export_security_context;            //{ +0x00a0    +0x00a0    +0x00a0    +0x00a0    } | .ExportSecurityContext
        _m018 import_security_context_w_t                    import_security_context_w;          //{ +0x00a8    +0x00a8    +0x00a8    +0x00a8    } | .ImportSecurityContextW
        _m019 add_credentials_w_t                            add_credentials_w;                  //{ +0x00b0    +0x00b0    +0x00b0    +0x00b0    } | .AddCredentialsW
        _m020 query_security_context_token_t                 query_security_context_token;       //{ +0x00c0    +0x00c0    +0x00c0    +0x00c0    } | .QuerySecurityContextToken
        _m021 encrypt_message_t                              encrypt_message;                    //{ +0x00c8    +0x00c8    +0x00c8    +0x00c8    } | .EncryptMessage
        _m022 decrypt_message_t                              decrypt_message;                    //{ +0x00d0    +0x00d0    +0x00d0    +0x00d0    } | .DecryptMessage
        _m023 set_context_attributes_w_t                     set_context_attributes_w;           //{ +0x00d8    +0x00d8    +0x00d8    +0x00d8    } | .SetContextAttributesW
        _m024 set_credentials_attributes_w_t                 set_credentials_attributes_w;       //{ +0x00e0    +0x00e0    +0x00e0    +0x00e0    } | .SetCredentialsAttributesW
        _m025 query_context_attributes_ex_w_t                query_context_attributes_ex_w;      //{ +0x00f0    +0x00f0    +0x00f0    +0x00f0    } | .QueryContextAttributesExW
        _m026 query_credentials_attributes_ex_w_t            query_credentials_attributes_ex_w;  //{ +0x00f8    +0x00f8    +0x00f8    +0x00f8    } | .QueryCredentialsAttributesExW
                                                                                               
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                      
        //                                                                                     
        _m027 change_password_fn_w_t                         change_account_password_w;          //{ +0x00e8    +0x00e8    +0x00e8    } | .ChangeAccountPasswordW
                                                                                               
        SDK_NONVOL_PROPERTIES( "_SECURITY_FUNCTION_TABLE_W.$", 0x100, true, 0x3badb8c708156afc );                                  
        SDK_FIXED_SIZE( function_table_w_t, 0x100 );                                           
    };                                                                                         
};
#include "magic/function_table_w_t.end.hpp"
SDK_VERIFY( struct sec::function_table_w_t, 0x100 );
