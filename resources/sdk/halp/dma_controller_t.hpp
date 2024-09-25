#pragma once
#include <sdkgen/support_library.hpp>
#include "../dma/function_table_t.hpp"
#include "../nt/kinterrupt_mode_t.hpp"
#include "../nt/kinterrupt_polarity_t.hpp"

namespace nt { struct pohandle_t; }

#include "magic/dma_controller_t.start.hpp"
namespace halp
{
    struct dma_channel_t;

    // [struct _HALP_DMA_CONTROLLER]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct dma_controller_t                                       
    {                                                             
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                                        
        _m00 nt::list_entry_t               controllers;            //{ +0x0000    +0x0000    +0x0000    } | .Controllers
        _m01 nt::list_entry_t               adapter_list;           //{ +0x0010    +0x0010    +0x0010    } | .AdapterList
        _m02 uint32_t                       controller_id;          //{ +0x0020    +0x0020    +0x0020    } | .ControllerId
        _m03 uint32_t                       minimum_request_line;   //{ +0x0024    +0x0024    +0x0024    } | .MinimumRequestLine
        _m04 uint32_t                       maximum_request_line;   //{ +0x0028    +0x0028    +0x0028    } | .MaximumRequestLine
        _m05 uint32_t                       channel_count;          //{ +0x002c    +0x002c    +0x002c    } | .ChannelCount
        _m06 uint32_t                       scatter_gather_limit;   //{ +0x0030    +0x0030    +0x0030    } | .ScatterGatherLimit
        _m07 struct halp::dma_channel_t*    channels;               //{ +0x0038    +0x0038    +0x0038    } | .Channels
        _m08 void*                          extension_data;         //{ +0x0040    +0x0040    +0x0040    } | .ExtensionData
        _m09 uint8_t                        cache_coherent;         //{ +0x0048    +0x0048    +0x0048    } | .CacheCoherent
        _m10 uint32_t                       dma_address_width;      //{ +0x004c    +0x004c    +0x004c    } | .DmaAddressWidth
        _m11 struct dma::function_table_t   operations;             //{ +0x0050    +0x0050    +0x0050    } | .Operations
        _m12 uint32_t                       supported_port_widths;  //{ +0x00a0    +0x00a0    +0x00a0    } | .SupportedPortWidths
        _m13 uint32_t                       minimum_transfer_unit;  //{ +0x00a4    +0x00a4    +0x00a4    } | .MinimumTransferUnit
        _m14 uint64_t                       lock;                   //{ +0x00a8    +0x00a8    +0x00a8    } | .Lock
        _m15 uint8_t                        irql;                   //{ +0x00b0    +0x00b0    +0x00b0    } | .Irql
        _m16 uint8_t                        generates_interrupt;    //{ +0x00b1    +0x00b1    +0x00b1    } | .GeneratesInterrupt
        _m17 int32_t                        gsi;                    //{ +0x00b4    +0x00b4    +0x00b4    } | .Gsi
        _m18 enum nt::kinterrupt_polarity_t interrupt_polarity;     //{ +0x00b8    +0x00b8    +0x00b8    } | .InterruptPolarity
        _m19 enum nt::kinterrupt_mode_t     interrupt_mode;         //{ +0x00bc    +0x00bc    +0x00bc    } | .InterruptMode
        _m20 nt::unicode_view               resource_id;            //{ +0x00c0    +0x00c0    +0x00c0    } | .ResourceId
        _m21 struct nt::pohandle_t*         power_handle;           //{ +0x00d0    +0x00d0    +0x00d0    } | .PowerHandle
        _m22 uint8_t                        power_active;           //{ +0x00d8    +0x00d8    +0x00d8    } | .PowerActive
                                                                  
        SDK_MAGIC_PROPERTIES( "_HALP_DMA_CONTROLLER.$", 0xe0, true, 0xb3c4ae35b684e13c );                      
        SDK_FIXED_SIZE( dma_controller_t, 0xe0 );                      
    };                                                            
};
#include "magic/dma_controller_t.end.hpp"
SDK_VERIFY( struct halp::dma_controller_t, 0xe0 );
