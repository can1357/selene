#pragma once
#include <sdkgen/support_library.hpp>
#include "cached_handles_entry_type_t.hpp"

#include "magic/cached_handles_entry_descriptor_t.start.hpp"
namespace sep
{
    // [struct _SEP_CACHED_HANDLES_ENTRY_DESCRIPTOR]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cached_handles_entry_descriptor_t                        
    {                                                               
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                                          
        _m00 enum sep::cached_handles_entry_type_t descriptor_type;   //{ +0x0000    +0x0000    +0x0000    } | .DescriptorType
        _m01 void*                                 package_sid;       //{ +0x0008    +0x0008    +0x0008    } | .PackageSid
        _m02 nt::unicode_view                      isolation_prefix;  //{ +0x0008    +0x0008    +0x0008    } | .IsolationPrefix
                                                                    
        SDK_MAGIC_PROPERTIES( "_SEP_CACHED_HANDLES_ENTRY_DESCRIPTOR.$", 0x18, true, 0x7665d52a709dae45 );                 
        SDK_FIXED_SIZE( cached_handles_entry_descriptor_t, 0x18 );                 
    };                                                              
};
#include "magic/cached_handles_entry_descriptor_t.end.hpp"
SDK_VERIFY( struct sep::cached_handles_entry_descriptor_t, 0x18 );
