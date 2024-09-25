#pragma once
#include <sdkgen/support_library.hpp>
#include "flt_mutex_list_head_t.hpp"

#include "magic/port_ccb_t.start.hpp"
namespace fltmgr
{
    struct flt_port_object_t;

    // [struct _PORT_CCB]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct port_ccb_t                                               
    {                                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                                          
        _m00 struct fltmgr::flt_port_object_t*    port;               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Port
        _m01 struct fltmgr::flt_mutex_list_head_t reply_waiter_list;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ReplyWaiterList
                                                                    
        SDK_MAGIC_PROPERTIES( "_PORT_CCB.$", 0x58, true, 0x1e0ac4560ee20e70 );                  
        SDK_FIXED_SIZE( port_ccb_t, 0x58 );                         
    };                                                              
};
#include "magic/port_ccb_t.end.hpp"
SDK_VERIFY( struct fltmgr::port_ccb_t, 0x58 );
