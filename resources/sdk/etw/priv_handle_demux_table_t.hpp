#pragma once
#include <sdkgen/support_library.hpp>
#include "../rtl/rb_tree_t.hpp"
#include "../ex/push_lock_t.hpp"

#include "magic/priv_handle_demux_table_t.start.hpp"
namespace etw
{
    // [struct _ETW_PRIV_HANDLE_DEMUX_TABLE]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct priv_handle_demux_table_t                
    {                                               
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                          
        _m00 struct rtl::rb_tree_t  tree;             //{ +0x0000    +0x0000    +0x0000    } | .Tree
        _m01 struct ex::push_lock_t lock;             //{ +0x0010    +0x0010    +0x0010    } | .Lock
        _m02 uint16_t               sequence_number;  //{ +0x0018    +0x0018    +0x0018    } | .SequenceNumber
                                                    
        SDK_MAGIC_PROPERTIES( "_ETW_PRIV_HANDLE_DEMUX_TABLE.$", 0x20, true, 0x45368459c5bcee92 );                
        SDK_FIXED_SIZE( priv_handle_demux_table_t, 0x20 );                
    };                                              
};
#include "magic/priv_handle_demux_table_t.end.hpp"
SDK_VERIFY( struct etw::priv_handle_demux_table_t, 0x20 );
