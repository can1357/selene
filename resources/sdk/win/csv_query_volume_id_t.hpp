#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/csv_query_volume_id_t.start.hpp"
namespace win
{
    // [struct _CSV_QUERY_VOLUME_ID]
    // => Windows 11
    //
    struct csv_query_volume_id_t         
    {                                    
        // Windows 11                    
        //                               
        _m00 struct nt::guid_t volume_id;  //{ +0x0000    } | .VolumeId
                                         
        SDK_MAGIC_PROPERTIES( "_CSV_QUERY_VOLUME_ID.$", 0x0, false, 0xf61656296a1ad77e );          
        SDK_FIXED_SIZE( csv_query_volume_id_t, 0x10 );          
    };                                   
};
#include "magic/csv_query_volume_id_t.end.hpp"
SDK_VERIFY( struct win::csv_query_volume_id_t, 0x10 );
