#pragma once
#include <sdkgen/support_library.hpp>

namespace halp { struct dma_domain_object_t; }
namespace nt   { struct mdl_t;               }

#include "magic/common_buffer_vector_t.start.hpp"
namespace dma
{
    struct common_buffer_entry_t;

    // [struct _DMA_COMMON_BUFFER_VECTOR]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct common_buffer_vector_t                                      
    {                                                                  
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                                             
        _m00 nt::list_entry_t                   list_entry;              //{ +0x0000    +0x0000    +0x0000    } | .ListEntry
        _m01 uint64_t                           size_of_entries;         //{ +0x0010    +0x0010    +0x0010    } | .SizeOfEntries
        _m02 uint32_t                           number_of_entries;       //{ +0x0018    +0x0018    +0x0018    } | .NumberOfEntries
        _m03 struct halp::dma_domain_object_t*  domain;                  //{ +0x0020    +0x0020    +0x0020    } | .Domain
        _m04 struct nt::mdl_t*                  mdl;                     //{ +0x0028    +0x0028    +0x0028    } | .Mdl
        _m05 void*                              base_address;            //{ +0x0030    +0x0030    +0x0030    } | .BaseAddress
        _m06 uint64_t                           base_logical_address;    //{ +0x0038    +0x0038    +0x0038    } | .BaseLogicalAddress
        _m07 struct dma::common_buffer_entry_t* entries;                 //{ +0x0040    +0x0040    +0x0040    } | .Entries
                                                                       
        // Windows 11                                                  
        //                                                             
        _m08 uint8_t                            logical_address_mapped;  //{ +0x0048    } | .LogicalAddressMapped
                                                                       
        SDK_MAGIC_PROPERTIES( "_DMA_COMMON_BUFFER_VECTOR.$", 0x48, true, 0xd90fa5f4d4457889 );                       
        SDK_DYNAMIC_SIZE( common_buffer_vector_t );                       
    };                                                                 
};
#include "magic/common_buffer_vector_t.end.hpp"
