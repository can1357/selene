#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/context_handle_element_t.start.hpp"
namespace win
{
    struct ndr_scontext_t;
    struct context_handle_element_t;
    struct ndr_context_handle_arg_desc_t;

    // [struct _CONTEXT_HANDLE_ELEMENT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct context_handle_element_t                                 
    {                                                               
        struct u0_p_context_t                                       
        {                                                           
            // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2                         
            //                                                      
            _m01 sdk::array<void*, 2> pad;                            //{ +0x0000    +0x0000    +0x0000    } | .pad
            _m02 void*                user_context;                   //{ +0x0010    +0x0010    +0x0010    } | .userContext
                                                                    
            SDK_MAGIC_PROPERTIES( "_CONTEXT_HANDLE_ELEMENT.pContext.$", 0x18, true, 0x4a3ca69007215865 );                         
            SDK_FIXED_SIZE( u0_p_context_t, 0x18 );                         
        };                                                          
                                                                    
        using p_context_t = sdk::variant<u0_p_context_t*, struct win::ndr_scontext_t*>;            
                                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                                          
        _m00 struct win::context_handle_element_t*      next;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Next
        _m03 p_context_t                                p_context;    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pContext
        _m04 struct win::ndr_context_handle_arg_desc_t* p_ctxt_desc;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .pCtxtDesc
        _m05 uint8_t*                                   key;          //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .Key
                                                                    
        SDK_MAGIC_PROPERTIES( "_CONTEXT_HANDLE_ELEMENT.$", 0x20, true, 0x10d3148943bc0602 );            
        SDK_FIXED_SIZE( context_handle_element_t, 0x20 );            
    };                                                              
};
#include "magic/context_handle_element_t.end.hpp"
SDK_VERIFY( struct win::context_handle_element_t::u0_p_context_t, 0x18 );
SDK_VERIFY( struct win::context_handle_element_t, 0x20 );
