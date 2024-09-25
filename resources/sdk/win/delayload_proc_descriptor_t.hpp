#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/delayload_proc_descriptor_t.start.hpp"
namespace win
{
    // [struct _DELAYLOAD_PROC_DESCRIPTOR]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct delayload_proc_descriptor_t                        
    {                                                         
        union u0_description_t                                
        {                                                     
            // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                 
            //                                                
            _m01 const char* name;                              //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Name
            _m02 uint32_t    ordinal;                           //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Ordinal
                                                              
            SDK_NONVOL_PROPERTIES( "_DELAYLOAD_PROC_DESCRIPTOR.Description.$", 0x8, true, 0x42e391c84eae42ff );                                 
            SDK_FIXED_SIZE( u0_description_t, 0x8 );                                 
        };                                                    
                                                              
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                                    
        _m00 uint32_t                import_described_by_name;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .ImportDescribedByName
        _m03 u0_description_t        description;               //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Description
                                                              
        SDK_NONVOL_PROPERTIES( "_DELAYLOAD_PROC_DESCRIPTOR.$", 0x10, true, 0xe5c7cf304afbb644 );                         
        SDK_FIXED_SIZE( delayload_proc_descriptor_t, 0x10 );                         
    };                                                        
};
#include "magic/delayload_proc_descriptor_t.end.hpp"
SDK_VERIFY( union win::delayload_proc_descriptor_t::u0_description_t, 0x8 );
SDK_VERIFY( struct win::delayload_proc_descriptor_t, 0x10 );
