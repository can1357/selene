#pragma once
#include <sdkgen/support_library.hpp>
#include "mfnd_physical_function_global_properties_t.hpp"

#include "magic/mfnd_child_pf_global_property_t.start.hpp"
namespace stor::port
{
    // [struct _MFND_CHILD_PF_GLOBAL_PROPERTY]
    // => Windows 11
    //
    struct mfnd_child_pf_global_property_t
    {                                     
        using property_t = struct stor::port::mfnd_physical_function_global_properties_t;         
                                          
        // Windows 11             
        //                        
        _m00 uint32_t    version;           //{ +0x0000    } | .Version
        _m01 uint32_t    size;              //{ +0x0004    } | .Size
        _m02 property_t  property;          //{ +0x0008    } | .Property
                                          
        SDK_MAGIC_PROPERTIES( "_MFND_CHILD_PF_GLOBAL_PROPERTY.$", 0x0, false, 0x4f0e9714d2dd8d70 );         
        SDK_FIXED_SIZE( mfnd_child_pf_global_property_t, 0x208 );         
    };                                    
};
#include "magic/mfnd_child_pf_global_property_t.end.hpp"
SDK_VERIFY( struct stor::port::mfnd_child_pf_global_property_t, 0x208 );
