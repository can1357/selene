#pragma once
#include <sdkgen/support_library.hpp>
#include "../rtl/balanced_node_t.hpp"

namespace nt { struct mmpfn_t; }

#include "magic/removal_requested_page_t.start.hpp"
namespace mi
{
    // [struct _MI_REMOVAL_REQUESTED_PAGE]
    // => Windows 11
    //
    struct removal_requested_page_t                
    {                                              
        // Windows 11                              
        //                                         
        _m00 struct rtl::balanced_node_t tree_node;  //{ +0x0000    } | .TreeNode
        _m01 nt::list_entry_t            link;       //{ +0x0000    } | .Link
        _m02 struct nt::mmpfn_t*         pfn;        //{ +0x0018    } | .Pfn
                                                   
        SDK_MAGIC_PROPERTIES( "_MI_REMOVAL_REQUESTED_PAGE.$", 0x0, false, 0xb3990011291b9b5d );          
        SDK_FIXED_SIZE( removal_requested_page_t, 0x20 );          
    };                                             
};
#include "magic/removal_requested_page_t.end.hpp"
SDK_VERIFY( struct mi::removal_requested_page_t, 0x20 );
