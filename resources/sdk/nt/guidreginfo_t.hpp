#pragma once
#include <sdkgen/support_library.hpp>
#include "guid_t.hpp"

#include "magic/guidreginfo_t.start.hpp"
namespace nt
{
    // [struct GUIDREGINFO]
    // => WDK 10 (NV)
    //
    struct guidreginfo_t                      
    {                                         
        // WDK 10                             
        //                                    
        _m00 struct nt::guid_t guid;            //{ +0x0000    } | .Guid
        _m01 uint32_t          instance_count;  //{ +0x0010    } | .InstanceCount
        _m02 uint32_t          flags;           //{ +0x0014    } | .Flags
                                              
        SDK_NONVOL_PROPERTIES( "GUIDREGINFO.$", 0x0, false, 0x63101030323e4baf );               
        SDK_FIXED_SIZE( guidreginfo_t, 0x18 );               
    };                                        
};
#include "magic/guidreginfo_t.end.hpp"
SDK_VERIFY( struct nt::guidreginfo_t, 0x18 );
