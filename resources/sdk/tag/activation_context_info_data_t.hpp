#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/activation_context_info_data_t.start.hpp"
namespace tag
{
    struct m_interface_pointer_t;

    // [struct tagActivationContextInfoData]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct activation_context_info_data_t                           
    {                                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                                          
        _m00 int32_t                            client_ok;            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .clientOK
        _m01 int32_t                            b_reserved1;          //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .bReserved1
        _m02 uint32_t                           dw_reserved1;         //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .dwReserved1
        _m03 uint32_t                           dw_reserved2;         //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .dwReserved2
        _m04 struct tag::m_interface_pointer_t* p_ifd_client_ctx;     //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .pIFDClientCtx
        _m05 struct tag::m_interface_pointer_t* p_ifd_prototype_ctx;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .pIFDPrototypeCtx
                                                                    
        SDK_MAGIC_PROPERTIES( "tagActivationContextInfoData.$", 0x20, true, 0x971b205de9aba462 );                    
        SDK_FIXED_SIZE( activation_context_info_data_t, 0x20 );                    
    };                                                              
};
#include "magic/activation_context_info_data_t.end.hpp"
SDK_VERIFY( struct tag::activation_context_info_data_t, 0x20 );
