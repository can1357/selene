#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/user_marshal_routine_quadruple_t.start.hpp"
namespace win
{
    // [struct _USER_MARSHAL_ROUTINE_QUADRUPLE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct user_marshal_routine_quadruple_t                         
    {                                                               
        using user_marshal_sizing_routine_t = sdk::function<uint32_t(uint32_t*, uint32_t, void*)>*;                
        using pfn_marshall_t =                sdk::function<uint8_t*(uint32_t*, uint8_t*, void*)>*;                
        using pfn_unmarshall_t =              sdk::function<uint8_t*(uint32_t*, uint8_t*, void*)>*;                
                                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                                          
        _m00 user_marshal_sizing_routine_t          pfn_buffer_size;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .pfnBufferSize
        _m01 pfn_marshall_t                         pfn_marshall;     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pfnMarshall
        _m02 pfn_unmarshall_t                       pfn_unmarshall;   //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .pfnUnmarshall
        _m03 sdk::function<void(uint32_t*, void*)>* pfn_free;         //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .pfnFree
                                                                    
        SDK_MAGIC_PROPERTIES( "_USER_MARSHAL_ROUTINE_QUADRUPLE.$", 0x20, true, 0xe78ac7e1210351eb );                
        SDK_FIXED_SIZE( user_marshal_routine_quadruple_t, 0x20 );                
    };                                                              
};
#include "magic/user_marshal_routine_quadruple_t.end.hpp"
SDK_VERIFY( struct win::user_marshal_routine_quadruple_t, 0x20 );
