#pragma once
#include <sdkgen/support_library.hpp>
#include "../rtl/balanced_node_t.hpp"

#include "magic/mc_be_page_node_t.start.hpp"
namespace iop
{
    // [struct _IOP_MC_BE_PAGE_NODE]
    // => Windows 11
    //
    struct mc_be_page_node_t                        
    {                                               
        // Windows 11                               
        //                                          
        _m00 struct rtl::balanced_node_t node;        //{ +0x0000    } | .Node
        _m01 uint32_t                    page_index;  //{ +0x0018    } | .PageIndex
                                                    
        SDK_MAGIC_PROPERTIES( "_IOP_MC_BE_PAGE_NODE.$", 0x0, false, 0xbe5dd26feee5541 );           
        SDK_FIXED_SIZE( mc_be_page_node_t, 0x20 );           
    };                                              
};
#include "magic/mc_be_page_node_t.end.hpp"
SDK_VERIFY( struct iop::mc_be_page_node_t, 0x20 );
