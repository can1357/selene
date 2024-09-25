#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct ejob_t; }

#include "magic/foext_silo_parameters_t.start.hpp"
namespace io
{
    // [struct _IO_FOEXT_SILO_PARAMETERS]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct foext_silo_parameters_t                 
    {                                              
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                         
        _m00 uint32_t           length;              //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Length
        _m01 uint1_t            has_hard_reference;  //{ +0x0004@0  +0x0004@0  +0x0004@0  +0x0004@0  +0x0004@0  } | .HasHardReference
        _m02 uint31_t           spare_flags;         //{ +0x0004@1  +0x0004@1  +0x0004@1  +0x0004@1  +0x0004@1  } | .SpareFlags
        _m03 uint32_t           flags;               //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Flags
        _m04 struct nt::ejob_t* silo_context;        //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .SiloContext
                                                   
        SDK_NONVOL_PROPERTIES( "_IO_FOEXT_SILO_PARAMETERS.$", 0x10, true, 0x5bcea9fe9215c4d3 );                   
        SDK_FIXED_SIZE( foext_silo_parameters_t, 0x10 );                   
    };                                             
};
#include "magic/foext_silo_parameters_t.end.hpp"
SDK_VERIFY( struct io::foext_silo_parameters_t, 0x10 );
