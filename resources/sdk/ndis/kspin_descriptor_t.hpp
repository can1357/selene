#pragma once
#include <sdkgen/support_library.hpp>
#include "kspin_dataflow_t.hpp"
#include "kspin_communication_t.hpp"

namespace nt { struct guid_t; }

#include "magic/kspin_descriptor_t.start.hpp"
namespace ndis
{
    union ksdataformat_t;
    struct ksidentifier_t;

    // [struct KSPIN_DESCRIPTOR]
    // => Windows 10 v1607
    //
    struct kspin_descriptor_t                                                 
    {                                                                         
        // Windows 10 v1607                                                   
        //                                                                    
        _m00 uint32_t                           interfaces_count;               //{ +0x0000    } | .InterfacesCount
        _m01 const struct ndis::ksidentifier_t* interfaces;                     //{ +0x0008    } | .Interfaces
        _m02 uint32_t                           mediums_count;                  //{ +0x0010    } | .MediumsCount
        _m03 const struct ndis::ksidentifier_t* mediums;                        //{ +0x0018    } | .Mediums
        _m04 uint32_t                           data_ranges_count;              //{ +0x0020    } | .DataRangesCount
        _m05 union ndis::ksdataformat_t const** data_ranges;                    //{ +0x0028    } | .DataRanges
        _m06 enum ndis::kspin_dataflow_t        data_flow;                      //{ +0x0030    } | .DataFlow
        _m07 enum ndis::kspin_communication_t   communication;                  //{ +0x0034    } | .Communication
        _m08 const struct nt::guid_t*           category;                       //{ +0x0038    } | .Category
        _m09 const struct nt::guid_t*           name;                           //{ +0x0040    } | .Name
        _m10 uint32_t                           constrained_data_ranges_count;  //{ +0x0048    } | .ConstrainedDataRangesCount
        _m11 union ndis::ksdataformat_t**       constrained_data_ranges;        //{ +0x0050    } | .ConstrainedDataRanges
                                                                              
        SDK_MAGIC_PROPERTIES( "KSPIN_DESCRIPTOR.$", 0x0, false, 0x72db5730b05fd6dc );                              
        SDK_FIXED_SIZE( kspin_descriptor_t, 0x58 );                              
    };                                                                        
};
#include "magic/kspin_descriptor_t.end.hpp"
SDK_VERIFY( struct ndis::kspin_descriptor_t, 0x58 );
