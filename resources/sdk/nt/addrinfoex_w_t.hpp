#pragma once
#include <sdkgen/support_library.hpp>

namespace ndis { struct sockaddr_t; }

#include "magic/addrinfoex_w_t.start.hpp"
namespace nt
{
    struct guid_t;
    struct addrinfoex_w_t;

    // [struct addrinfoexW]
    // => WDK 10 (NV)
    //
    struct addrinfoex_w_t                            
    {                                                
        // WDK 10                                    
        //                                           
        _m00 int32_t                    ai_flags;      //{ +0x0000    } | .ai_flags
        _m01 int32_t                    ai_family;     //{ +0x0004    } | .ai_family
        _m02 int32_t                    ai_socktype;   //{ +0x0008    } | .ai_socktype
        _m03 int32_t                    ai_protocol;   //{ +0x000c    } | .ai_protocol
        _m04 uint64_t                   ai_addrlen;    //{ +0x0010    } | .ai_addrlen
        _m05 wchar_t*                   ai_canonname;  //{ +0x0018    } | .ai_canonname
        _m06 struct ndis::sockaddr_t*   ai_addr;       //{ +0x0020    } | .ai_addr
        _m07 void*                      ai_blob;       //{ +0x0028    } | .ai_blob
        _m08 uint64_t                   ai_bloblen;    //{ +0x0030    } | .ai_bloblen
        _m09 struct nt::guid_t*         ai_provider;   //{ +0x0038    } | .ai_provider
        _m10 struct nt::addrinfoex_w_t* ai_next;       //{ +0x0040    } | .ai_next
                                                     
        SDK_NONVOL_PROPERTIES( "addrinfoexW.$", 0x0, false, 0x809428a50cca0f7 );             
        SDK_FIXED_SIZE( addrinfoex_w_t, 0x48 );             
    };                                               
};
#include "magic/addrinfoex_w_t.end.hpp"
SDK_VERIFY( struct nt::addrinfoex_w_t, 0x48 );
