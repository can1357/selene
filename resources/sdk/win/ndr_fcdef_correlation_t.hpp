#pragma once
#include <sdkgen/support_library.hpp>
#include "ndr_correlation_flags_t.hpp"

#include "magic/ndr_fcdef_correlation_t.start.hpp"
namespace win
{
    // [struct _NDR_FCDEF_CORRELATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ndr_fcdef_correlation_t                          
    {                                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                                                  
        _m00 uint4_t                             type;        //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .Type
        _m01 uint4_t                             kind;        //{ +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  } | .Kind
        _m02 uint8_t                             operation;   //{ +0x0000@8  +0x0000@8  +0x0000@8  +0x0000@8  } | .Operation
        _m03 int16_t                             offset;      //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .Offset
        _m04 struct win::ndr_correlation_flags_t corr_flags;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .CorrFlags
                                                            
        SDK_MAGIC_PROPERTIES( "_NDR_FCDEF_CORRELATION.$", 0x8, true, 0x54e9c21e34020828 );           
        SDK_FIXED_SIZE( ndr_fcdef_correlation_t, 0x8 );           
    };                                                      
};
#include "magic/ndr_fcdef_correlation_t.end.hpp"
SDK_VERIFY( struct win::ndr_fcdef_correlation_t, 0x8 );
