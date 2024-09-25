#pragma once
#include <sdkgen/support_library.hpp>
#include "../rtl/dynamic_hash_table_entry_t.hpp"

#include "magic/lowbox_handles_entry_t.start.hpp"
namespace sep
{
    // [struct _SEP_LOWBOX_HANDLES_ENTRY]
    // => Windows 10 v1607
    //
    struct lowbox_handles_entry_t                                   
    {                                                               
        // Windows 10 v1607                                         
        //                                                          
        _m00 struct rtl::dynamic_hash_table_entry_t hash_entry;       //{ +0x0000    } | .HashEntry
        _m01 int64_t                                reference_count;  //{ +0x0018    } | .ReferenceCount
        _m02 void*                                  package_sid;      //{ +0x0020    } | .PackageSid
        _m03 uint32_t                               handle_count;     //{ +0x0028    } | .HandleCount
        _m04 void**                                 handles;          //{ +0x0030    } | .Handles
                                                                    
        SDK_MAGIC_PROPERTIES( "_SEP_LOWBOX_HANDLES_ENTRY.$", 0x0, false, 0xc088fd0345b1fe8b );                
        SDK_FIXED_SIZE( lowbox_handles_entry_t, 0x38 );                
    };                                                              
};
#include "magic/lowbox_handles_entry_t.end.hpp"
SDK_VERIFY( struct sep::lowbox_handles_entry_t, 0x38 );
