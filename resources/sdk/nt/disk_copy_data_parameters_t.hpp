#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/disk_copy_data_parameters_t.start.hpp"
namespace nt
{
    // [struct _DISK_COPY_DATA_PARAMETERS]
    // => WDK 10 (NV)
    //
    struct disk_copy_data_parameters_t  
    {                                   
        // WDK 10                       
        //                              
        _m00 int64_t source_offset;       //{ +0x0000    } | .SourceOffset
        _m01 int64_t destination_offset;  //{ +0x0008    } | .DestinationOffset
        _m02 int64_t copy_length;         //{ +0x0010    } | .CopyLength
                                        
        SDK_NONVOL_PROPERTIES( "_DISK_COPY_DATA_PARAMETERS.$", 0x0, false, 0xf33710afa44136da );                   
        SDK_FIXED_SIZE( disk_copy_data_parameters_t, 0x20 );                   
    };                                  
};
#include "magic/disk_copy_data_parameters_t.end.hpp"
SDK_VERIFY( struct nt::disk_copy_data_parameters_t, 0x20 );
