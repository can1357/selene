#pragma once
#include <sdkgen/support_library.hpp>
#include "kevent_t.hpp"

#include "magic/palpc_port_reference_wait_block_t.start.hpp"
namespace nt
{
    // [struct _PALPC_PORT_REFERENCE_WAIT_BLOCK]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct palpc_port_reference_wait_block_t                
    {                                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                           
        //                                                  
        _m00 struct nt::kevent_t desired_reference_no_event;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .DesiredReferenceNoEvent
        _m01 int32_t             desired_reference_no;        //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .DesiredReferenceNo
                                                            
        SDK_MAGIC_PROPERTIES( "_PALPC_PORT_REFERENCE_WAIT_BLOCK.$", 0x20, true, 0x5f857ebb97b318d3 );                           
        SDK_FIXED_SIZE( palpc_port_reference_wait_block_t, 0x20 );                           
    };                                                      
};
#include "magic/palpc_port_reference_wait_block_t.end.hpp"
SDK_VERIFY( struct nt::palpc_port_reference_wait_block_t, 0x20 );
