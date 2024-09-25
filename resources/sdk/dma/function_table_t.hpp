#pragma once
#include <sdkgen/support_library.hpp>
#include "interrupt_type_t.hpp"

#include "magic/function_table_t.start.hpp"
namespace dma
{
    struct scatter_gather_list_t;
    struct request_line_binding_description_t;

    // [struct _DMA_FUNCTION_TABLE]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct function_table_t                                                          
    {                                                                                
        using validate_request_line_binding_t = sdk::function<uint8_t(void*, struct dma::request_line_binding_description_t*)>*;                              
        using query_max_fragments_t =           sdk::function<uint32_t(void*, uint32_t, uint32_t)>*;                              
        using program_channel_t =               sdk::function<void(void*, uint32_t, uint32_t, struct dma::scatter_gather_list_t*, int64_t, uint8_t, uint8_t)>*;                              
        using configure_channel_t =             sdk::function<int32_t(void*, uint32_t, uint32_t, void*)>*;                              
        using handle_interrupt_t =              sdk::function<uint8_t(void*, uint32_t*, enum dma::interrupt_type_t*)>*;                              
        using report_common_buffer_t =          sdk::function<void(void*, uint32_t, void*, int64_t)>*;                              
                                                                                     
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                              
        //                                                                           
        _m00 sdk::function<void(void*)>*               initialize_controller;          //{ +0x0000    +0x0000    +0x0000    } | .InitializeController
        _m01 validate_request_line_binding_t           validate_request_line_binding;  //{ +0x0008    +0x0008    +0x0008    } | .ValidateRequestLineBinding
        _m02 query_max_fragments_t                     query_max_fragments;            //{ +0x0010    +0x0010    +0x0010    } | .QueryMaxFragments
        _m03 program_channel_t                         program_channel;                //{ +0x0018    +0x0018    +0x0018    } | .ProgramChannel
        _m04 configure_channel_t                       configure_channel;              //{ +0x0020    +0x0020    +0x0020    } | .ConfigureChannel
        _m05 sdk::function<void(void*, uint32_t)>*     flush_channel;                  //{ +0x0028    +0x0028    +0x0028    } | .FlushChannel
        _m06 handle_interrupt_t                        handle_interrupt;               //{ +0x0030    +0x0030    +0x0030    } | .HandleInterrupt
        _m07 sdk::function<uint32_t(void*, uint32_t)>* read_dma_counter;               //{ +0x0038    +0x0038    +0x0038    } | .ReadDmaCounter
        _m08 report_common_buffer_t                    report_common_buffer;           //{ +0x0040    +0x0040    +0x0040    } | .ReportCommonBuffer
        _m09 sdk::function<uint8_t(void*, uint32_t)>*  cancel_transfer;                //{ +0x0048    +0x0048    +0x0048    } | .CancelTransfer
                                                                                     
        SDK_MAGIC_PROPERTIES( "_DMA_FUNCTION_TABLE.$", 0x50, true, 0xbc8e87c16aaae7d0 );                              
        SDK_FIXED_SIZE( function_table_t, 0x50 );                                    
    };                                                                               
};
#include "magic/function_table_t.end.hpp"
SDK_VERIFY( struct dma::function_table_t, 0x50 );
