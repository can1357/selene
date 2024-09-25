#pragma once
#include <sdkgen/support_library.hpp>
#include "net_buffer_data_length_t.hpp"

namespace nt { struct mdl_t; }

#include "magic/net_buffer_data_t.start.hpp"
namespace ndis
{
    struct net_buffer_t;

    // [struct _NET_BUFFER_DATA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct net_buffer_data_t                                         
    {                                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                                           
        _m00 struct ndis::net_buffer_t*           next;                //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Next
        _m01 struct nt::mdl_t*                    current_mdl;         //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .CurrentMdl
        _m02 uint32_t                             current_mdl_offset;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .CurrentMdlOffset
        _m03 union ndis::net_buffer_data_length_t nb_data_length;      //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .NbDataLength
        _m04 struct nt::mdl_t*                    mdl_chain;           //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .MdlChain
        _m05 uint32_t                             data_offset;         //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .DataOffset
                                                                     
        SDK_MAGIC_PROPERTIES( "_NET_BUFFER_DATA.$", 0x30, true, 0x15728b399c129ddb );                   
        SDK_FIXED_SIZE( net_buffer_data_t, 0x30 );                   
    };                                                               
};
#include "magic/net_buffer_data_t.end.hpp"
SDK_VERIFY( struct ndis::net_buffer_data_t, 0x30 );
