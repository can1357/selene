#pragma once
#include <sdkgen/support_library.hpp>
#include "../rtl/balanced_node_t.hpp"

#include "magic/mminpage_support_flow_through_t.start.hpp"
namespace nt
{
    struct mmpaging_file_t;
    struct mminpage_support_t;

    // [struct _MMINPAGE_SUPPORT_FLOW_THROUGH]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct mminpage_support_flow_through_t                          
    {                                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                        
        //                                                          
        _m00 sdk::array<uint64_t, 1>        page;                     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Page
        _m01 struct nt::mminpage_support_t* initial_in_page_support;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .InitialInPageSupport
        _m02 struct nt::mmpaging_file_t*    paging_file;              //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .PagingFile
        _m03 uint64_t                       page_file_offset;         //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .PageFileOffset
        _m04 struct rtl::balanced_node_t    node;                     //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .Node
                                                                    
        SDK_MAGIC_PROPERTIES( "_MMINPAGE_SUPPORT_FLOW_THROUGH.$", 0x38, true, 0x5c163494d72ecbb );                        
        SDK_FIXED_SIZE( mminpage_support_flow_through_t, 0x38 );                        
    };                                                              
};
#include "magic/mminpage_support_flow_through_t.end.hpp"
SDK_VERIFY( struct nt::mminpage_support_flow_through_t, 0x38 );
