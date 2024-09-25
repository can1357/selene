#pragma once
#include <sdkgen/support_library.hpp>
#include "cluster_range_t.hpp"
#include "storage_reserve_id_t.hpp"
#include "file_reference_range_t.hpp"
#include "query_file_layout_filter_type_t.hpp"

#include "magic/query_file_layout_input_t.start.hpp"
namespace win
{
    // [struct _QUERY_FILE_LAYOUT_INPUT]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct query_file_layout_input_t                                                                    
    {                                                                                                   
        union u0_filter_t                                                                               
        {                                                                                               
            using file_reference_ranges_t = sdk::array<struct win::file_reference_range_t, 1>;                                         
                                                                                                        
            // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                         
            //                                                                                          
            _m03 sdk::array<struct win::cluster_range_t, 1>    cluster_ranges;                            //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .ClusterRanges
            _m04 file_reference_ranges_t                       file_reference_ranges;                     //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .FileReferenceRanges
                                                                                                        
            // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                                         
            //                                                                                          
            _m05 sdk::array<enum win::storage_reserve_id_t, 1> storage_reserve_ids;                       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .StorageReserveIds
                                                                                                        
            SDK_NONVOL_PROPERTIES( "_QUERY_FILE_LAYOUT_INPUT.Filter.$", 0x10, true, 0x700416873a9d9db2 );                                         
            SDK_FIXED_SIZE( u0_filter_t, 0x10 );                                                        
        };                                                                                              
                                                                                                        
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                                                              
        _m00 uint32_t                                                                number_of_pairs;     //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .NumberOfPairs
        _m01 uint32_t                                                                flags;               //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Flags
        _m02 enum win::query_file_layout_filter_type_t                               filter_type;         //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .FilterType
        _m06 u0_filter_t                                                             filter;              //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .Filter
                                                                                                        
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                                       
        //                                                                                              
        _m07 uint32_t                                                                filter_entry_count;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .FilterEntryCount
                                                                                                        
        SDK_NONVOL_PROPERTIES( "_QUERY_FILE_LAYOUT_INPUT.$", 0x20, true, 0xcc0b7b6fe4e510a2 );                   
        SDK_FIXED_SIZE( query_file_layout_input_t, 0x20 );                                              
    };                                                                                                  
};
#include "magic/query_file_layout_input_t.end.hpp"
SDK_VERIFY( union win::query_file_layout_input_t::u0_filter_t, 0x10 );
SDK_VERIFY( struct win::query_file_layout_input_t, 0x20 );
