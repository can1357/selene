#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/cell_data_t.hpp"

#include "magic/cached_value_index_t.start.hpp"
namespace cm
{
    // [struct _CM_CACHED_VALUE_INDEX]
    // => Windows 10 v1607
    //
    struct cached_value_index_t                               
    {                                                         
        union u0_data_t                                       
        {                                                     
            // Windows 10 v1607                               
            //                                                
            _m01 struct nt::cell_data_t  cell_data;             //{ +0x0000    } | .CellData
            _m02 sdk::array<uint64_t, 1> list;                  //{ +0x0000    } | .List
                                                              
            SDK_MAGIC_PROPERTIES( "_CM_CACHED_VALUE_INDEX.Data.$", 0x0, false, 0x5334a73524e4c08b );                     
            SDK_FIXED_SIZE( u0_data_t, 0x50 );                     
        };                                                    
                                                              
        // Windows 10 v1607                                   
        //                                                    
        _m00 uint32_t                              cell_index;  //{ +0x0000    } | .CellIndex
        _m03 u0_data_t                             data;        //{ +0x0008    } | .Data
                                                              
        SDK_MAGIC_PROPERTIES( "_CM_CACHED_VALUE_INDEX.$", 0x0, false, 0xa832fb2895b3580b );           
        SDK_FIXED_SIZE( cached_value_index_t, 0x58 );           
    };                                                        
};
#include "magic/cached_value_index_t.end.hpp"
SDK_VERIFY( union cm::cached_value_index_t::u0_data_t, 0x50 );
SDK_VERIFY( struct cm::cached_value_index_t, 0x58 );
