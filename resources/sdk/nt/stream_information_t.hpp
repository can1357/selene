#pragma once
#include <sdkgen/support_library.hpp>
#include "ea_t.hpp"
#include "reparse_t.hpp"
#include "data_stream_t.hpp"
#include "desired_storage_class_t.hpp"

#include "magic/stream_information_t.start.hpp"
namespace nt
{
    // [union _StreamInformation]
    // => WDK 10 (NV)
    //
    union stream_information_t                                        
    {                                                                 
        // WDK 10                                                     
        //                                                            
        _m00 struct nt::desired_storage_class_t desired_storage_class;  //{ +0x0000    } | .DesiredStorageClass
        _m01 struct nt::data_stream_t           data_stream;            //{ +0x0000    } | .DataStream
        _m02 struct nt::reparse_t               reparse;                //{ +0x0000    } | .Reparse
        _m03 struct nt::ea_t                    ea;                     //{ +0x0000    } | .Ea
                                                                      
        SDK_NONVOL_PROPERTIES( "_StreamInformation.$", 0x0, false, 0xbc2b0ce6451be763 );                      
        SDK_FIXED_SIZE( stream_information_t, 0x10 );                      
    };                                                                
};
#include "magic/stream_information_t.end.hpp"
SDK_VERIFY( union nt::stream_information_t, 0x10 );
