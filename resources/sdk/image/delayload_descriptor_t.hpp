#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/delayload_descriptor_t.start.hpp"
namespace image
{
    // [struct _IMAGE_DELAYLOAD_DESCRIPTOR]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct delayload_descriptor_t                                            
    {                                                                        
        union u0_attributes_t                                                
        {                                                                    
            // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                   
            //                                                               
            _m00 uint32_t all_attributes;                                      //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .AllAttributes
            _m01 uint1_t  rva_based;                                           //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .RvaBased
            _m02 uint31_t reserved_attributes;                                 //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .ReservedAttributes
                                                                             
            SDK_NONVOL_PROPERTIES( "_IMAGE_DELAYLOAD_DESCRIPTOR.Attributes.$", 0x4, true, 0x9802bd6dbfa28f25 );                                                   
            SDK_FIXED_SIZE( u0_attributes_t, 0x4 );                                                   
        };                                                                   
                                                                             
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                               
        //                                                                   
        _m03 u0_attributes_t                  attributes;                      //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Attributes
        _m04 uint32_t                         dll_name_rva;                    //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .DllNameRVA
        _m05 uint32_t                         module_handle_rva;               //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .ModuleHandleRVA
        _m06 uint32_t                         import_address_table_rva;        //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .ImportAddressTableRVA
        _m07 uint32_t                         import_name_table_rva;           //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .ImportNameTableRVA
        _m08 uint32_t                         bound_import_address_table_rva;  //{ +0x0014    +0x0014    +0x0014    +0x0014    +0x0014    } | .BoundImportAddressTableRVA
        _m09 uint32_t                         unload_information_table_rva;    //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .UnloadInformationTableRVA
        _m10 uint32_t                         time_date_stamp;                 //{ +0x001c    +0x001c    +0x001c    +0x001c    +0x001c    } | .TimeDateStamp
                                                                             
        SDK_NONVOL_PROPERTIES( "_IMAGE_DELAYLOAD_DESCRIPTOR.$", 0x20, true, 0x192f28c7ab34040f );                               
        SDK_FIXED_SIZE( delayload_descriptor_t, 0x20 );                               
    };                                                                       
};
#include "magic/delayload_descriptor_t.end.hpp"
SDK_VERIFY( union image::delayload_descriptor_t::u0_attributes_t, 0x4 );
SDK_VERIFY( struct image::delayload_descriptor_t, 0x20 );
