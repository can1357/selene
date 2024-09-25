#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/function_table_a_t.start.hpp"
namespace sec
{
    struct buffer_t;
    struct handle_t;
    struct pkg_info_a_t;
    struct buffer_desc_t;

    // [struct _SECURITY_FUNCTION_TABLE_A]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct function_table_a_t                                                                  
    {                                                                                          
        using enumerate_security_packages_fn_a_t =  sdk::function<int32_t(uint32_t*, struct sec::pkg_info_a_t**)>*;                                  
        using query_credentials_attributes_a_t =    sdk::function<int32_t(struct sec::handle_t*, uint32_t, void*)>*;                                  
        using acquire_credentials_handle_fn_a_t =   sdk::function<int32_t(char*, char*, uint32_t, void*, void*, sdk::function<void(void*, void*, uint32_t, void**, int32_t*)>*, void*, struct sec::handle_t*, int64_t*)>*;                                  
        using initialize_security_context_fn_a_t =  sdk::function<int32_t(struct sec::handle_t*, struct sec::handle_t*, char*, uint32_t, uint32_t, uint32_t, struct sec::buffer_desc_t*, uint32_t, struct sec::handle_t*, struct sec::buffer_desc_t*, uint32_t*, int64_t*)>*;                                  
        using accept_security_context_fn_t =        sdk::function<int32_t(struct sec::handle_t*, struct sec::handle_t*, struct sec::buffer_desc_t*, uint32_t, uint32_t, struct sec::handle_t*, struct sec::buffer_desc_t*, uint32_t*, int64_t*)>*;                                  
        using complete_auth_token_t =               sdk::function<int32_t(struct sec::handle_t*, struct sec::buffer_desc_t*)>*;                                  
        using apply_control_token_t =               sdk::function<int32_t(struct sec::handle_t*, struct sec::buffer_desc_t*)>*;                                  
        using query_context_attributes_a_t =        sdk::function<int32_t(struct sec::handle_t*, uint32_t, void*)>*;                                  
        using make_signature_t =                    sdk::function<int32_t(struct sec::handle_t*, uint32_t, struct sec::buffer_desc_t*, uint32_t)>*;                                  
        using verify_signature_t =                  sdk::function<int32_t(struct sec::handle_t*, struct sec::buffer_desc_t*, uint32_t, uint32_t*)>*;                                  
        using query_security_package_info_fn_a_t =  sdk::function<int32_t(char*, struct sec::pkg_info_a_t**)>*;                                  
        using export_security_context_fn_t =        sdk::function<int32_t(struct sec::handle_t*, uint32_t, struct sec::buffer_t*, void**)>*;                                  
        using import_security_context_fn_a_t =      sdk::function<int32_t(char*, struct sec::buffer_t*, void*, struct sec::handle_t*)>*;                                  
        using add_credentials_fn_a_t =              sdk::function<int32_t(struct sec::handle_t*, char*, char*, uint32_t, void*, sdk::function<void(void*, void*, uint32_t, void**, int32_t*)>*, void*, int64_t*)>*;                                  
        using query_security_context_token_fn_t =   sdk::function<int32_t(struct sec::handle_t*, void**)>*;                                  
        using encrypt_message_t =                   sdk::function<int32_t(struct sec::handle_t*, uint32_t, struct sec::buffer_desc_t*, uint32_t)>*;                                  
        using decrypt_message_t =                   sdk::function<int32_t(struct sec::handle_t*, struct sec::buffer_desc_t*, uint32_t, uint32_t*)>*;                                  
        using set_context_attributes_a_t =          sdk::function<int32_t(struct sec::handle_t*, uint32_t, void*, uint32_t)>*;                                  
        using set_credentials_attributes_a_t =      sdk::function<int32_t(struct sec::handle_t*, uint32_t, void*, uint32_t)>*;                                  
        using change_password_fn_a_t =              sdk::function<int32_t(char*, char*, char*, char*, char*, uint8_t, uint32_t, struct sec::buffer_desc_t*)>*;                                  
        using query_context_attributes_ex_a_t =     sdk::function<int32_t(struct sec::handle_t*, uint32_t, void*, uint32_t)>*;                                  
        using query_credentials_attributes_ex_a_t = sdk::function<int32_t(struct sec::handle_t*, uint32_t, void*, uint32_t)>*;                                  
                                                                                               
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                      
        //                                                                                     
        _m000 uint32_t                                       dw_version;                         //{ +0x0000    +0x0000    +0x0000    } | .dwVersion
        _m001 enumerate_security_packages_fn_a_t             enumerate_security_packages_a;      //{ +0x0008    +0x0008    +0x0008    } | .EnumerateSecurityPackagesA
        _m002 query_credentials_attributes_a_t               query_credentials_attributes_a;     //{ +0x0010    +0x0010    +0x0010    } | .QueryCredentialsAttributesA
        _m003 acquire_credentials_handle_fn_a_t              acquire_credentials_handle_a;       //{ +0x0018    +0x0018    +0x0018    } | .AcquireCredentialsHandleA
        _m004 sdk::function<int32_t(struct sec::handle_t*)>* free_credentials_handle;            //{ +0x0020    +0x0020    +0x0020    } | .FreeCredentialsHandle
        _m005 initialize_security_context_fn_a_t             initialize_security_context_a;      //{ +0x0030    +0x0030    +0x0030    } | .InitializeSecurityContextA
        _m006 accept_security_context_fn_t                   accept_security_context;            //{ +0x0038    +0x0038    +0x0038    } | .AcceptSecurityContext
        _m007 complete_auth_token_t                          complete_auth_token;                //{ +0x0040    +0x0040    +0x0040    } | .CompleteAuthToken
        _m008 sdk::function<int32_t(struct sec::handle_t*)>* delete_security_context;            //{ +0x0048    +0x0048    +0x0048    } | .DeleteSecurityContext
        _m009 apply_control_token_t                          apply_control_token;                //{ +0x0050    +0x0050    +0x0050    } | .ApplyControlToken
        _m010 query_context_attributes_a_t                   query_context_attributes_a;         //{ +0x0058    +0x0058    +0x0058    } | .QueryContextAttributesA
        _m011 sdk::function<int32_t(struct sec::handle_t*)>* impersonate_security_context;       //{ +0x0060    +0x0060    +0x0060    } | .ImpersonateSecurityContext
        _m012 sdk::function<int32_t(struct sec::handle_t*)>* revert_security_context;            //{ +0x0068    +0x0068    +0x0068    } | .RevertSecurityContext
        _m013 make_signature_t                               make_signature;                     //{ +0x0070    +0x0070    +0x0070    } | .MakeSignature
        _m014 verify_signature_t                             verify_signature;                   //{ +0x0078    +0x0078    +0x0078    } | .VerifySignature
        _m015 sdk::function<int32_t(void*)>*                 free_context_buffer;                //{ +0x0080    +0x0080    +0x0080    } | .FreeContextBuffer
        _m016 query_security_package_info_fn_a_t             query_security_package_info_a;      //{ +0x0088    +0x0088    +0x0088    } | .QuerySecurityPackageInfoA
        _m017 export_security_context_fn_t                   export_security_context;            //{ +0x00a0    +0x00a0    +0x00a0    } | .ExportSecurityContext
        _m018 import_security_context_fn_a_t                 import_security_context_a;          //{ +0x00a8    +0x00a8    +0x00a8    } | .ImportSecurityContextA
        _m019 add_credentials_fn_a_t                         add_credentials_a;                  //{ +0x00b0    +0x00b0    +0x00b0    } | .AddCredentialsA
        _m020 query_security_context_token_fn_t              query_security_context_token;       //{ +0x00c0    +0x00c0    +0x00c0    } | .QuerySecurityContextToken
        _m021 encrypt_message_t                              encrypt_message;                    //{ +0x00c8    +0x00c8    +0x00c8    } | .EncryptMessage
        _m022 decrypt_message_t                              decrypt_message;                    //{ +0x00d0    +0x00d0    +0x00d0    } | .DecryptMessage
        _m023 set_context_attributes_a_t                     set_context_attributes_a;           //{ +0x00d8    +0x00d8    +0x00d8    } | .SetContextAttributesA
        _m024 set_credentials_attributes_a_t                 set_credentials_attributes_a;       //{ +0x00e0    +0x00e0    +0x00e0    } | .SetCredentialsAttributesA
        _m025 change_password_fn_a_t                         change_account_password_a;          //{ +0x00e8    +0x00e8    +0x00e8    } | .ChangeAccountPasswordA
        _m026 query_context_attributes_ex_a_t                query_context_attributes_ex_a;      //{ +0x00f0    +0x00f0    +0x00f0    } | .QueryContextAttributesExA
        _m027 query_credentials_attributes_ex_a_t            query_credentials_attributes_ex_a;  //{ +0x00f8    +0x00f8    +0x00f8    } | .QueryCredentialsAttributesExA
                                                                                               
        SDK_MAGIC_PROPERTIES( "_SECURITY_FUNCTION_TABLE_A.$", 0x100, true, 0x65870527bc4b394c );                                  
        SDK_FIXED_SIZE( function_table_a_t, 0x100 );                                           
    };                                                                                         
};
#include "magic/function_table_a_t.end.hpp"
SDK_VERIFY( struct sec::function_table_a_t, 0x100 );
