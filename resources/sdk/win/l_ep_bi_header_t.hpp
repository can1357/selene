#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/l_ep_bi_header_t.start.hpp"
namespace win
{
    // [struct _LEpBI_HEADER]
    // => Windows 11
    //
    struct l_ep_bi_header_t                   
    {                                         
        // Windows 11                         
        //                                    
        _m00 uint32_t                dw_sig;    //{ +0x0000    } | .dwSig
        _m01 sdk::array<uint8_t, 20> build_id;  //{ +0x0004    } | .buildId
                                              
        SDK_MAGIC_PROPERTIES( "_LEpBI_HEADER.$", 0x0, false, 0x6c42fe3a3f17a040 );         
        SDK_FIXED_SIZE( l_ep_bi_header_t, 0x18 );         
    };                                        
};
#include "magic/l_ep_bi_header_t.end.hpp"
SDK_VERIFY( struct win::l_ep_bi_header_t, 0x18 );
