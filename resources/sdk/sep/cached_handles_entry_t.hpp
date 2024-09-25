#pragma once
#include <sdkgen/support_library.hpp>
#include "../rtl/dynamic_hash_table_entry_t.hpp"
#include "cached_handles_entry_descriptor_t.hpp"

#include "magic/cached_handles_entry_t.start.hpp"
namespace sep
{
    // [struct _SEP_CACHED_HANDLES_ENTRY]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cached_handles_entry_t                                           
    {                                                                       
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                                                  
        _m00 struct rtl::dynamic_hash_table_entry_t        hash_entry;        //{ +0x0000    +0x0000    +0x0000    } | .HashEntry
        _m01 int64_t                                       reference_count;   //{ +0x0018    +0x0018    +0x0018    } | .ReferenceCount
        _m02 struct sep::cached_handles_entry_descriptor_t entry_descriptor;  //{ +0x0020    +0x0020    +0x0020    } | .EntryDescriptor
        _m03 uint32_t                                      handle_count;      //{ +0x0038    +0x0038    +0x0038    } | .HandleCount
        _m04 void**                                        handles;           //{ +0x0040    +0x0040    +0x0040    } | .Handles
                                                                            
        SDK_MAGIC_PROPERTIES( "_SEP_CACHED_HANDLES_ENTRY.$", 0x48, true, 0x7f7b72df452e626d );                 
        SDK_FIXED_SIZE( cached_handles_entry_t, 0x48 );                     
    };                                                                      
};
#include "magic/cached_handles_entry_t.end.hpp"
SDK_VERIFY( struct sep::cached_handles_entry_t, 0x48 );
