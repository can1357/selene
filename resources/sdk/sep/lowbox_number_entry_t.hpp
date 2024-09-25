#pragma once
#include <sdkgen/support_library.hpp>
#include "../rtl/dynamic_hash_table_entry_t.hpp"

#include "magic/lowbox_number_entry_t.start.hpp"
namespace sep
{
    // [struct _SEP_LOWBOX_NUMBER_ENTRY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct lowbox_number_entry_t                                    
    {                                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                                          
        _m00 struct rtl::dynamic_hash_table_entry_t hash_entry;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .HashEntry
        _m01 int64_t                                reference_count;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .ReferenceCount
        _m02 void*                                  package_sid;      //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .PackageSid
        _m03 uint32_t                               lowbox_number;    //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .LowboxNumber
        _m04 void*                                  atom_table;       //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .AtomTable
                                                                    
        SDK_MAGIC_PROPERTIES( "_SEP_LOWBOX_NUMBER_ENTRY.$", 0x38, true, 0x452fbe5a1b8953de );                
        SDK_FIXED_SIZE( lowbox_number_entry_t, 0x38 );                
    };                                                              
};
#include "magic/lowbox_number_entry_t.end.hpp"
SDK_VERIFY( struct sep::lowbox_number_entry_t, 0x38 );
