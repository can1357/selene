#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/csv_set_volume_id_t.start.hpp"
namespace win
{
    // [struct _CSV_SET_VOLUME_ID]
    // => Windows 11
    //
    struct csv_set_volume_id_t           
    {                                    
        // Windows 11                    
        //                               
        _m00 struct nt::guid_t volume_id;  //{ +0x0000    } | .VolumeId
                                         
        SDK_MAGIC_PROPERTIES( "_CSV_SET_VOLUME_ID.$", 0x0, false, 0xfa60a5fadf7e2dd5 );          
        SDK_FIXED_SIZE( csv_set_volume_id_t, 0x10 );          
    };                                   
};
#include "magic/csv_set_volume_id_t.end.hpp"
SDK_VERIFY( struct win::csv_set_volume_id_t, 0x10 );
