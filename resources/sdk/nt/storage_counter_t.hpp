#pragma once
#include <sdkgen/support_library.hpp>
#include "storage_counter_type_t.hpp"

#include "magic/storage_counter_t.start.hpp"
namespace nt
{
    // [struct _STORAGE_COUNTER]
    // => WDK 10 (NV)
    //
    struct storage_counter_t                                   
    {                                                          
        union u0_value_t                                       
        {                                                      
            struct u1_manufacture_date_t                       
            {                                                  
                // WDK 10                                      
                //                                             
                _m01 uint32_t week;                              //{ +0x0000    } | .Week
                _m02 uint32_t year;                              //{ +0x0004    } | .Year
                                                               
                SDK_NONVOL_PROPERTIES( "_STORAGE_COUNTER.Value.ManufactureDate.$", 0x0, false, 0x2ee3f8081ffcf628 );                            
                SDK_FIXED_SIZE( u1_manufacture_date_t, 0x8 );                            
            };                                                 
                                                               
            // WDK 10                                          
            //                                                 
            _m03 u1_manufacture_date_t  manufacture_date;        //{ +0x0000    } | .ManufactureDate
            _m04 uint64_t               as_ulonglong;            //{ +0x0000    } | .AsUlonglong
                                                               
            SDK_NONVOL_PROPERTIES( "_STORAGE_COUNTER.Value.$", 0x0, false, 0x90ff0b87bf0c7674 );                       
            SDK_FIXED_SIZE( u0_value_t, 0x8 );                       
        };                                                     
                                                               
        // WDK 10                                              
        //                                                     
        _m00 enum nt::storage_counter_type_t             type;   //{ +0x0000    } | .Type
        _m05 u0_value_t                                  value;  //{ +0x0008    } | .Value
                                                               
        SDK_NONVOL_PROPERTIES( "_STORAGE_COUNTER.$", 0x0, false, 0x2827a9cc2f207fd9 );      
        SDK_FIXED_SIZE( storage_counter_t, 0x10 );             
    };                                                         
};
#include "magic/storage_counter_t.end.hpp"
SDK_VERIFY( struct nt::storage_counter_t::u0_value_t::u1_manufacture_date_t, 0x8 );
SDK_VERIFY( union nt::storage_counter_t::u0_value_t, 0x8 );
SDK_VERIFY( struct nt::storage_counter_t, 0x10 );
