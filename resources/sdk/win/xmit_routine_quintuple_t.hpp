#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/xmit_routine_quintuple_t.start.hpp"
namespace win
{
    struct midl_stub_message_t;

    // [struct _XMIT_ROUTINE_QUINTUPLE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct xmit_routine_quintuple_t                             
    {                                                           
        using pfn_translate_to_xmit_t =   sdk::function<void(struct win::midl_stub_message_t*)>*;                        
        using pfn_translate_from_xmit_t = sdk::function<void(struct win::midl_stub_message_t*)>*;                        
        using pfn_free_xmit_t =           sdk::function<void(struct win::midl_stub_message_t*)>*;                        
        using pfn_free_inst_t =           sdk::function<void(struct win::midl_stub_message_t*)>*;                        
                                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                        
        //                                                      
        _m00 pfn_translate_to_xmit_t    pfn_translate_to_xmit;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .pfnTranslateToXmit
        _m01 pfn_translate_from_xmit_t  pfn_translate_from_xmit;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pfnTranslateFromXmit
        _m02 pfn_free_xmit_t            pfn_free_xmit;            //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .pfnFreeXmit
        _m03 pfn_free_inst_t            pfn_free_inst;            //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .pfnFreeInst
                                                                
        SDK_MAGIC_PROPERTIES( "_XMIT_ROUTINE_QUINTUPLE.$", 0x20, true, 0x7b7745cbc01d9857 );                        
        SDK_FIXED_SIZE( xmit_routine_quintuple_t, 0x20 );                        
    };                                                          
};
#include "magic/xmit_routine_quintuple_t.end.hpp"
SDK_VERIFY( struct win::xmit_routine_quintuple_t, 0x20 );
