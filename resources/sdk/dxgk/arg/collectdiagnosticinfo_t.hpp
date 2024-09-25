#pragma once
#include <sdkgen/support_library.hpp>
#include "../diagnosticinfo_type_t.hpp"

#include "magic/collectdiagnosticinfo_t.start.hpp"
namespace dxgk::arg
{
    // [struct _DXGKARG_COLLECTDIAGNOSTICINFO]
    // => WDK 10 (NV)
    //
    struct collectdiagnosticinfo_t                               
    {                                                            
        // WDK 10                                                
        //                                                       
        _m00 void*                            h_adapter;           //{ +0x0000    } | .hAdapter
        _m01 enum dxgk::diagnosticinfo_type_t type;                //{ +0x0008    } | .Type
        _m02 sdk::array<char, 64>             bucketing_string;    //{ +0x000c    } | .BucketingString
        _m03 sdk::array<char, 128>            description_string;  //{ +0x004c    } | .DescriptionString
        _m04 void*                            p_reserved;          //{ +0x00d0    } | .pReserved
        _m05 uint32_t                         buffer_size_in;      //{ +0x00d8    } | .BufferSizeIn
        _m06 uint32_t                         buffer_size_out;     //{ +0x00dc    } | .BufferSizeOut
        _m07 void*                            p_buffer;            //{ +0x00e0    } | .pBuffer
                                                                 
        SDK_NONVOL_PROPERTIES( "_DXGKARG_COLLECTDIAGNOSTICINFO.$", 0x0, false, 0x4a3e6b2f54cc2b14 );                   
        SDK_FIXED_SIZE( collectdiagnosticinfo_t, 0xe8 );                   
    };                                                           
};
#include "magic/collectdiagnosticinfo_t.end.hpp"
SDK_VERIFY( struct dxgk::arg::collectdiagnosticinfo_t, 0xe8 );
