#pragma once
#include <sdkgen/support_library.hpp>
#include "../clfs/node_id_t.hpp"

namespace nt { struct file_object_t; }

#include "magic/scan_context_t.start.hpp"
namespace cls
{
    struct container_information_t;

    // [struct _CLS_SCAN_CONTEXT]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct scan_context_t                                               
    {                                                                   
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                                              
        _m00 struct clfs::node_id_t               cid_node;               //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .cidNode
        _m01 struct nt::file_object_t*            plfo_log;               //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .plfoLog
        _m02 uint32_t                             c_index;                //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .cIndex
        _m03 uint32_t                             c_containers;           //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .cContainers
        _m04 uint32_t                             c_containers_returned;  //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .cContainersReturned
        _m05 uint8_t                              e_scan_mode;            //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .eScanMode
        _m06 struct cls::container_information_t* pinfo_container;        //{ +0x0030    +0x0030    +0x0030    +0x0030    +0x0030    } | .pinfoContainer
                                                                        
        SDK_NONVOL_PROPERTIES( "_CLS_SCAN_CONTEXT.$", 0x38, true, 0x964203b450f70de1 );                      
        SDK_FIXED_SIZE( scan_context_t, 0x38 );                         
    };                                                                  
};
#include "magic/scan_context_t.end.hpp"
SDK_VERIFY( struct cls::scan_context_t, 0x38 );
