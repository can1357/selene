#pragma once
#include <sdkgen/support_library.hpp>
#include "../ex/rundown_ref_t.hpp"
#include "../rtl/balanced_node_t.hpp"

#include "magic/io_control_entry_t.start.hpp"
namespace ps
{
    // [struct _PS_IO_CONTROL_ENTRY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct io_control_entry_t                                      
    {                                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                          
        //                                                         
        _m00 struct rtl::balanced_node_t volume_tree_node;           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .VolumeTreeNode
        _m01 nt::list_entry_t            free_list_entry;            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .FreeListEntry
        _m02 uint64_t                    reserved_for_parent_value;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ReservedForParentValue
        _m03 uint64_t                    volume_key;                 //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .VolumeKey
        _m04 struct ex::rundown_ref_t    rundown;                    //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .Rundown
        _m05 void*                       io_control;                 //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .IoControl
        _m06 void*                       volume_io_attribution;      //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .VolumeIoAttribution
                                                                   
        SDK_MAGIC_PROPERTIES( "_PS_IO_CONTROL_ENTRY.$", 0x38, true, 0xdad176218125e46a );                          
        SDK_FIXED_SIZE( io_control_entry_t, 0x38 );                          
    };                                                             
};
#include "magic/io_control_entry_t.end.hpp"
SDK_VERIFY( struct ps::io_control_entry_t, 0x38 );
